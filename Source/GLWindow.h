/*
 * GLWindow.h
 *
 *  Created on: Jan 10, 2016
 *      Author: feiyu
 */

#ifndef GLWINDOW_H_
#define GLWINDOW_H_

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<GL/glew.h>
#include<GL/gl.h>
#include<GL/glx.h>
#include<GL/glu.h>
#include <vector>
#include <cassert>
#include <exception>

#include<string.h>
#include <GL/freeglut.h>




#define INVALID_WINID 0
class GLWindow {
private:
	void (*DisplayFunc)();
	void (*IdleFunc)();
	void (*ResizeFunc)(int, int);
	void (*RePositionFunc)(int, int);

	int winID;
	int winWidth, winHeight;
	int winX, winY;
	std::string winName;

	bool fullScreen;
protected:

public:
	void RegDisplayFunc(void (*DisplayFunc)());
	void RegIdleFunc(void (*IdleFunc)());
	void RegResizeFunc(void (*ResizeFunc)(int, int));
	void RegRePositionFunc(void (*RePositionFunc)(int, int));

	GLWindow createSubWindow();
	void initWindow();
	GLWindow(const char* winName, int winX, int winY, int winWidth, int winHeight, bool fullScreen);
	virtual ~GLWindow();
};

#endif /* GLWINDOW_H_ */
