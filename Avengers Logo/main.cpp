#include<stdio.h>
#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
using namespace std;


void plot(float X, float Y)
{
glClear (GL_COLOR_BUFFER_BIT);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(X,Y);

}
void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (0,1,0);
glPointSize(30.0);


glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glVertex2i(180,60);
glVertex2i(230,60);
glVertex2i(390,400);
glVertex2i(340,400);


glEnd();
glFlush ();
glBegin(GL_POLYGON);
glVertex2i(350,250);
glVertex2i(390,210);
glVertex2i(390,400);
glVertex2i(350,400);


glEnd();
glFlush ();
glBegin(GL_POLYGON);
glVertex2i(390,190);
glVertex2i(350,230);
glVertex2i(350,150);


glEnd();
glFlush ();
glBegin(GL_POLYGON);
glVertex2i(390,130);
glVertex2i(390,170);
glVertex2i(350,130);


glEnd();
glFlush ();
glBegin(GL_POLYGON);
glVertex2i(350,212);
glVertex2i(260,212);
glVertex2i(240,168);
glVertex2i(350,168);


glEnd();
glFlush ();
}

void myInit (void)
{
glClearColor(255,0,0,0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGBA);
glutInitWindowSize (1240, 1080);
glutInitWindowPosition (800,600);
glutCreateWindow ("Avengers");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
