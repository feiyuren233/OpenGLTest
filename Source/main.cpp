/*
 * main.cpp
 *
 *  Created on: Sep 19, 2015
 *      Author: renfeiyu
 */

#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<GL/glew.h>
#include<GL/gl.h>
#include<GL/glx.h>
#include<GL/glu.h>

#include <cassert>

#include<string.h>
#include <GL/freeglut.h>

#include "../Includes/SharedVariables.h"
#include "../Utility/Headers/fileLoader.h"
#include "../Utility/Headers/ShaderLoader.h"

using namespace std;

GLuint VBO;
GLuint IBO;

GLuint gWorldLocation;

const GLfloat g_vertex_buffer_data[] = { -1.0f, -1.0f, 0.0f, 0, -1, 1, 1.0f, -1.0f, 0.0f, 0.0f, 1.0f, 0.0f };
unsigned int Indices[] = { 0, 3, 1, 1, 3, 2, 2, 3, 0, 0, 1, 2 };

extern void RenderScene();

int main(int argc, char** argv) {

	std::cout << "Current directory: " << argv[0] << endl;

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

	glutInitWindowSize(1024, 768);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Tutorial");
	glutCreateSubWindow(0, 0, 0, 100, 100);

	glClearColor(0.0f, 0.0f, 0.5f, 0.0f);

	if (glewInit() != GLEW_OK) {
		fprintf(stderr, "Failed to initialize GLEW\n");
		return -1;
	}

	glGenBuffers(1, &VBO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(float) * 9, g_vertex_buffer_data, GL_STATIC_DRAW);
	glGenBuffers(1, &IBO);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, IBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(Indices), Indices, GL_STATIC_DRAW);

	//Shader

	GLuint ShaderProgram = glCreateProgram();
	GLuint ShaderObj = glCreateShader(GL_VERTEX_SHADER);
	GLuint ShaderObj2 = glCreateShader(GL_FRAGMENT_SHADER);

	loadShader("./Shaders/Fragment.fs", GL_FRAGMENT_SHADER, ShaderObj2, ShaderProgram);
	loadShader("./Shaders/Vertices.vs", GL_VERTEX_SHADER, ShaderObj, ShaderProgram);

	glBindAttribLocation(ShaderProgram, 0, "Position");

	glLinkProgram(ShaderProgram);

	std::cout << glGetAttribLocation(ShaderProgram, "Position") << std::endl;

	GLint success;
	GLchar ErrorLog[1024];
	glGetProgramiv(ShaderProgram, GL_LINK_STATUS, &success);
	if (success == 0) {
		glGetProgramInfoLog(ShaderProgram, sizeof(ErrorLog), NULL, ErrorLog);
		fprintf(stderr, "Error linking shader program: '%s'\n", ErrorLog);
	} else
		std::cout << "Linking shader program success" << endl;
	glValidateProgram(ShaderProgram);
	glUseProgram(ShaderProgram);

	GLuint gWorldLocation = glGetUniformLocation(ShaderProgram, "gWorld");
	assert(gWorldLocation != 0xFFFFFFFF);

	glutDisplayFunc(RenderScene);
	glutIdleFunc(RenderScene);

	glutMainLoop();

	return 0;
}

