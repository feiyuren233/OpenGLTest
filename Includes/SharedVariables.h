#include<stdio.h>
#include<stdlib.h>
#include<X11/X.h>
#include<X11/Xlib.h>
#include<GL/gl.h>
#include<GL/glx.h>
#include<GL/glu.h>



extern GLuint VBO;
extern GLuint IBO;
extern GLuint gWorldLocation;

extern Display                 *dpy;
extern Window                  root;
extern GLint                   att[];
extern XVisualInfo             *vi;
extern Colormap                cmap;
extern XSetWindowAttributes    swa;
extern Window                  win;
extern GLXContext              glc;
extern XWindowAttributes       gwa;
extern XEvent                  xev;

