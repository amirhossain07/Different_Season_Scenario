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
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

///TREE01///
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(0.91f, -0.1f);//height
    glVertex2f(0.91f, -0.7f);
    glVertex2f(0.94f, -0.7f);//height
    glVertex2f(0.94f, -0.1f);
    glEnd();
///TREE02///
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(1.14f, -0.0f);//height
    glVertex2f(1.14f, -0.7f);
    glVertex2f(1.17f, -0.7f);//height
    glVertex2f(1.17f, -0.0f);
    glEnd();
///TREE03///
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(1.81f, -0.0f);//height
    glVertex2f(1.81f, -0.7f);
    glVertex2f(1.84f, -0.7f);//height
    glVertex2f(1.84f, -0.0f);
    glEnd();

///LEAF01///
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0 );
    glVertex2f(0.80f, -0.1f);//height
    glVertex2f(1.05f, -0.1f);
    glVertex2f(0.925f, 0.2f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0 );
    glVertex2f(0.85f, 0.1f);//height
    glVertex2f(1.00f, 0.1f);
    glVertex2f(0.925f, 0.4f);
    glEnd();
///LEAF02///
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0);
    glVertex2f(1.03f, -0.0f);//height
    glVertex2f(1.28f, -0.0f);
    glVertex2f(1.155f, 0.2f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0 );
    glVertex2f(1.06f, 0.1f);//height
    glVertex2f(1.25f, 0.1f);
    glVertex2f(1.155f, 0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0 );
	glVertex2f(1.08f, 0.2f);
	glVertex2f(1.23f, 0.2f);
	glVertex2f(1.155f, 0.5f);
	glEnd();
///LEAF03///
     glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0 );
    glVertex2f(1.70f, -0.0f);//height
    glVertex2f(1.95f, -0.0f);
    glVertex2f(1.825f, 0.2f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0 );
    glVertex2f(1.74f, 0.1f);//height
    glVertex2f(1.91f, 0.1f);
    glVertex2f(1.825f, 0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0 );
	glVertex2f(1.76f, 0.2f);
	glVertex2f(1.89f, 0.2f);
	glVertex2f(1.825f, 0.5f);
	glEnd();

///FENCE01///
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 102);
    glVertex2f(1.7f, -0.6f);//width
    glVertex2f(2.0f, -0.60f);
    glVertex2f(2.0f, -0.60f);
    glVertex2f(1.7f, -0.6f);
    glVertex2f(1.7f, -0.5f);//width
    glVertex2f(2.0f, -0.50f);
    glVertex2f(2.0f, -0.50f);
    glVertex2f(1.7f, -0.5f);
    glVertex2f(1.7f, -0.7f);//width
    glVertex2f(2.0f, -0.70f);
    glVertex2f(2.0f, -0.70f);
    glVertex2f(1.7f, -0.7f);

    glVertex2f(1.76f, -0.5f);//height
    glVertex2f(1.76f, -0.7f);
    glVertex2f(1.78f, -0.7f);
    glVertex2f(1.78f, -0.5f);
    glVertex2f(1.86f, -0.5f);//height
    glVertex2f(1.86f, -0.7f);
    glVertex2f(1.88f, -0.7f);
    glVertex2f(1.88f, -0.5f);
    glVertex2f(1.96f, -0.5f);//height
    glVertex2f(1.96f, -0.7f);
    glVertex2f(1.98f, -0.7f);
    glVertex2f(1.98f, -0.5f);
    glEnd();
