/*
 * GLWindow.cpp
 *
 *  Created on: Jan 10, 2016
 *      Author: feiyu
 */
#include <stdlib.h>
#include "GLWindow.h"

GLWindow::GLWindow(const char* winName, int winX, int winY, int winWidth, int winHeight, bool fullScreen) {
	// TODO Auto-generated constructor stub
	DisplayFunc = IdleFunc = ResizeFunc = RePositionFunc = NULL;
	GLWindow::fullScreen = fullScreen;
	GLWindow::winX = winX;
	GLWindow::winY = winY;
	GLWindow::winWidth = winWidth;
	GLWindow::winHeight = winHeight;
	GLWindow::winName = winName;

	winID = INVALID_WINID;
}

void GLWindow::RegDisplayFunc(void (*DisplayFunc)()) {
	GLWindow::DisplayFunc = DisplayFunc;
}
void GLWindow::RegIdleFunc(void (*IdleFunc)()) {
	GLWindow::IdleFunc = IdleFunc;
}
void GLWindow::RegResizeFunc(void (*ResizeFunc)()) {
	GLWindow::ResizeFunc = ResizeFunc;
}
void GLWindow::RegRePositionFunc(void (*RePositionFunc)()) {
	GLWindow::RePositionFunc = RePositionFunc;
}
GLWindow::~GLWindow() {
	// TODO Auto-generated destructor stub
	glutDestroyWindow(winID);
}

void GLWindow::initWindow() {
	glutInitWindowSize(winWidth, winHeight);
	glutInitWindowPosition(winX, winY);
	winID = glutCreateWindow(winName.c_str());

}

