#include<stdio.h>
#include<math.h>
#include<GL/glut.h>
#include<stdlib.h>
const double TWO_PI=6.2831853;
GLsizei winWidth=500,winHeight=500;
GLuint regHex;
static GLfloat rotTheta=0.0;
struct scrPt
{
    GLint x,y;
};

static void init(void)
{
    struct scrPt hexVertex;
    GLdouble hexTheta;
    GLint k;
    glClearColor(1,1,1,1);
    regHex=glGenLists(1);
    glNewList(regHex,GL_COMPILE);
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    for(k=0;k<6;k++)
    {
        hexTheta=TWO_PI*k/6;
        hexVertex.x=150+100*cos(hexTheta);
        hexVertex.y=150+100*sin(hexTheta);
        glVertex2i(hexVertex.x,hexVertex.y);

    }
    glEnd();
    glEndList();
}
void displayHex(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,0,0);
    glPushMatrix();
    glRotatef(rotTheta,0,0,1);
    glCallList(regHex);
    glPopMatrix();
    glutSwapBuffers();
    glFlush();
}
void rotateHex(void)
{
    rotTheta+=3.0;
    if(rotTheta>360.0)
        rotTheta-=360.;
    glutPostRedisplay();
}
void myReshape(GLint newWidth,GLint newHeight)
{
    glViewport(0,0,(GLsizei)newWidth,(GLsizei)newHeight);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-320.0,320.0,-320.0,320.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    //glClear(GL_COLOR_BUFFER_BIT);
}
void mouse(GLint button,GLint action,GLint x,GLint y)
{
    switch(button)
    {
    case GLUT_MIDDLE_BUTTON:
        if(action==GLUT_DOWN)
            glutIdleFunc(rotateHex);
        break;
        case GLUT_RIGHT_BUTTON:
        if(action==GLUT_DOWN)
            glutIdleFunc(NULL);
        break;
        default:
            break;
    }
}
int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
glutInitWindowSize(winWidth,winHeight);
    glutInitWindowPosition(500,500);

    glutCreateWindow("ANIMATION");
    init();
    glutDisplayFunc(displayHex);
    glutReshapeFunc(myReshape);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}