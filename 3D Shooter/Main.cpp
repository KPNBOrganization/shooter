#include "libs/glew/glew.h"
#include "libs/freeglut/freeglut.h"

#include <iostream>

#include "Core/ShaderLoader.hpp"

using namespace Core;

GLuint program;

void renderScene(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0.0, 0.0, 0.0, 1.0);

	glUseProgram(program);

	glDrawArrays(GL_TRIANGLES, 0, 3);

	glutSwapBuffers();
}

void init()
{
	glEnable(GL_DEPTH_TEST);

	Core::ShaderLoader shaderLoader;
	program = shaderLoader.CreateProgram((char*)"Shaders\\VertexShader.glsl", 
											(char*)"Shaders\\FragmentShader.glsl");

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(500, 500);
	glutInitWindowSize(800, 600);
	glutCreateWindow("My Second OpenGL Project");
	glewInit();

	init();
	
	glutDisplayFunc(renderScene);
	glutMainLoop();
	glDeleteProgram(program);

	return 0;
}