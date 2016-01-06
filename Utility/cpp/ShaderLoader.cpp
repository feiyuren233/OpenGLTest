#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<GL/glew.h>
#include<GL/gl.h>
#include<GL/glx.h>
#include<GL/glu.h>

#include<string.h>
#include <GL/freeglut.h>
#include "../Headers/ShaderLoader.h"
#include "../Headers/fileLoader.h"

void loadShader(char* filePath, GLenum ShaderType, GLuint ShaderObj, GLuint ShaderProgram) {

	string shadertext = loadFile(filePath);
	const char* ttt= shadertext.c_str();
	std::cout << shadertext << endl;
	int len = shadertext.length();

	glShaderSource(ShaderObj, 1, &ttt, &len);
	glCompileShader(ShaderObj);

	GLint success;
	glGetShaderiv(ShaderObj, GL_COMPILE_STATUS, &success);
	if (!success) {
		GLchar InfoLog[1024];
		glGetShaderInfoLog(ShaderObj, sizeof(InfoLog), NULL, InfoLog);
		fprintf(stderr, "Error compiling shader type %d: '%s'\n", ShaderType, InfoLog);
	} else
		std::cout << "ShaderProgram" << filePath << " compile success" << endl;
	glAttachShader(ShaderProgram, ShaderObj);
}
