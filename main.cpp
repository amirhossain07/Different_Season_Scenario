#include <windows.h>
#include <GL/glut.h>
#include<Gl/gl.h>
#include <iostream>
#include<stdlib.h>
#include<math.h>
#define PI   3.14159265358979323846

using namespace std;

GLfloat birdPosition=0.0f,birdPosition1=0.0f,cloudPosition=0.0f,cloudPosition1=0.0f;
GLfloat birdSpeed=0.0f,birdSpeed1=0.0f,cloudSpeed=0.0f,cloudSpeed1=0.0f;
bool winter=false,rainy=false,summer=true;

void update(int value)
{

    if (cloudPosition > 1.8)
        cloudPosition = -3.0f;

    if (cloudPosition1 < -4.0)
        cloudPosition1 = 1.0;

    if (birdPosition > 4.0)
        birdPosition = -0.5;


    cloudPosition-=cloudSpeed;
    cloudPosition1-=cloudSpeed1;
    birdPosition-=birdSpeed;
    birdPosition1-=birdSpeed1;
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


void ground()
{

    ///GROUND01///
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

    glVertex2f(-0.7f,  -0.0f);
    glVertex2f(-2.0f,  -0.0f);
    glVertex2f(-2.0f,  -2.0f);
    glVertex2f(-0.7f,  -2.0f);
    glVertex2f(-0.5f,  -2.0f);
    glVertex2f(-0.28f,  -1.8f);
    glVertex2f(-0.7f,  -1.6f);
    glVertex2f(-0.7f,  -1.75f);
    glVertex2f(-0.3f,  -1.4f);
    glVertex2f(-0.3f,  -1.18f);
    glVertex2f(-0.7f,  -1.0f);
    glVertex2f(-0.7f,  -1.17f);
    glVertex2f(-0.24f,  -0.97f);
    glVertex2f(-0.7f,  -0.6f);
    glVertex2f(-0.7f,  -0.8f);
    glVertex2f(-0.38f,  -0.65f);
    glVertex2f(-0.7f,  -0.44f);
    glVertex2f(-0.7f,  -0.6f);
    glVertex2f(-0.3f,  -0.4f);
    glEnd();

///GROUND02///
    glBegin(GL_POLYGON);

    glVertex2f(1.0f,  -0.6f);
    glVertex2f(2.0f,  -0.6f);
    glVertex2f(2.0f,  -2.0f);
    glVertex2f(1.0f,  -2.0f);
    glVertex2f(0.7f,  -2.0f);
    glVertex2f(0.7f,  -1.68f);
    glVertex2f(1.0f,  -1.9f);
    glVertex2f(1.0f,  -1.52f);
    glVertex2f(0.75f,  -1.3f);
    glVertex2f(1.0f,  -1.0f);
    glVertex2f(1.0f,  -1.1f);
    glVertex2f(0.7f,  -0.93f);
    glVertex2f(0.7f,  -0.8f);
    glEnd();

    glFlush();
}


void bird ()
{
    ///BIRD01///
    if (rainy==true || summer==true)
    {
        glPushMatrix();
        glTranslatef(birdPosition,0.0f, 0.0f);
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
        glPopMatrix();

///BIRD02///
        glPushMatrix();
        glTranslatef(birdPosition1,0.0f, 0.0f);
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
        glPopMatrix();
        glFlush();
    }

    birdPosition+=0.1;
    birdPosition1+=0.04;
}




void cloud ()
{
    ///CLOUD01///
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(-0.45f, 1.65f);
    glVertex2f(-0.45f, 1.80f);
    glVertex2f(-1.0f, 1.80f);
    glVertex2f(-1.0f, 1.65f);
    glEnd();

    circle(-0.45,1.73,0.09);
    circle(-1.0,1.73,0.15);
    circle(-0.55,1.79,0.07);
    circle(-0.7,1.80,0.12);
    circle(-0.85,1.73,0.10);
    circle(-0.69,1.69,0.14);
    circle(-0.53,1.69,0.12);

///CLOUD02///
    glPushMatrix();
    glTranslatef(cloudPosition,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(0.45f, 1.65f);
    glVertex2f(0.45f, 1.80f);
    glVertex2f(1.0f, 1.80f);
    glVertex2f(1.0f, 1.65f);
    glEnd();

    circle(0.45,1.73,0.09);
    circle(1.0,1.73,0.15);
    circle(0.55,1.79,0.07);
    circle(0.7,1.80,0.12);
    circle(0.85,1.73,0.10);
    circle(0.69,1.69,0.14);
    circle(0.53,1.69,0.12);

    glPopMatrix();

///CLOUD03///
    circle(-0.1,1.33,0.09);
    circle(-0.2,1.27,0.12);
    circle(-0.33,1.29,0.09);

///CLOUD04///
    glPushMatrix();
    glTranslatef(cloudPosition1,0.0f, 0.0f);
    circle(1.8,1.33,0.09);
    circle(1.7,1.34,0.12);
    circle(1.6,1.33,0.09);
    glPopMatrix();

    cloudPosition+=0.05;
    cloudPosition1-=0.06;
}


void display(void)
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    cloud();
    ground();
    bird();


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
