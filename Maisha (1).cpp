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

///GROUND01///
    glBegin(GL_POLYGON);
	glColor3ub(0, 204, 0);
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
	glColor3ub(0, 204, 0);
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

///GRASS01///
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0);
    glVertex2f(-1.89f, -0.5f);
	glVertex2f(-1.86f, -0.450f);
	glVertex2f(-1.84f, -0.150f);
	glVertex2f(-1.87f, -0.350f);
	glVertex2f(-1.89f, -0.5f);
	glVertex2f(-1.92f, -0.450f);
	glVertex2f(-1.94f, -0.150f);
	glVertex2f(-1.91f, -0.350f);
    glVertex2f(-1.89f, -0.5f);
	glVertex2f(-1.88f, -0.350f);
	glVertex2f(-1.89f, -0.150f);
	glVertex2f(-1.90f, -0.350f);
    glEnd();
///GRASS02///
    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.90f, -0.6f);
	glVertex2f(-0.87f, -0.550f);
	glVertex2f(-0.85f, -0.250f);
	glVertex2f(-0.88f, -0.450f);
	glVertex2f(-0.90f, -0.6f);
	glVertex2f(-0.89f, -0.550f);
	glVertex2f(-0.90f, -0.250f);
	glVertex2f(-0.91f, -0.450f);
	glVertex2f(-0.90f, -0.6f);
	glVertex2f(-0.93f, -0.550f);
	glVertex2f(-0.95f, -0.250f);
	glVertex2f(-0.92f, -0.450f);
	glEnd();
///GRASS03///
	 glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0);
    glVertex2f(-0.60f, -0.5f);
	glVertex2f(-0.57f, -0.450f);
	glVertex2f(-0.55f, -0.150f);
	glVertex2f(-0.58f, -0.350f);
	glVertex2f(-0.60f, -0.5f);
	glVertex2f(-0.59f, -0.450f);
	glVertex2f(-0.60f, -0.150f);
	glVertex2f(-0.61f, -0.350f);
	glVertex2f(-0.60f, -0.5f);
	glVertex2f(-0.63f, -0.450f);
	glVertex2f(-0.65f, -0.150f);
	glVertex2f(-0.62f, -0.350f);
	glEnd();
///GRASS04///
	glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0);
    glVertex2f(-0.79f, -0.57f);
	glVertex2f(-0.76f, -0.450f);
	glVertex2f(-0.74f, -0.150f);
	glVertex2f(-0.78f, -0.350f);
	glVertex2f(-0.79f, -0.57f);
	glVertex2f(-0.78f, -0.450f);
	glVertex2f(-0.79f, -0.150f);
	glVertex2f(-0.80f, -0.350f);
	glVertex2f(-0.79f, -0.57f);
	glVertex2f(-0.82f, -0.450f);
	glVertex2f(-0.84f, -0.150f);
	glVertex2f(-0.81f, -0.350f);
	glEnd();
///GRASS05///
	glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.69f, -0.53f);
	glVertex2f(-0.66f, -0.450f);
	glVertex2f(-0.64f, -0.150f);
	glVertex2f(-0.68f, -0.350f);
	glVertex2f(-0.69f, -0.53f);
	glVertex2f(-0.68f, -0.450f);
	glVertex2f(-0.69f, -0.150f);
	glVertex2f(-0.70f, -0.350f);
	glVertex2f(-0.69f, -0.53f);
	glVertex2f(-0.72f, -0.450f);
	glVertex2f(-0.74f, -0.150f);
	glVertex2f(-0.71f, -0.350f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(153, 153, 102);
	glVertex2f(-1.73f, -0.5f);
	glVertex2f(-1.57f, -0.5f);
	glVertex2f(-1.45f, -1.3f);
	glVertex2f(-1.61f, -1.3f);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(-1.45f, -1.3f);
	glVertex2f(-1.61f, -1.3f);
	glVertex2f(-1.01f, -2.0f);
	glVertex2f(-1.18f, -2.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(-1.45f, -1.3f);
	glVertex2f(-1.61f, -1.3f);
	glVertex2f(-1.01f, -2.0f);
	glVertex2f(-1.18f, -2.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(153, 153, 102);
	glVertex2f(-0.98f, -0.3f);
	glVertex2f(-1.14f, -0.3f);
	glVertex2f(-1.26f, -1.85f);
	glVertex2f(-1.1f, -1.85f);
	glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(153, 153, 102);
	glVertex2f(1.48f, -0.8f);
	glVertex2f(1.61f, -0.8f);
	glVertex2f(1.83f, -2.0f);
	glVertex2f(1.70f, -2.0f);
	glEnd();

	///HIGHWAY///
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
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