///FENCE02///
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 102);
    glVertex2f(0.9f, -0.6f);//width
    glVertex2f(1.2f, -0.60f);
    glVertex2f(1.2f, -0.60f);
    glVertex2f(0.9f, -0.6f);
    glVertex2f(0.9f, -0.5f);//width
    glVertex2f(1.2f, -0.50f);
    glVertex2f(1.2f, -0.50f);
    glVertex2f(0.9f, -0.5f);
    glVertex2f(0.9f, -0.7f);//width
    glVertex2f(1.2f, -0.70f);
    glVertex2f(1.2f, -0.70f);
    glVertex2f(0.9f, -0.7f);

    glVertex2f(0.96f, -0.5f);//height
    glVertex2f(0.96f, -0.7f);
    glVertex2f(0.98f, -0.7f);
    glVertex2f(0.98f, -0.5f);
    glVertex2f(1.06f, -0.5f);//height
    glVertex2f(1.06f, -0.7f);
    glVertex2f(1.08f, -0.7f);
    glVertex2f(1.08f, -0.5f);
    glVertex2f(1.16f, -0.5f);//height
    glVertex2f(1.16f, -0.7f);
    glVertex2f(1.18f, -0.7f);
    glVertex2f(1.18f, -0.5f);
    glEnd();

