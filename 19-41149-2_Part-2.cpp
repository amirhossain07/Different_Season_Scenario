#include<cstdio>
#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846


GLfloat position6 = 0.0f;
GLfloat speed6 = 0.03f;
void update6(int value) {
    if(position6 <-3.0)
        position6 =0.0f;

    position6 -= speed6;
    glutPostRedisplay();
    glutTimerFunc(200, update6, 0);
}
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.07f;
void update2(int value) {
    if(position2 >4.0)
        position2 =-0.0f;
    position2 += speed2;
    glutPostRedisplay();
    glutTimerFunc(200, update2, 0);
}
GLfloat position3 = 0.0f;
GLfloat speed3 = 0.01f;
void update3(int value) {
    if(position3 >0.5)
        position3 =-0.0f;
    position3 += speed3;
    glutPostRedisplay();
    glutTimerFunc(200, update3, 0);
}

GLfloat position4 = 0.0f;
GLfloat speed4 = 0.1f;
void update4(int value) {
    if(position4 >4.0)
        position4 =-0.0f;
    position4 += speed4;
    glutPostRedisplay();
    glutTimerFunc(200, update4, 0);
}
GLfloat position5 = 0.0f;
GLfloat speed5 = 0.1f;
void update5(int value) {
    if(position5 >4.0)
        position5 =-0.0f;
    position5 += speed5;
    glutPostRedisplay();
    glutTimerFunc(200, update5, 0);
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

///SHIP
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
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

///SKY////
    glBegin(GL_POLYGON);
	glColor3ub(155, 215, 232);
	glVertex2f(0.0f, 0.8f);
	glVertex2f(2.0f,  0.8f);
	glVertex2f(2.0f,  2.0f);
	glVertex2f(0.0f, 2.0f);
    glVertex2f(-0.0f, 0.8f);
	glVertex2f(-2.0f,  0.8f);
	glVertex2f(-2.0f,  2.0f);
	glVertex2f(-0.0f, 2.0f);
    glEnd();

///SUN///
    int m;
        GLfloat x4=-1.66f; GLfloat y4=1.8f; GLfloat radius4 =.12f;
    int triangleAmount4 = 20;
    GLfloat twicePi4 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
     glColor3ub(255, 255, 0);
        glVertex2f(x4, y4);
        for(m = 0; m <= triangleAmount4;m++) {
            glVertex2f(
                    x4 + (radius4 * cos(m *  twicePi4 / triangleAmount4)),
                y4 + (radius4 * sin(m * twicePi4 / triangleAmount4))
            );
        }
   glEnd();

   ///BOAT01///
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
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
    glColor3ub(0,0,0);///boat1///
    glVertex2f(0.1f, -1.01f);
    glVertex2f(0.2f, -0.93f);
    glVertex2f(0.1f, -1.08f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);///boat1///
    glVertex2f(-0.2f, -1.01f);
    glVertex2f(-0.3f, -0.93f);
    glVertex2f(-0.2f, -1.08f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.1f, -0.91f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(0.1f, -0.91f);
    glVertex2f(0.2f, -0.93f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(-0.3f, -0.93f);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.1f, -0.91f);
    glVertex2f(0.1f, -1.01f);
    glVertex2f(0.0f, -0.91f);
    glVertex2f(0.0f, -1.01f);
    glVertex2f(-0.1f, -0.91f);
    glVertex2f(-0.1f, -1.01f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(-0.2f, -1.01f);
    glEnd();
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
///BOAT02///
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
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
    glColor3ub(0,0,0);///boat2///
    glVertex2f(0.1f, -0.75f);
    glVertex2f(0.2f, -0.67f);
    glVertex2f(0.1f, -0.82f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);///boat2///
    glVertex2f(-0.2f, -0.75f);
    glVertex2f(-0.3f, -0.67f);
    glVertex2f(-0.2f, -0.82f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.1f,  -0.65f);
    glVertex2f(-0.2f, -0.65f);
    glVertex2f(0.1f,  -0.65f);
    glVertex2f(0.2f,  -0.67f);
    glVertex2f(-0.2f, -0.65f);
    glVertex2f(-0.3f, -0.67f);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.1f, - 0.65f);
    glVertex2f(0.1f, - 0.75f);
    glVertex2f(0.0f, - 0.65f);
    glVertex2f(0.0f,  -0.75f);
    glVertex2f(-0.1f, -0.65f);
    glVertex2f(-0.1f, -0.75f);
    glVertex2f(-0.2f, -0.65f);
    glVertex2f(-0.2f, -0.75f);
    glEnd();
    glPopMatrix();

///CLOUD///

glColor3ub(204, 219, 219);
    circle(-0.45f,1.50f,0.1f);
    circle(-0.61f,1.50f,0.15f);
    circle(-0.71f,1.50f,0.13f);
    circle(-0.82f,1.50f,0.1f);

    circle(0.54f,1.50f,0.1f);
    circle(0.64f,1.50f,0.15f);
    circle(0.75f,1.50f,0.13f);
    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow(" DIFFERENT SEASON IN BANGLADESH");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(20, 20);
    gluOrtho2D(-2,2,-2,2);
    glutDisplayFunc(display);

    initGL();
    glutMainLoop();
    return 0;
}
