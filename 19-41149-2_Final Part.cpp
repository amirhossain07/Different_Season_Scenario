#include <windows.h>
#include <GL/glut.h>
#include<Gl/gl.h>
#include <iostream>
#include<stdlib.h>
#include<math.h>
#define PI   3.14159265358979323846

using namespace std;

GLfloat boatPosition = 0.0f;
GLfloat boatSpeed= 0.0f;
bool winter=false,rainy=false,summer=true;

void update(int value)
{
    if (boatPosition < -2.0)
        boatPosition = 3.5f;
    else if (boatPosition > 3.5)
        boatPosition = -2.0f;


    boatPosition -=boatSpeed;

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


void boat()
{
    ///BOAT01///
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f,  -1.01f);
    glVertex2f(-0.2f, -1.01f);
    glVertex2f(-0.2f, -1.08f);
    glVertex2f(0.1f,  -1.08f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(122, 122, 82);
    glVertex2f(0.2f, -0.93f);
    glVertex2f(0.1f, -1.01f);
    glVertex2f(-0.2f, -1.01f);
    glVertex2f(-0.3f, -0.93f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(0.1f, -0.91f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);///boat01///
    glVertex2f(0.1f, -1.01f);
    glVertex2f(0.2f, -0.93f);
    glVertex2f(0.1f, -1.08f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);///boat01///
    glVertex2f(-0.2f, -1.01f);
    glVertex2f(-0.3f, -0.93f);
    glVertex2f(-0.2f, -1.08f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f, -0.91f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(0.1f, -0.91f);
    glVertex2f(0.2f, -0.93f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(-0.3f, -0.93f);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f, -0.91f);
    glVertex2f(0.1f, -1.01f);
    glVertex2f(0.0f, -0.91f);
    glVertex2f(0.0f, -1.01f);
    glVertex2f(-0.1f, -0.91f);
    glVertex2f(-0.1f, -1.01f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(-0.2f, -1.01f);
    glEnd();

///BOAT02///
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f, -0.75f);
    glVertex2f(-0.2f,-0.75f);
    glVertex2f(-0.2f,-0.82f);
    glVertex2f(0.1f, -0.82f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(122, 122, 82);
    glVertex2f(0.2f, -0.67f);
    glVertex2f(0.1f, -0.75f);
    glVertex2f(-0.2f,-0.75f);
    glVertex2f(-0.3f,-0.67f);
    glVertex2f(-0.2f,-0.65f);
    glVertex2f(0.1f, -0.65f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);///boat02///
    glVertex2f(0.1f, -0.75f);
    glVertex2f(0.2f, -0.67f);
    glVertex2f(0.1f, -0.82f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);///boat02///
    glVertex2f(-0.2f, -0.75f);
    glVertex2f(-0.3f, -0.67f);
    glVertex2f(-0.2f, -0.82f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f,  -0.65f);
    glVertex2f(-0.2f, -0.65f);
    glVertex2f(0.1f,  -0.65f);
    glVertex2f(0.2f,  -0.67f);
    glVertex2f(-0.2f, -0.65f);
    glVertex2f(-0.3f, -0.67f);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f, - 0.65f);
    glVertex2f(0.1f, - 0.75f);
    glVertex2f(0.0f, - 0.65f);
    glVertex2f(0.0f,  -0.75f);
    glVertex2f(-0.1f, -0.65f);
    glVertex2f(-0.1f, -0.75f);
    glVertex2f(-0.2f, -0.65f);
    glVertex2f(-0.2f, -0.75f);
    glEnd();

    ///SHIP///
    if (rainy==true || summer==true)
    {
        glPushMatrix();
        glTranslatef(boatPosition,0.0f, 0.0f);
        glBegin(GL_POLYGON);
        glColor3ub(0, 0, 0);
        glVertex2f(-1.8f, 0.19f);
        glVertex2f(-1.2f, 0.19f);
        glVertex2f(-1.077f, 0.47f);
        glVertex2f(-1.19f, 0.29f);
        glVertex2f(-1.9f, 0.29f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(102, 255, 255);
        glVertex2f(-1.85f, 0.29f);
        glVertex2f(-1.25f, 0.29f);
        glVertex2f(-1.25f, 0.47f);
        glVertex2f(-1.85f, 0.47f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(71, 107, 107);
        glVertex2f(-1.8f, 0.47f);
        glVertex2f(-1.35f, 0.47f);
        glVertex2f(-1.35f, 0.61f);
        glVertex2f(-1.8f, 0.61f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(153, 102, 51);
        glVertex2f(-1.5f, 0.61f);
        glVertex2f(-1.6f, 0.61f);
        glVertex2f(-1.6f, 0.66f);
        glVertex2f(-1.5f, 0.66f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(255, 0, 0);
        glVertex2f(-1.55f, 0.66f);
        glVertex2f(-1.55f, 0.72f);
        glVertex2f(-1.75f, 0.72f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(255, 255, 0);
        glVertex2f(-1.8f, 0.44f);
        glVertex2f(-1.72f, 0.44f);
        glVertex2f(-1.72f, 0.35f);
        glVertex2f(-1.8f, 0.35f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(255, 255, 0);
        glVertex2f(-1.62f, 0.44f);
        glVertex2f(-1.56f, 0.44f);
        glVertex2f(-1.56f, 0.35f);
        glVertex2f(-1.62f, 0.35f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(255, 255, 0);
        glVertex2f(-1.40f, 0.44f);
        glVertex2f(-1.32f, 0.44f);
        glVertex2f(-1.32f, 0.35f);
        glVertex2f(-1.40f, 0.35f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(255, 255, 0);
        glVertex2f(-1.7f, 0.48f);
        glVertex2f(-1.62f, 0.48f);
        glVertex2f(-1.62f, 0.58f);
        glVertex2f(-1.7f, 0.58f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(255, 255, 0);
        glVertex2f(-1.5f, 0.48f);
        glVertex2f(-1.42f, 0.48f);
        glVertex2f(-1.42f, 0.58f);
        glVertex2f(-1.5f, 0.58f);
        glEnd();

        glLineWidth(2);
        glBegin(GL_LINES);
        glColor3ub(0,0,0);
        glVertex2f(-1.85f, 0.29f);
        glVertex2f(-1.25f, 0.29f);
        glVertex2f(-1.25f, 0.47f);
        glVertex2f(-1.85f, 0.47f);
        glEnd();
        glLineWidth(2);
        glBegin(GL_LINES);
        glVertex2f(-1.25f, 0.29f);
        glVertex2f(-1.25f, 0.47f);
        glVertex2f(-1.85f, 0.47f);
        glVertex2f(-1.85f, 0.29f);
        glEnd();
        glLineWidth(2);
        glBegin(GL_LINES);
        glColor3ub(0,0,0);
        glVertex2f(-1.8f, 0.47f);
        glVertex2f(-1.35f, 0.47f);
        glVertex2f(-1.35f, 0.61f);
        glVertex2f(-1.8f, 0.61f);
        glEnd();
        glLineWidth(2);
        glBegin(GL_LINES);
        glColor3ub(0,0,0);
        glVertex2f(-1.35f, 0.47f);
        glVertex2f(-1.35f, 0.61f);
        glVertex2f(-1.8f, 0.61f);
        glVertex2f(-1.8f, 0.47f);
        glEnd();
        glPopMatrix();

    }
    glFlush();
}



void river()
{
    if (winter==true)
    {
        glColor3ub(51, 102, 255);
    }
    else if (summer==true)
    {
        glColor3ub(0, 102, 255);
    }
    else if (rainy==true)
    {
        glColor3ub(0, 0, 255);
    }
    else
    {

    }

    glBegin(GL_QUADS);
    glVertex2f(-2.0f, 0.80f);
    glVertex2f(2.0f, 0.80f);
    glVertex2f(2.0f, -2.0f);
    glVertex2f(-2.0f, -2.0f);
    glEnd();

    glFlush();
}
void Sky_Star(void)
{
///SKY////
    glBegin(GL_POLYGON);
    if (winter==true)
    {
        glColor3ub(26, 26, 26);
    }
    else if (summer==true)
    {
        glColor3ub(155, 215, 232);
    }
    else if (rainy==true)
    {
        glColor3ub(25, 102, 102);
    }
    else
    {

    }

    glVertex2f(0.0f, 0.8f);
    glVertex2f(2.0f,  0.8f);
    glVertex2f(2.0f,  2.0f);
    glVertex2f(0.0f, 2.0f);
    glVertex2f(-0.0f, 0.8f);
    glVertex2f(-2.0f,  0.8f);
    glVertex2f(-2.0f,  2.0f);
    glVertex2f(-0.0f, 2.0f);
    glEnd();

///STARS///
    if (winter==true)
    {
        glPointSize(3);
        glBegin(GL_POINTS);
        glColor3ub(255,255,255);
        glVertex2f(-1.7f, 1.8f);
        glVertex2f(-1.8f, 1.7f);
        glVertex2f(-1.9f, 1.9f);
        glVertex2f(-1.6f, 1.8f);
        glVertex2f(-1.5f, 1.9f);
        glVertex2f(-1.2f, 1.8f);
        glVertex2f(-1.3f, 1.6f);
        glVertex2f(-1.1f, 1.9f);
        glVertex2f(-1.0f, 1.8f);
        glVertex2f(1.1f,  1.8f);
        glVertex2f(1.2,   1.8f);
        glVertex2f(1.3f, 1.5f);
        glVertex2f(1.4f, 1.9f);
        glVertex2f(1.5f, 1.0f);
        glVertex2f(1.6f, 1.9f);
        glVertex2f(1.7f, 1.9f);
        glVertex2f(1.8f, 1.8f);
        glVertex2f(-0.7f, 1.8f);
        glVertex2f(-0.8f, 1.7f);
        glVertex2f(-0.9f, 1.9f);
        glVertex2f(-0.6f, 1.8f);
        glVertex2f(-0.5f, 1.9f);
        glVertex2f(-0.2f, 1.8f);
        glVertex2f(-0.3f, 1.6f);
        glVertex2f(-0.1f, 1.9f);
        glVertex2f(-0.0f, 1.8f);
        glVertex2f(0.1f,  1.8f);
        glVertex2f(0.2,   1.8f);
        glVertex2f(0.3f, 1.5f);
        glVertex2f(0.4f, 1.9f);
        glVertex2f(0.5f, 1.0f);
        glVertex2f(0.6f, 1.9f);
        glVertex2f(0.7f, 1.9f);
        glVertex2f(0.8f, 1.8f);
        glEnd();
    }

    if (winter==true)
    {
        glColor3ub(255, 255, 255);
        circle(1.66,1.8,0.12);
    }
    else if (summer==true)
    {
        glColor3ub(255, 255, 0);
        circle(-1.66,1.8,0.12);
    }
    else if (rainy==true)
    {
        glColor3ub(230, 230, 0);
        circle(-1.66,1.8,0.12);
    }
    else
    {

    }

    glFlush();
}


void display(void)
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    //glLineWidth(1);

    river();
    Sky_Star();
    boat();

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

    else if(key=='e')
    {
        if(summer==true || rainy==true)
        {
            boatSpeed += 0.01f;
            glutPostRedisplay();
        }
    }
    else if(key=='f')
    {
        if(summer==true || rainy==true)
        {
            boatSpeed -= 0.01f;
            glutPostRedisplay();
        }
    }
    else if(key=='g')
    {
        boatSpeed = 0.0f;
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
