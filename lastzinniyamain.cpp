#include <windows.h>
#include <GL/glut.h>
#include<Gl/gl.h>
#include <iostream>
#include<stdlib.h>
#include<math.h>
#define PI   3.14159265358979323846

using namespace std;

GLfloat carPosition=0.0f,carPosition1=0.0f;
GLfloat carSpeed= 0.0f,carSpeed1= 0.0f;
bool winter=false,rainy=false,summer=true;

void update(int value)
{

    if (carPosition > 4.0)
        carPosition = -0.4f;

    if (carPosition1 < -4.0)
        carPosition1 = 1.0f;


    carPosition -=carSpeed;
    carPosition1 -=carSpeed1;

    glutPostRedisplay();
    glutTimerFunc(100, update,0);
}
void circle(GLfloat x, GLfloat y, GLfloat r)
{
    int i;
    int triangleAmount = 20; //# of triangles used to draw circle
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x+(r*cos(i * twicePi / triangleAmount)),
            y+(r*sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}



void initGL()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.01f);
}


void road()
{
    ///HIGHWAYROAD///
    glBegin(GL_QUADS);
    glColor3ub(64, 64, 64);
    glVertex2f(-2.0f, -2.0f);
    glVertex2f(2.0f, -2.0f);
    glVertex2f(2.0f, -1.25f);
    glVertex2f(-2.0f, -1.25f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);///LINES///
    glVertex2f(-2.0f, -2.0f);
    glVertex2f(2.0f, -2.0f);
    glVertex2f(2.0f, -1.25f);
    glVertex2f(-2.0f, -1.25f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(0.2f, -1.60f);
    glVertex2f(0.4f, -1.60f);
    glVertex2f(0.4f, -1.64f);
    glVertex2f(0.2f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(0.6f, -1.60f);
    glVertex2f(0.8f, -1.60f);
    glVertex2f(0.8f, -1.64f);
    glVertex2f(0.6f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(1.0f, -1.60f);
    glVertex2f(1.2f, -1.60f);
    glVertex2f(1.2f, -1.64f);
    glVertex2f(1.0f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(1.4f, -1.60f);
    glVertex2f(1.6f, -1.60f);
    glVertex2f(1.6f, -1.64f);
    glVertex2f(1.4f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(1.8f, -1.60f);
    glVertex2f(2.0f, -1.60f);
    glVertex2f(2.0f, -1.64f);
    glVertex2f(1.8f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-0.0f, -1.60f);
    glVertex2f(-0.2f, -1.60f);
    glVertex2f(-0.2f, -1.64f);
    glVertex2f(-0.0f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-0.4f, -1.60f);
    glVertex2f(-0.6f, -1.60f);
    glVertex2f(-0.6f, -1.64f);
    glVertex2f(-0.4f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-0.8f, -1.60f);
    glVertex2f(-1.0f, -1.60f);
    glVertex2f(-1.0f, -1.64f);
    glVertex2f(-0.8f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-1.2f, -1.60f);
    glVertex2f(-1.4f, -1.60f);
    glVertex2f(-1.4f, -1.64f);
    glVertex2f(-1.2f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-1.6f, -1.60f);
    glVertex2f(-1.8f, -1.60f);
    glVertex2f(-1.8f, -1.64f);
    glVertex2f(-1.6f, -1.64f);
    glEnd();
}




void hill()
{
    ///HILL01///
    glBegin(GL_POLYGON);
    if (winter==true)
    {
        glColor3ub(255, 255, 255);
    }
    else if (summer==true)
    {
        glColor3ub(0, 255, 0);
    }

    else if (rainy==true)
    {
        glColor3ub(0, 102, 0);
    }
    else
    {

    }
    glVertex2f(-1.5f,  0.8f);
    glVertex2f(-2.0f,  0.8f);
    glVertex2f(-1.97f, 0.90f);
    glVertex2f(-1.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-1.53f, 0.90f);
    glVertex2f(-1.97f, 0.90f);
    glVertex2f(-1.85f, 1.05f);
    glVertex2f(-1.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-1.65f, 1.05f);
    glVertex2f(-1.85f, 1.05f);
    glVertex2f(-1.75f, 1.10f);
    glEnd();
///HILL02///
    glBegin(GL_POLYGON);
    glVertex2f(-1.0f,  0.8f);
    glVertex2f(-1.5f,  0.8f);
    glVertex2f(-1.47f, 0.90f);
    glVertex2f(-1.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-1.03f, 0.90f);
    glVertex2f(-1.47f, 0.90f);
    glVertex2f(-1.35f, 1.05f);
    glVertex2f(-1.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-1.15f, 1.05f);
    glVertex2f(-1.35f,1.05f);
    glVertex2f(-1.25f,1.10f);
    glEnd();
///HILL03///
    glBegin(GL_POLYGON);
    glVertex2f(-0.5f,  0.8f);
    glVertex2f(-1.0f,  0.8f);
    glVertex2f(-0.97f, 0.90f);
    glVertex2f(-0.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-0.53f, 0.90f);
    glVertex2f(-0.97f, 0.90f);
    glVertex2f(-0.85f, 1.05f);
    glVertex2f(-0.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-0.65f, 1.05f);
    glVertex2f(-0.85f, 1.05f);
    glVertex2f(-0.75f, 1.10f);
    glEnd();
///HILL04///
    glBegin(GL_POLYGON);
    glVertex2f(-0.0f,  0.8f);
    glVertex2f(-0.5f,  0.8f);
    glVertex2f(-0.47f, 0.90f);
    glVertex2f(-0.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-0.03f, 0.90f);
    glVertex2f(-0.47f, 0.90f);
    glVertex2f(-0.35f, 1.05f);
    glVertex2f(-0.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-0.15f, 1.05f);
    glVertex2f(-0.35f,1.05f);
    glVertex2f(-0.25f,1.10f);
    glEnd();
///HILL05///
    glBegin(GL_POLYGON);
    glVertex2f(1.5f,  0.8f);
    glVertex2f(2.0f,  0.8f);
    glVertex2f(1.97f, 0.90f);
    glVertex2f(1.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(1.53f, 0.90f);
    glVertex2f(1.97f, 0.90f);
    glVertex2f(1.85f, 1.05f);
    glVertex2f(1.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(1.65f, 1.05f);
    glVertex2f(1.85f, 1.05f);
    glVertex2f(1.75f, 1.10f);
    glEnd();
///HILL06///
    glBegin(GL_POLYGON);
    glVertex2f(1.0f,  0.8f);
    glVertex2f(1.5f,  0.8f);
    glVertex2f(1.47f, 0.90f);
    glVertex2f(1.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(1.03f, 0.90f);
    glVertex2f(1.47f, 0.90f);
    glVertex2f(1.35f, 1.05f);
    glVertex2f(1.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(1.15f, 1.05f);
    glVertex2f(1.35f,1.05f);
    glVertex2f(1.25f,1.10f);
    glEnd();
///HILL07///
    glBegin(GL_POLYGON);
    glVertex2f(0.5f,  0.8f);
    glVertex2f(1.0f,  0.8f);
    glVertex2f(0.97f, 0.90f);
    glVertex2f(0.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.53f, 0.90f);
    glVertex2f(0.97f, 0.90f);
    glVertex2f(0.85f, 1.05f);
    glVertex2f(0.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.65f, 1.05f);
    glVertex2f(0.85f, 1.05f);
    glVertex2f(0.75f, 1.10f);
    glEnd();
///HILL08///
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,  0.8f);
    glVertex2f(0.5f,  0.8f);
    glVertex2f(0.47f, 0.90f);
    glVertex2f(0.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.03f, 0.90f);
    glVertex2f(0.47f, 0.90f);
    glVertex2f(0.35f, 1.05f);
    glVertex2f(0.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.15f, 1.05f);
    glVertex2f(0.35f,1.05f);
    glVertex2f(0.25f,1.10f);
    glEnd();
    glFlush();
}


void car()
{
    ///CAR01///

    glPushMatrix();
    glTranslatef(carPosition,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 204, 153);
    glVertex2f(-1.7f, -1.45f);
    glVertex2f(-1.8f, -1.45f);
    glVertex2f(-2.0f, -1.45f);
    glVertex2f(-2.0f, -1.3f);
    glVertex2f(-1.8f, -1.3f);
    glVertex2f(-1.7f, -1.35f);
    glEnd();

    glColor3ub(0, 0, 0);
    circle(-1.92,-1.45,0.03);
    circle(-1.78,-1.45,0.03);
    glPopMatrix();
    glFlush();

///CAR02///

    glPushMatrix();
    glTranslatef(carPosition1,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 153);
    glVertex2f(1.7f, -1.91f);
    glVertex2f(1.8f, -1.91f);
    glVertex2f(2.0f, -1.91f);
    glVertex2f(2.0f, -1.78f);
    glVertex2f(1.8f, -1.78f);
    glVertex2f(1.7f, -1.86f);
    glEnd();

    glColor3ub(0, 0, 0);
    circle(1.92,-1.91,0.03);
    circle(1.78,-1.91,0.03);

    glPopMatrix();
    glFlush();

}




void display(void)
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    hill();
    road();
    car();

}

void keyboard(unsigned char key, int x, int y)
{
    if(key=='w')
    {
        summer=false;
        winter=true;
        rainy=false;
        glutPostRedisplay();
    }
    else if(key=='s')
    {
        summer=true;
        rainy=false;
        winter=false;
        glutPostRedisplay();
    }
    else if(key=='r')
    {
        rainy=true;
        summer=false;
        winter=false;
        glutPostRedisplay();
    }

    else if(key=='a')
    {
        carSpeed -= 0.01f;
        glutPostRedisplay();
    }
    else if(key=='b')
    {
        carSpeed = 0.0f;
        glutPostRedisplay();
    }
    else if(key=='c')
    {
        carSpeed1 += 0.01f;
        glutPostRedisplay();
    }
    else if(key=='d')
    {
        carSpeed1 = 0.0f;
        glutPostRedisplay();
    }

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);

    glutCreateWindow("DIFFERENT SEASON SCENARIO");
    glutInitWindowSize(700,700);
    glutInitWindowPosition(0, 0);
    gluOrtho2D(-2,2,-2,2);
    glutDisplayFunc(display);
    glutTimerFunc(100, update, 0);

    glutKeyboardFunc(keyboard);
    initGL();
    glutMainLoop();
    return 0;
}
