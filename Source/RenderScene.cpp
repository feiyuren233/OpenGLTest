#include <GL/glew.h>
#include <GL/gl.h>
#include <GL/glx.h>
#include <GL/glu.h>
#include <GL/freeglut.h>
#include <iostream>

#include <math.h>
#include "../Includes/SharedVariables.h"
#include "../Utility/Headers/mMathTools.h"
#include "../Utility/Headers/mesh.h"

void RenderScene() {
	std::cout << "entered renderscene" << std::endl;
	glClear(GL_COLOR_BUFFER_BIT);
	Mesh mesh;
	mesh.LoadMesh("/home/feiyu/devTools/ogldev-source/Content/jeep.obj");

//transform
	static float Scale = 0.0f;
	Matrix44f mat44;
	Scale += 0.001f;
	mat44(0, 0) = cosf(Scale);
	mat44(0, 1) = 0;
	mat44(0, 2) = -sinf(Scale);
	mat44(0, 3) = 0;
	mat44(1, 0) = 0;
	mat44(1, 1) = 1;
	mat44(1, 2) = 0;
	mat44(1, 3) = 0;
	mat44(2, 0) = sinf(Scale);
	mat44(2, 1) = 0;
	mat44(2, 2) = cosf(Scale);
	mat44(2, 3) = 0;
	mat44(3, 0) = 0;
	mat44(3, 1) = 0;
	mat44(3, 2) = 0;
	mat44(3, 3) = 1;
	glUniformMatrix4fv(gWorldLocation, 1, GL_TRUE, &mat44(0, 0));
//end transform

	mesh.Render();

	glutSwapBuffers();
	glutPostRedisplay();
	std::cout << "left renderscene" << std::endl;
	/*glClear(GL_COLOR_BUFFER_BIT);
	 static float Scale = 0.0f;
	 Matrix44f mat44;

	 Scale += 0.001f;
	 mat44(0,0)=cosf(Scale);
	 mat44(0,1)=0;
	 mat44(0,2)=-sinf(Scale);
	 mat44(0,3)=0;
	 mat44(1,0)=0;
	 mat44(1,1)=1;
	 mat44(1,2)=0;
	 mat44(1,3)=0;
	 mat44(2,0)=sinf(Scale);
	 mat44(2,1)=0;
	 mat44(2,2)=cosf(Scale);
	 mat44(2,3)=0;
	 mat44(3,0)=0;
	 mat44(3,1)=0;
	 mat44(3,2)=0;
	 mat44(3,3)=1;

	 glUniformMatrix4fv(gWorldLocation, 1, GL_TRUE, &mat44(0,0));

	 glEnableVertexAttribArray(0);
	 glBindBuffer(GL_ARRAY_BUFFER, VBO);
	 glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
	 glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, IBO);

	 glDrawElements(GL_TRIANGLES, 12, GL_UNSIGNED_INT, 0);

	 glDisableVertexAttribArray(0);

	 glutSwapBuffers();*/
}

