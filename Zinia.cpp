#include<cstdio>
#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846

void initGL() {

    glClearColor(0.0f, 0.0f, 0.0f, 0.01f);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

///RIVER///
    glBegin(GL_QUADS);
    glColor3ub(0, 102, 255);
    glVertex2f(-2.0f, 0.80f);
    glVertex2f(2.0f, 0.80f);
    glVertex2f(2.0f, -2.0f);
    glVertex2f(-2.0f, -2.0f);
    glEnd();

///HILL01///
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(-1.5f,  0.8f);
	glVertex2f(-2.0f,  0.8f);
    glVertex2f(-1.97f, 0.90f);
    glVertex2f(-1.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(34,139,34);
    glVertex2f(-1.53f, 0.90f);
    glVertex2f(-1.97f, 0.90f);
    glVertex2f(-1.85f, 1.05f);
    glVertex2f(-1.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
    glVertex2f(-1.65f, 1.05f);
    glVertex2f(-1.85f, 1.05f);
    glVertex2f(-1.75f, 1.10f);
    glEnd();
///HILL02///
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(-1.0f,  0.8f);
	glVertex2f(-1.5f,  0.8f);
    glVertex2f(-1.47f, 0.90f);
    glVertex2f(-1.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(34,139,34);
    glVertex2f(-1.03f, 0.90f);
    glVertex2f(-1.47f, 0.90f);
    glVertex2f(-1.35f, 1.05f);
    glVertex2f(-1.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
    glVertex2f(-1.15f, 1.05f);
    glVertex2f(-1.35f,1.05f);
    glVertex2f(-1.25f,1.10f);
    glEnd();
///HILL03///
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(-0.5f,  0.8f);
	glVertex2f(-1.0f,  0.8f);
    glVertex2f(-0.97f, 0.90f);
    glVertex2f(-0.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(34,139,34);
    glVertex2f(-0.53f, 0.90f);
    glVertex2f(-0.97f, 0.90f);
    glVertex2f(-0.85f, 1.05f);
    glVertex2f(-0.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
    glVertex2f(-0.65f, 1.05f);
    glVertex2f(-0.85f, 1.05f);
    glVertex2f(-0.75f, 1.10f);
    glEnd();
///HILL04///
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(-0.0f,  0.8f);
	glVertex2f(-0.5f,  0.8f);
    glVertex2f(-0.47f, 0.90f);
    glVertex2f(-0.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(34,139,34);
    glVertex2f(-0.03f, 0.90f);
    glVertex2f(-0.47f, 0.90f);
    glVertex2f(-0.35f, 1.05f);
    glVertex2f(-0.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
    glVertex2f(-0.15f, 1.05f);
    glVertex2f(-0.35f,1.05f);
    glVertex2f(-0.25f,1.10f);
    glEnd();
///HILL05///
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(1.5f,  0.8f);
	glVertex2f(2.0f,  0.8f);
    glVertex2f(1.97f, 0.90f);
    glVertex2f(1.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(34,139,34);
    glVertex2f(1.53f, 0.90f);
    glVertex2f(1.97f, 0.90f);
    glVertex2f(1.85f, 1.05f);
    glVertex2f(1.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
    glVertex2f(1.65f, 1.05f);
    glVertex2f(1.85f, 1.05f);
    glVertex2f(1.75f, 1.10f);
    glEnd();
///HILL06///
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(1.0f,  0.8f);
	glVertex2f(1.5f,  0.8f);
    glVertex2f(1.47f, 0.90f);
    glVertex2f(1.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(34,139,34);
    glVertex2f(1.03f, 0.90f);
    glVertex2f(1.47f, 0.90f);
    glVertex2f(1.35f, 1.05f);
    glVertex2f(1.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
    glVertex2f(1.15f, 1.05f);
    glVertex2f(1.35f,1.05f);
    glVertex2f(1.25f,1.10f);
    glEnd();
///HILL07///
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(0.5f,  0.8f);
	glVertex2f(1.0f,  0.8f);
    glVertex2f(0.97f, 0.90f);
    glVertex2f(0.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(34,139,34);
    glVertex2f(0.53f, 0.90f);
    glVertex2f(0.97f, 0.90f);
    glVertex2f(0.85f, 1.05f);
    glVertex2f(0.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
    glVertex2f(0.65f, 1.05f);
    glVertex2f(0.85f, 1.05f);
    glVertex2f(0.75f, 1.10f);
    glEnd();
///HILL08///
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(0.0f,  0.8f);
	glVertex2f(0.5f,  0.8f);
    glVertex2f(0.47f, 0.90f);
    glVertex2f(0.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(34,139,34);
    glVertex2f(0.03f, 0.90f);
    glVertex2f(0.47f, 0.90f);
    glVertex2f(0.35f, 1.05f);
    glVertex2f(0.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
    glVertex2f(0.15f, 1.05f);
    glVertex2f(0.35f,1.05f);
    glVertex2f(0.25f,1.10f);
    glEnd();

///BIRD01///
    glBegin(GL_POLYGON);
    glColor3ub(184,134,11);
    glVertex2f(-1.8f,  1.55f);
    glVertex2f(-1.7f,  1.65f);
    glVertex2f(-1.95f, 1.63f);
    glVertex2f(-1.9f, 1.53f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-1.78f,1.641f);
    glVertex2f(-1.88f,1.8f);
    glVertex2f(-1.85f,1.639f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-1.78f,1.641f);
    glVertex2f(-1.91f,1.75f);
    glVertex2f(-1.87f,1.639f);
    glEnd();

    glPointSize( 2.5 );
    glBegin(GL_POINTS);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-01.74f,1.635f);
    glEnd();

///BIRD02///
    glBegin(GL_POLYGON);
    glColor3ub(255, 153, 0);
    glVertex2f(-1.5f,  1.35f);
    glVertex2f(-1.4f,  1.45f);
    glVertex2f(-1.65f, 1.43f);
    glVertex2f(-1.6f, 1.33f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-1.48f,1.441f);
    glVertex2f(-1.58f,1.6f);
    glVertex2f(-1.55f,1.439f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-1.48f,1.441f);
    glVertex2f(-1.61f,1.55f);
    glVertex2f(-1.57f,1.439f);
    glEnd();

    glPointSize( 2.5 );
    glBegin(GL_POINTS);
    glColor3ub(0,0,0);
    glVertex2f(-01.44f,1.435f);
    glEnd();

	glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow(" DIFFERENT SEASON SCENARIO");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(20, 20);
    gluOrtho2D(-2,2,-2,2);
    glutDisplayFunc(display);


    initGL();
    glutMainLoop();
    return 0;
}
