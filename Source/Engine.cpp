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
	Engine::window = window;

	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &startTime);
	prevTime = startTime;
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

Engine::~Engine() {
	// TODO Auto-generated destructor stub
}

bool Engine::Initilize() throw(const char*) {
	glutInit(&argc, argv);
	window->initWindow();
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | displayMode);
	glClearColor(0.0f, 0.0f, 0.5f, 0.0f);
	try {
		if (glewInit() != GLEW_OK) {
			//fprintf(stderr, "Failed to initialize GLEW\n");
			throw "Failed to initialize GLEW\n";
		}
	} catch (const char* err) {
		std::cout<<err;
		return false;
	}

	return true;

}

bool Engine::Stop() {
	glutExit();
	return true;
}

double Engine::calcFPS() {
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &curTime);
	struct timespec deltaTime;
	deltaTime.tv_sec = curTime.tv_sec - prevTime.tv_sec;
	deltaTime.tv_nsec = curTime.tv_nsec - prevTime.tv_nsec;
	return 60 / (deltaTime.tv_nsec / 10e9 + deltaTime.tv_sec);

}
