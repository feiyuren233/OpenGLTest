/*
 * Engine.h
 *
 *  Created on: Jan 9, 2016
 *      Author: feiyu
 */

#ifndef ENGINE_H_
#define ENGINE_H_

#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<GL/glew.h>
#include<GL/gl.h>
#include<GL/glx.h>
#include<GL/glu.h>
#include <vector>
#include <cassert>

#include<string.h>
#include <GL/freeglut.h>
#include "../Game/GameObj.h"
#include "GLWindow.h"

#include <time.h>


class Engine {
private:
	int argc;
	char** argv;
	unsigned int displayMode ;
	GLWindow *window;

	std::vector<GameObj> gameObjs;

	struct timespec startTime;
	struct timespec prevTime;
	struct timespec curTime;
protected:

public:
	//if fullScreen == true, wWidth and wHeight will be ignored, winWidth, winHeight will represent real screen width & height
	Engine(int argc, char** argv, unsigned int displayMode, GLWindow *window);
	bool Initilize() throw(const char*);
	void setAttr(unsigned int attr);
	bool readAttr(unsigned int attr);
	bool Start();
	bool Stop();
	virtual ~Engine();

	double calcFPS();

};



#endif /* ENGINE_H_ */

