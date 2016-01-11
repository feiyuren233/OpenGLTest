/*
 * Engine.cpp
 *
 *  Created on: Jan 9, 2016
 *      Author: feiyu
 */

#include "Engine.h"

Engine::Engine(int argc, char** argv, unsigned int displayMode, GLWindow *window) {
	// TODO Auto-generated constructor stub
	Engine::argc = argc;
	Engine::argv = argv;
	Engine::displayMode = displayMode | GL_DOUBLE | GL_RGBA;

	glutInit(&argc, argv);
	window->initWindow();
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | displayMode);

}

bool Engine::readAttr(unsigned int attr) {
	return displayMode & attr;
}
void Engine::setAttr(unsigned int attr) {
	Engine::displayMode |= attr;
}

bool Engine::Start() {
	glutMainLoop();
	return true;
}

/*bool Engine::Stop() {

}*/

Engine::~Engine() {
	// TODO Auto-generated destructor stub
}

double Engine::calcFPS() {
}