///HOUSE///
    glBegin(GL_QUADS);
    glColor3ub(0, 102, 102);///house body01
    glVertex2f(-0.9f, 0.1f);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-1.3f, -0.3f);
    glVertex2f(-1.3f, 0.1f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(204, 0, 0);///house upper part01
    glVertex2f(-1.0f, 0.4f);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-1.5f, 0.1f);
    glVertex2f(-1.3f, 0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0);///house door01
    glVertex2f(-1.0f, -0.0f);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.1f, -0.3f);
    glVertex2f(-1.1f, -0.0f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0);///house window01
    glVertex2f(-1.15f, -0.1f);
    glVertex2f(-1.15f, -0.20f);
    glVertex2f(-1.25f, -0.20f);
    glVertex2f(-1.25f, -0.1f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-0.9f, 0.1f);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-1.3f, -0.3f);
    glVertex2f(-1.3f, 0.1f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-1.3f, -0.3f);
    glVertex2f(-1.3f, 0.1f);
    glVertex2f(-0.9f, 0.1f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.0f, 0.4f);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-1.5f, 0.1f);
    glVertex2f(-1.3f, 0.4f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-1.5f, 0.1f);
    glVertex2f(-1.3f, 0.4f);
    glVertex2f(-1.0f, 0.4f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.0f, -0.0f);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.1f, -0.3f);
    glVertex2f(-1.1f, -0.0f);
    glVertex2f(-1.05f, -0.0f);
    glVertex2f(-1.05f, -0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.1f, -0.3f);
    glVertex2f(-1.1f, -0.0f);
    glVertex2f(-1.0f, -0.0f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.15f, -0.1f);
    glVertex2f(-1.15f, -0.20f);
    glVertex2f(-1.25f, -0.20f);
    glVertex2f(-1.25f, -0.1f);
    glVertex2f(-1.20f, -0.1f);
    glVertex2f(-1.20f, -0.20f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.15f, -0.20f);
    glVertex2f(-1.25f, -0.20f);
    glVertex2f(-1.25f, -0.1f);
    glVertex2f(-1.15f, -0.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 102, 0);///house body02
    glVertex2f(-1.3f, -0.0f);
    glVertex2f(-1.8f, -0.0f);
    glVertex2f(-1.8f, -0.5f);
    glVertex2f(-1.3f, -0.5f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 68, 0);///house door02
    glVertex2f(-1.6f, -0.1f);
    glVertex2f(-1.7f, -0.1f);
    glVertex2f(-1.7f, -0.5f);
    glVertex2f(-1.6f, -0.5f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 68, 0);///house window02
    glVertex2f(-1.4f, -0.2f);
    glVertex2f(-1.5f, -0.2f);
    glVertex2f(-1.5f, -0.3f);
    glVertex2f(-1.4f, -0.3f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 204);///house upper part02
    glVertex2f(-1.2f, 0.0f);
    glVertex2f(-1.9f, 0.0f);
    glVertex2f(-1.7f, 0.3f);
    glVertex2f(-1.4f, 0.3f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.3f,-0.0f);
    glVertex2f(-1.8f,-0.0f);
    glVertex2f(-1.8f, -0.5f);
    glVertex2f(-1.3f, -0.5f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.8f,-0.0f);
    glVertex2f(-1.8f,-0.5f);
    glVertex2f(-1.3f,-0.5f);
    glVertex2f(-1.3f,-0.0f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.2f,0.0f);
    glVertex2f(-1.9f,0.0f);
    glVertex2f(-1.7f,0.3f);
    glVertex2f(-1.4f,0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.9f,0.0f);
    glVertex2f(-1.7f,0.3f);
    glVertex2f(-1.4f,0.3f);
    glVertex2f(-1.2f,0.0f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.6f,-0.1f);
    glVertex2f(-1.70f,-0.1f);
    glVertex2f(-1.70f,-0.5f);
    glVertex2f(-1.6f,-0.5f);
    glVertex2f(-1.65f,-0.1f);
    glVertex2f(-1.65f,-0.5f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.70f,-0.1f);
    glVertex2f(-1.70f,-0.5f);
    glVertex2f(-1.6f,-0.5f);
    glVertex2f(-1.6f,-0.1f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.4f,-0.2f);
    glVertex2f(-1.5f,-0.2f);
    glVertex2f(-1.5f,-0.3f);
    glVertex2f(-1.4f,-0.3f);
    glVertex2f(-1.45f,-0.2f);
    glVertex2f(-1.45f,-0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.5f,-0.2f);
    glVertex2f(-1.5f,-0.3f);
    glVertex2f(-1.4f,-0.3f);
    glVertex2f(-1.4f,-0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);///house body03
    glVertex2f(1.2f, -0.3f);
    glVertex2f(1.2f, -0.8f);
    glVertex2f(1.7f, -0.8f);
    glVertex2f(1.7f, -0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.2f, -0.3f);
    glVertex2f(1.2f, -0.8f);
    glVertex2f(1.7f, -0.8f);
    glVertex2f(1.7f, -0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.2f, -0.8f);
    glVertex2f(1.7f, -0.8f);
    glVertex2f(1.7f, -0.3f);
    glVertex2f(1.2f, -0.3f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(102, 0, 102);///house upper part03
    glVertex2f(1.3f, -0.1f);
    glVertex2f(1.1f, -0.4f);
    glVertex2f(1.8f, -0.4f);
    glVertex2f(1.6f, -0.1f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0);///house window03
    glVertex2f(1.3f, -0.6f);
    glVertex2f(1.3f, -0.7f);
    glVertex2f(1.4f, -0.7f);
    glVertex2f(1.4f, -0.6f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0);///house door03
    glVertex2f(1.5f, -0.5f);
    glVertex2f(1.5f, -0.8f);
    glVertex2f(1.6f, -0.8f);
    glVertex2f(1.6f, -0.5f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.3f, -0.1f);
    glVertex2f(1.1f, -0.4f);
    glVertex2f(1.8f, -0.4f);
    glVertex2f(1.6f, -0.1f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.1f, -0.4f);
    glVertex2f(1.8f, -0.4f);
    glVertex2f(1.6f, -0.1f);
    glVertex2f(1.3f, -0.1f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.3f, -0.6f);
    glVertex2f(1.3f, -0.7f);
    glVertex2f(1.4f, -0.7f);
    glVertex2f(1.4f, -0.6f);
    glVertex2f(1.35f, -0.6f);
    glVertex2f(1.35f, -0.7f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.3f, -0.7f);
    glVertex2f(1.4f, -0.7f);
    glVertex2f(1.4f, -0.6f);
    glVertex2f(1.3f, -0.6f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.5f, -0.5f);
    glVertex2f(1.5f, -0.8f);
    glVertex2f(1.6f, -0.8f);
    glVertex2f(1.6f, -0.5f);
    glVertex2f(1.55f, -0.5f);
    glVertex2f(1.55f, -0.8f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.5f, -0.8f);
    glVertex2f(1.6f, -0.8f);
    glVertex2f(1.6f, -0.5f);
    glVertex2f(1.5f, -0.5f);
    glEnd();

	glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("DIFFERENT SEASON SCENARIO");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(20, 20);
    gluOrtho2D(-2,2,-2,2);
    glutDisplayFunc(display);

    initGL();
    glutMainLoop();
    return 0;
}
