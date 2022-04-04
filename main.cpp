#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846
GLfloat r = 0.0f;
GLfloat f = 0.0f;
GLfloat position1 = 0.0f;
GLfloat speed1 = 0.02f;
GLfloat position11 = 0.0f;
GLfloat speed11 = 0.02f;
GLfloat planeposition = 0.0f;
GLfloat planespeed = 0.03f;
GLfloat sunposition = 0.0f;
GLfloat sunspeed = 0.003f;
GLfloat rainposition = 0.0f;
GLfloat rainspeed = 0.03f;
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.01f;
float leftL=20;
float rightL=-20;
float peopleSpeed=.002;
float peoplePos2=.8-3.8;
float peoplePos=-1.48-3.8;
int gLobal_R=0;
int gLobal_G=0;
int gLobal_B=0;



void axis()
{
    //X-AXIS

	glBegin(GL_LINES);
	glColor3ub(88, 214, 141);
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, 0.05);
	glVertex2f(1.0, 0.05);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, 0.1);
	glVertex2f(1.0, 0.1);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, 0.15);
	glVertex2f(1.0, 0.15);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, 0.2);
	glVertex2f(1.0, 0.2);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, 0.25);
	glVertex2f(1.0, 0.25);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, 0.3);
	glVertex2f(1.0, 0.3);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, 0.35);
	glVertex2f(1.0, 0.35);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, 0.4);
	glVertex2f(1.0, 0.4);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, 0.45);
	glVertex2f(1.0, 0.45);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, 0.5);
	glVertex2f(1.0, 0.5);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, 0.55);
	glVertex2f(1.0, 0.55);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, 0.6);
	glVertex2f(1.0, 0.6);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, 0.65);
	glVertex2f(1.0, 0.65);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, 0.7);
	glVertex2f(1.0, 0.7);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, 0.75);
	glVertex2f(1.0, 0.75);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, 0.8);
	glVertex2f(1.0, 0.8);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, 0.85);
	glVertex2f(1.0, 0.85);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, 0.9);
	glVertex2f(1.0, 0.9);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, 0.95);
	glVertex2f(1.0, 0.95);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, 1.0);
	glVertex2f(1.0, 1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, -0.05);
	glVertex2f(1.0, -0.05);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, -0.1);
	glVertex2f(1.0, -0.1);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, -0.15);
	glVertex2f(1.0, -0.15);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, -0.2);
	glVertex2f(1.0, -0.2);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, -0.25);
	glVertex2f(1.0, -0.25);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, -0.3);
	glVertex2f(1.0, -0.3);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, -0.35);
	glVertex2f(1.0, -0.35);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, -0.4);
	glVertex2f(1.0, -0.4);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, -0.45);
	glVertex2f(1.0, -0.45);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, -0.5);
	glVertex2f(1.0, -0.5);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, -0.55);
	glVertex2f(1.0, -0.55);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, -0.6);
	glVertex2f(1.0, -0.6);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, -0.65);
	glVertex2f(1.0, -0.65);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, -0.7);
	glVertex2f(1.0, -0.7);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, -0.75);
	glVertex2f(1.0, -0.75);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, -0.8);
	glVertex2f(1.0, -0.8);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, -0.85);
	glVertex2f(1.0, -0.85);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, -0.9);
	glVertex2f(1.0, -0.9);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, -0.95);
	glVertex2f(1.0, -0.95);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, -1.0);
	glVertex2f(1.0, -1.0);
	glEnd();


	 //Y-AXIS
    glBegin(GL_LINES);
	glColor3ub(88, 214, 141);
	glVertex2f(0.0, 1.0);
	glVertex2f(0.0, -1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(0.05, 1.0);
	glVertex2f(0.05, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(0.1, 1.0);
	glVertex2f(0.1, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(0.15, 1.0);
	glVertex2f(0.15, -1.0);
	glEnd();



	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(0.2, 1.0);
	glVertex2f(0.2, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(0.25, 1.0);
	glVertex2f(0.25, -1.0);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(0.3, 1.0);
	glVertex2f(0.3, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(0.35, 1.0);
	glVertex2f(0.35, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(0.4, 1.0);
	glVertex2f(0.4, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(0.45, 1.0);
	glVertex2f(0.45, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(0.5, 1.0);
	glVertex2f(0.5, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(0.55, 1.0);
	glVertex2f(0.55, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(0.6, 1.0);
	glVertex2f(0.6, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(0.65, 1.0);
	glVertex2f(0.65, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(0.7, 1.0);
	glVertex2f(0.7, -1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(0.75, 1.0);
	glVertex2f(0.75, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(0.8, 1.0);
	glVertex2f(0.8, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(0.85, 1.0);
	glVertex2f(0.85, -1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(0.9, 1.0);
	glVertex2f(0.9, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(0.95, 1.0);
	glVertex2f(0.95, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(1.0, 1.0);
	glVertex2f(1.0, -1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-0.05, 1.0);
	glVertex2f(-0.05, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-0.1, 1.0);
	glVertex2f(-0.1, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-0.15, 1.0);
	glVertex2f(-0.15, -1.0);
	glEnd();



	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-0.2, 1.0);
	glVertex2f(-0.2, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-0.25, 1.0);
	glVertex2f(-0.25, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-0.3, 1.0);
	glVertex2f(-0.3, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-0.35, 1.0);
	glVertex2f(-0.35, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-0.4, 1.0);
	glVertex2f(-0.4, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-0.45, 1.0);
	glVertex2f(-0.45, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-0.5, 1.0);
	glVertex2f(-0.5, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-0.55, 1.0);
	glVertex2f(-0.55, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-0.6, 1.0);
	glVertex2f(-0.6, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-0.65, 1.0);
	glVertex2f(-0.65, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-0.7, 1.0);
	glVertex2f(-0.7, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-0.75, 1.0);
	glVertex2f(-0.75, -1.0);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-0.8, 1.0);
	glVertex2f(-0.8, -1.0);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-0.85, 1.0);
	glVertex2f(-0.85, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-0.9, 1.0);
	glVertex2f(-0.9, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-0.95, 1.0);
	glVertex2f(-0.95, -1.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(222, 0, 0);
	glVertex2f(-1.0, 1.0);
	glVertex2f(-1.0, -1.0);
	glEnd();

}
void peopleAnim(int val)
{

peoplePos=.8-3.8;

peoplePos+=peopleSpeed;
peoplePos2+=peopleSpeed;

//glutPostRedisplay();
glutTimerFunc(10,peopleAnim,0);
}
void legAnim(int val)
{
    if(leftL>0 && rightL<0){
        rightL+=1;
        leftL-=1;
    }
    else if(leftL<=0 && rightL>=0 && leftL>-20 && rightL<20){
        rightL+=1;
        leftL-=1;
    }
    else if(leftL==-20 && rightL==20){
        rightL=-20;
        leftL=20;
    }
//leftL+=.1;
//rightL-=.1;
//glutPostRedisplay();
glutTimerFunc(50,legAnim,0);

}
void vehicleleft (int value)
{
    if(position1 <-1.0)
        position1 = 1.0f;

    position1 -= speed1; //position=position-speed;1-.1=.9

	glutPostRedisplay();

	glutTimerFunc(100, vehicleleft, 0);
}
void vehicleright (int value)
{
    if(position11 <-1.0)
        position11 = 1.0f;

    position11 -= speed11; //position=position-speed;1-.1=.9

	glutPostRedisplay();

	glutTimerFunc(100, vehicleright, 0);
}
void planeanimation (int value)
{
    planeposition -= planespeed; //position=position-speed;1-.1=.9

	glutPostRedisplay();

	glutTimerFunc(100, planeanimation, 0);
}
void cloud (int value)
{
	if(position2 >1.0)
        position2 = -1.0f;

    position2 += speed2; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, cloud, 0);
}
void sunanim (int value)
{
    sunposition -= sunspeed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, sunanim, 0);
}
void FilledCircle(GLfloat cx,GLfloat cy, GLfloat r, int amount)
{
    int i;
    GLfloat twicePi=2.0f*PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    for(i=0;i<=amount;i++){
        glVertex2f(
            cx+(r*cos(i*twicePi/amount)),
            cy+(r*sin(i*twicePi/amount))
        );


    }
    glEnd();
}
void Origin()
{
    glLoadIdentity();
	glOrtho(-1.0,1.0,-1.0,1.0,-1.0,1.0);

}
void setColor(int r, int g, int b)
{
gLobal_R=r;
gLobal_G=g;
gLobal_B=b;
glColor3ub(r,g,b);
}
void getColor()
{
glColor3ub(gLobal_R,gLobal_G,gLobal_B);
}
void init()
{
glClearColor(0,0,0,1);
}
void bigtree()
{
    //Tree
    glScalef(0.3, 0.9, 0);
	glBegin(GL_QUADS);
	glColor3ub(134, 63, 10);
	glVertex2f(-0.090, -0.8);
	glVertex2f(-0.075, -0.05);
	glVertex2f(0.035, -0.05);
	glVertex2f(0.060, -0.8);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(134, 63, 10);
	glVertex2f(0.0, -0.4);
	glVertex2f(0.0, -0.3);
	glVertex2f(0.5,-0.02);
	glVertex2f(0.5, -0.065);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(134, 63, 10);
	glVertex2f(0.0, -0.5);
	glVertex2f(0.0, -0.4);
	glVertex2f(-0.6,-0.11);
	glVertex2f(-0.5, -0.065);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(93, 191, 50);
    glVertex2f(-0.2,-0.6);
    glVertex2f(-0.085,-0.8);
    glVertex2f(-0.15,-0.8);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(93, 191, 50);
    glVertex2f(-0.135,-0.5);
    glVertex2f(-0.085,-0.8);
    glVertex2f(-0.15,-0.8);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(93, 191, 50);
    glVertex2f(0.2,-0.6);
    glVertex2f(0.055,-0.8);
    glVertex2f(0.12,-0.8);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(93, 191, 50);
    glVertex2f(0.1,-0.5);
    glVertex2f(0.055,-0.8);
    glVertex2f(0.12,-0.8);
    glEnd();



    glColor3ub(4, 173, 37);
	FilledCircle(0.0f,0.0f,.2,100);
	FilledCircle(0.5f,0.0f,.05,100);
	glColor3ub(4, 173, 37);
	FilledCircle(0.2f,0.18f,.2,100);
	FilledCircle(0.55f,0.05f,.05,100);
	glColor3ub(4, 173, 37);
	FilledCircle(-0.1f,0.3f,.2,100);
	FilledCircle(0.58f,0.02f,.05,100);
	glColor3ub(4, 173, 37);
	FilledCircle(-0.3f,0.1f,.2,100);
	FilledCircle(0.54f,-0.02f,.05,100);
	glColor3ub(4, 173, 37);
	FilledCircle(-0.26f,-0.18f,.2,100);
	glColor3ub(4, 173, 37);
	FilledCircle(0.2f,-0.12f,.2,100);
	glEnd();


	glLoadIdentity();
}
void bigtree2()
{
    //Tree
    glScalef(0.3, 0.9, 0);
	glBegin(GL_QUADS);
	glColor3ub(134, 63, 10);
	glVertex2f(-0.090, -0.8);
	glVertex2f(-0.075, -0.05);
	glVertex2f(0.035, -0.05);
	glVertex2f(0.060, -0.8);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(134, 63, 10);
	glVertex2f(0.0, -0.4);
	glVertex2f(0.0, -0.3);
	glVertex2f(0.5,-0.02);
	glVertex2f(0.5, -0.065);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(134, 63, 10);
	glVertex2f(0.0, -0.5);
	glVertex2f(0.0, -0.4);
	glVertex2f(-0.6,-0.11);
	glVertex2f(-0.5, -0.065);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(93, 191, 50);
    glVertex2f(-0.2,-0.6);
    glVertex2f(-0.085,-0.8);
    glVertex2f(-0.15,-0.8);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(93, 191, 50);
    glVertex2f(-0.135,-0.5);
    glVertex2f(-0.085,-0.8);
    glVertex2f(-0.15,-0.8);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(93, 191, 50);
    glVertex2f(0.2,-0.6);
    glVertex2f(0.055,-0.8);
    glVertex2f(0.12,-0.8);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(93, 191, 50);
    glVertex2f(0.1,-0.5);
    glVertex2f(0.055,-0.8);
    glVertex2f(0.12,-0.8);
    glEnd();



    glColor3ub(112, 181, 0);
	FilledCircle(0.0f,0.0f,.2,100);
	FilledCircle(0.5f,0.0f,.05,100);
	glColor3ub(112, 181, 0);
	FilledCircle(0.2f,0.18f,.2,100);
	FilledCircle(0.55f,0.05f,.05,100);
	glColor3ub(112, 181, 0);
	FilledCircle(-0.1f,0.3f,.2,100);
	FilledCircle(0.58f,0.02f,.05,100);
	glColor3ub(112, 181, 0);
	FilledCircle(-0.3f,0.1f,.2,100);
	FilledCircle(0.54f,-0.02f,.05,100);
	glColor3ub(112, 181, 0);
	FilledCircle(-0.26f,-0.18f,.2,100);
	glColor3ub(112, 181, 0);
	FilledCircle(0.2f,-0.12f,.2,100);
	glEnd();


	glLoadIdentity();
}
void smalltree()
{

   glScalef(0.2, 0.5, 0);
	glBegin(GL_QUADS);
	glColor3ub(134, 63, 10);
	glVertex2f(-0.090, -0.8);
	glVertex2f(-0.075, -0.05);
	glVertex2f(0.035, -0.05);
	glVertex2f(0.060, -0.8);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(134, 63, 10);
	glVertex2f(0.0, -0.4);
	glVertex2f(0.0, -0.3);
	glVertex2f(0.5,-0.02);
	glVertex2f(0.5, -0.065);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(134, 63, 10);
	glVertex2f(0.0, -0.5);
	glVertex2f(0.0, -0.4);
	glVertex2f(-0.6,-0.11);
	glVertex2f(-0.5, -0.065);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(93, 191, 50);
    glVertex2f(-0.2,-0.6);
    glVertex2f(-0.085,-0.8);
    glVertex2f(-0.15,-0.8);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(93, 191, 50);
    glVertex2f(-0.135,-0.5);
    glVertex2f(-0.085,-0.8);
    glVertex2f(-0.15,-0.8);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(93, 191, 50);
    glVertex2f(0.2,-0.6);
    glVertex2f(0.055,-0.8);
    glVertex2f(0.12,-0.8);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(93, 191, 50);
    glVertex2f(0.1,-0.5);
    glVertex2f(0.055,-0.8);
    glVertex2f(0.12,-0.8);
    glEnd();



    glColor3ub(30, 143, 16);
	FilledCircle(0.0f,0.0f,.2,100);
	FilledCircle(0.5f,0.0f,.05,100);
	glColor3ub(30, 143, 16);
	FilledCircle(0.2f,0.18f,.2,100);
	FilledCircle(0.55f,0.05f,.05,100);
	glColor3ub(30, 143, 16);
	FilledCircle(-0.1f,0.3f,.2,100);
	FilledCircle(0.58f,0.02f,.05,100);
	glColor3ub(30, 143, 16);
	FilledCircle(-0.3f,0.1f,.2,100);
	FilledCircle(0.54f,-0.02f,.05,100);
	glColor3ub(30, 143, 16);
	FilledCircle(-0.26f,-0.18f,.2,100);
	glColor3ub(30, 143, 16);
	FilledCircle(0.2f,-0.12f,.2,100);
	glEnd();


	glLoadIdentity();
}
void bus()
{
    //BUS
    glTranslatef(0.0f, -0.09f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(189, 0, 0);
	glVertex2f(-0.8, -0.9);
	glVertex2f(-0.8, -0.8);
	glVertex2f(-0.6, -0.8);
	glVertex2f(-0.6, -0.9);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 84, 84);
	glVertex2f(-0.8, -0.8);
	glVertex2f(-0.8, -0.7);
	glVertex2f(-0.6, -0.7);
	glVertex2f(-0.6, -0.8);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(189, 0, 0);
	glVertex2f(-0.6, -0.9);
	glVertex2f(-0.6, -0.8);
	glVertex2f(-0.55, -0.75);
	glVertex2f(-0.55, -0.85);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(206, 206, 206);
	glVertex2f(-0.6, -0.8);
	glVertex2f(-0.6, -0.725);
	glVertex2f(-0.55, -0.675);
	glVertex2f(-0.55, -0.75);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(189, 0, 0);
	glVertex2f(-0.6, -0.725);
	glVertex2f(-0.625, -0.7);
	glVertex2f(-0.575, -0.65);
	glVertex2f(-0.55, -0.675);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(135, 0, 0);
	glVertex2f(-0.8, -0.7);
	glVertex2f(-0.775, -0.65);
	glVertex2f(-0.575, -0.65);
	glVertex2f(-0.625, -0.7);
	glEnd();

	//GLASS
	glBegin(GL_QUADS);
	glColor3ub(255, 234, 226);
	glVertex2f(-0.79, -0.78);
	glVertex2f(-0.79, -0.72);
	glVertex2f(-0.75, -0.72);
	glVertex2f(-0.75, -0.78);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 234, 226);
	glVertex2f(-0.74, -0.78);
	glVertex2f(-0.74, -0.72);
	glVertex2f(-0.70, -0.72);
	glVertex2f(-0.70, -0.78);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 234, 226);
	glVertex2f(-0.69, -0.78);
	glVertex2f(-0.69, -0.72);
	glVertex2f(-0.65, -0.72);
	glVertex2f(-0.65, -0.78);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 234, 226);
	glVertex2f(-0.64, -0.78);
	glVertex2f(-0.64, -0.73);
	glVertex2f(-0.60, -0.73);
	glVertex2f(-0.60, -0.78);
	glEnd();


	//BUS_WHEEL
	int i6;

	GLfloat x6=-0.75f; GLfloat y6=-0.9f; GLfloat radius6 =.035f;
	int triangleAmount6 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x6, y6); // center of circle
		for(i6 = 0; i6 <= triangleAmount6;i6++) {
			glVertex2f(
                x6 + (radius6 * cos(i6 * twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(i6 * twicePi6 / triangleAmount6))
			);
		}
	glEnd();

	int i7;

	GLfloat x7=-0.75f; GLfloat y7=-0.9f; GLfloat radius7 =.02f;
	int triangleAmount7 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 165);
		glVertex2f(x7, y7); // center of circle
		for(i7 = 0; i7 <= triangleAmount7;i7++) {
			glVertex2f(
                x7 + (radius7 * cos(i7 * twicePi7 / triangleAmount7)),
			    y7 + (radius7 * sin(i7 * twicePi7 / triangleAmount7))
			);
		}
	glEnd();

	int i8;

	GLfloat x8=-0.65f; GLfloat y8=-0.9f; GLfloat radius8 =.035f;
	int triangleAmount8 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x8, y8); // center of circle
		for(i8 = 0; i8 <= triangleAmount8;i8++) {
			glVertex2f(
                x8 + (radius6 * cos(i8 * twicePi8 / triangleAmount8)),
			    y8 + (radius6 * sin(i8 * twicePi8 / triangleAmount8))
			);
		}
	glEnd();

	int i9;

	GLfloat x9=-0.65f; GLfloat y9=-0.9f; GLfloat radius9 =.02f;
	int triangleAmount9 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 165);
		glVertex2f(x9, y9); // center of circle
		for(i9 = 0; i9 <= triangleAmount9;i9++) {
			glVertex2f(
                x9 + (radius9 * cos(i9 * twicePi9 / triangleAmount9)),
			    y9 + (radius9 * sin(i9 * twicePi9 / triangleAmount9))
			);
		}
	glEnd();

	//DESIGN
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.6, -0.85);
	glVertex2f(-0.80, -0.85);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.6, -0.84);
	glVertex2f(-0.80, -0.84);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.6, -0.83);
	glVertex2f(-0.80, -0.83);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.6, -0.85);
	glVertex2f(-0.55, -0.80);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.6, -0.84);
	glVertex2f(-0.55, -0.79);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.6, -0.83);
	glVertex2f(-0.55, -0.78);
	glEnd();

	glLoadIdentity();
}
void bus2()
{
    //BUS
    glTranslatef(0.15f, -0.065f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(255, 113, 1);
	glVertex2f(-0.8, -0.9);
	glVertex2f(-0.8, -0.8);
	glVertex2f(-0.6, -0.8);
	glVertex2f(-0.6, -0.9);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 177, 117);
	glVertex2f(-0.8, -0.8);
	glVertex2f(-0.8, -0.7);
	glVertex2f(-0.6, -0.7);
	glVertex2f(-0.6, -0.8);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 113, 1);
	glVertex2f(-0.6, -0.9);
	glVertex2f(-0.6, -0.8);
	glVertex2f(-0.55, -0.75);
	glVertex2f(-0.55, -0.85);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(206, 206, 206);
	glVertex2f(-0.6, -0.8);
	glVertex2f(-0.6, -0.725);
	glVertex2f(-0.55, -0.675);
	glVertex2f(-0.55, -0.75);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 113, 1);
	glVertex2f(-0.6, -0.725);
	glVertex2f(-0.625, -0.7);
	glVertex2f(-0.575, -0.65);
	glVertex2f(-0.55, -0.675);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(133, 58, 1);
	glVertex2f(-0.8, -0.7);
	glVertex2f(-0.775, -0.65);
	glVertex2f(-0.575, -0.65);
	glVertex2f(-0.625, -0.7);
	glEnd();

	//GLASS
	glBegin(GL_QUADS);
	glColor3ub(255, 234, 226);
	glVertex2f(-0.79, -0.78);
	glVertex2f(-0.79, -0.72);
	glVertex2f(-0.75, -0.72);
	glVertex2f(-0.75, -0.78);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 234, 226);
	glVertex2f(-0.74, -0.78);
	glVertex2f(-0.74, -0.72);
	glVertex2f(-0.70, -0.72);
	glVertex2f(-0.70, -0.78);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 234, 226);
	glVertex2f(-0.69, -0.78);
	glVertex2f(-0.69, -0.72);
	glVertex2f(-0.65, -0.72);
	glVertex2f(-0.65, -0.78);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 234, 226);
	glVertex2f(-0.64, -0.78);
	glVertex2f(-0.64, -0.73);
	glVertex2f(-0.60, -0.73);
	glVertex2f(-0.60, -0.78);
	glEnd();


	//BUS_WHEEL
	int i6;

	GLfloat x6=-0.75f; GLfloat y6=-0.9f; GLfloat radius6 =.035f;
	int triangleAmount6 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x6, y6); // center of circle
		for(i6 = 0; i6 <= triangleAmount6;i6++) {
			glVertex2f(
                x6 + (radius6 * cos(i6 * twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(i6 * twicePi6 / triangleAmount6))
			);
		}
	glEnd();

	int i7;

	GLfloat x7=-0.75f; GLfloat y7=-0.9f; GLfloat radius7 =.02f;
	int triangleAmount7 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 165);
		glVertex2f(x7, y7); // center of circle
		for(i7 = 0; i7 <= triangleAmount7;i7++) {
			glVertex2f(
                x7 + (radius7 * cos(i7 * twicePi7 / triangleAmount7)),
			    y7 + (radius7 * sin(i7 * twicePi7 / triangleAmount7))
			);
		}
	glEnd();

	int i8;

	GLfloat x8=-0.65f; GLfloat y8=-0.9f; GLfloat radius8 =.035f;
	int triangleAmount8 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x8, y8); // center of circle
		for(i8 = 0; i8 <= triangleAmount8;i8++) {
			glVertex2f(
                x8 + (radius6 * cos(i8 * twicePi8 / triangleAmount8)),
			    y8 + (radius6 * sin(i8 * twicePi8 / triangleAmount8))
			);
		}
	glEnd();

	int i9;

	GLfloat x9=-0.65f; GLfloat y9=-0.9f; GLfloat radius9 =.02f;
	int triangleAmount9 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 165);
		glVertex2f(x9, y9); // center of circle
		for(i9 = 0; i9 <= triangleAmount9;i9++) {
			glVertex2f(
                x9 + (radius9 * cos(i9 * twicePi9 / triangleAmount9)),
			    y9 + (radius9 * sin(i9 * twicePi9 / triangleAmount9))
			);
		}
	glEnd();

	//DESIGN
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.6, -0.85);
	glVertex2f(-0.80, -0.85);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.6, -0.84);
	glVertex2f(-0.80, -0.84);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.6, -0.83);
	glVertex2f(-0.80, -0.83);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.6, -0.85);
	glVertex2f(-0.55, -0.80);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.6, -0.84);
	glVertex2f(-0.55, -0.79);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.6, -0.83);
	glVertex2f(-0.55, -0.78);
	glEnd();

	glLoadIdentity();
}
void bus3()
{
    //BUS
    glTranslatef(0.0f, 0.06f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(33, 42, 165);
	glVertex2f(0.8, -0.9);
	glVertex2f(0.8, -0.8);
	glVertex2f(0.6, -0.8);
	glVertex2f(0.6, -0.9);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(158, 194, 255);
	glVertex2f(0.8, -0.8);
	glVertex2f(0.8, -0.7);
	glVertex2f(0.6, -0.7);
	glVertex2f(0.6, -0.8);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(33, 42, 165);
	glVertex2f(0.6, -0.9);
	glVertex2f(0.6, -0.8);
	glVertex2f(0.55, -0.75);
	glVertex2f(0.55, -0.85);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(206, 206, 206);
	glVertex2f(0.6, -0.8);
	glVertex2f(0.6, -0.725);
	glVertex2f(0.55, -0.675);
	glVertex2f(0.55, -0.75);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(33, 42, 165);
	glVertex2f(0.6, -0.725);
	glVertex2f(0.625, -0.7);
	glVertex2f(0.575, -0.65);
	glVertex2f(0.55, -0.675);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 12, 137);
	glVertex2f(0.8, -0.7);
	glVertex2f(0.775, -0.65);
	glVertex2f(0.575, -0.65);
	glVertex2f(0.625, -0.7);
	glEnd();

	//GLASS
	glBegin(GL_QUADS);
	glColor3ub(255, 234, 226);
	glVertex2f(0.79, -0.78);
	glVertex2f(0.79, -0.72);
	glVertex2f(0.75, -0.72);
	glVertex2f(0.75, -0.78);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 234, 226);
	glVertex2f(0.74, -0.78);
	glVertex2f(0.74, -0.72);
	glVertex2f(0.70, -0.72);
	glVertex2f(0.70, -0.78);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 234, 226);
	glVertex2f(0.69, -0.78);
	glVertex2f(0.69, -0.72);
	glVertex2f(0.65, -0.72);
	glVertex2f(0.65, -0.78);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 234, 226);
	glVertex2f(0.64, -0.78);
	glVertex2f(0.64, -0.73);
	glVertex2f(0.60, -0.73);
	glVertex2f(0.60, -0.78);
	glEnd();


	//BUS_WHEEL
	int i6;

	GLfloat x6=0.75f; GLfloat y6=-0.9f; GLfloat radius6 =.035f;
	int triangleAmount6 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x6, y6); // center of circle
		for(i6 = 0; i6 <= triangleAmount6;i6++) {
			glVertex2f(
                x6 + (radius6 * cos(i6 * twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(i6 * twicePi6 / triangleAmount6))
			);
		}
	glEnd();

	int i7;

	GLfloat x7=0.75f; GLfloat y7=-0.9f; GLfloat radius7 =.02f;
	int triangleAmount7 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 165);
		glVertex2f(x7, y7); // center of circle
		for(i7 = 0; i7 <= triangleAmount7;i7++) {
			glVertex2f(
                x7 + (radius7 * cos(i7 * twicePi7 / triangleAmount7)),
			    y7 + (radius7 * sin(i7 * twicePi7 / triangleAmount7))
			);
		}
	glEnd();

	int i8;

	GLfloat x8=0.65f; GLfloat y8=-0.9f; GLfloat radius8 =.035f;
	int triangleAmount8 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x8, y8); // center of circle
		for(i8 = 0; i8 <= triangleAmount8;i8++) {
			glVertex2f(
                x8 + (radius6 * cos(i8 * twicePi8 / triangleAmount8)),
			    y8 + (radius6 * sin(i8 * twicePi8 / triangleAmount8))
			);
		}
	glEnd();

	int i9;

	GLfloat x9=0.65f; GLfloat y9=-0.9f; GLfloat radius9 =.02f;
	int triangleAmount9 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 165);
		glVertex2f(x9, y9); // center of circle
		for(i9 = 0; i9 <= triangleAmount9;i9++) {
			glVertex2f(
                x9 + (radius9 * cos(i9 * twicePi9 / triangleAmount9)),
			    y9 + (radius9 * sin(i9 * twicePi9 / triangleAmount9))
			);
		}
	glEnd();

	//DESIGN
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.6, -0.85);
	glVertex2f(0.80, -0.85);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.6, -0.84);
	glVertex2f(0.80, -0.84);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.6, -0.83);
	glVertex2f(0.80, -0.83);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.6, -0.85);
	glVertex2f(0.55, -0.80);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.6, -0.84);
	glVertex2f(0.55, -0.79);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.6, -0.83);
	glVertex2f(0.55, -0.78);
	glEnd();

	glLoadIdentity();
}
void car()
{
    glTranslatef(-0.2f, -0.83f, 0.0f);
    glScalef(0.30, 0.85, 0);
    glBegin(GL_POLYGON);
    glColor3ub(215, 215, 215);
    glVertex2f(-.22,.08);
    glVertex2f(-.28,.08);
    glVertex2f(-.3,0);
    glVertex2f(.3,0);
    glVertex2f(.28,.08);
    glVertex2f(.2,.08);
    glVertex2f(.16,.14);
    glVertex2f(-.18,.14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(215, 215, 215);
    glVertex2f(-.17,.13);
    glVertex2f(-.21,.07);
    glColor3ub(113,113,113);
    glVertex2f(.19,.07);
    glVertex2f(.15,.13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-.01,.13);
    glVertex2f(-.01,.07);
    glVertex2f(.0,.07);
    glVertex2f(.0,.13);
    glEnd();

    //CAR-WHEEL
	int i1;

	GLfloat x2=-0.15f; GLfloat y2=0.001f; GLfloat radius2 =.05f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x2, y2); // center of circle
		for(i1 = 0; i1 <= triangleAmount2;i1++) {
			glVertex2f(
                x2 + (radius2 * cos(i1 * twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i1 * twicePi2 / triangleAmount2))
			);
		}
	glEnd();

	int i2;

	GLfloat x3=-0.15f; GLfloat y3=0.001f; GLfloat radius3 =.03f;
	int triangleAmount3 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(126, 126, 126);
		glVertex2f(x3, y3); // center of circle
		for(i2 = 0; i2 <= triangleAmount3;i2++) {
			glVertex2f(
                x3 + (radius3 * cos(i2 * twicePi3 / triangleAmount3)),
			    y3 + (radius3 * sin(i2 * twicePi3 / triangleAmount3))
			);
		}
	glEnd();

	int i4;

	GLfloat x4=0.15f; GLfloat y4=0.001f; GLfloat radius4 =.05f;
	int triangleAmount4 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x4, y4); // center of circle
		for(i4 = 0; i4 <= triangleAmount4;i4++) {
			glVertex2f(
                x4 + (radius4 * cos(i4 * twicePi4 / triangleAmount4)),
			    y4 + (radius4 * sin(i4 * twicePi4 / triangleAmount4))
			);
		}
	glEnd();

	int i5;

	GLfloat x5=0.15f; GLfloat y5=0.001f; GLfloat radius5 =.03f;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(126, 126, 126);
		glVertex2f(x5, y5); // center of circle
		for(i5 = 0; i5 <= triangleAmount5;i5++) {
			glVertex2f(
                x5 + (radius5 * cos(i5 * twicePi5 / triangleAmount5)),
			    y5 + (radius5 * sin(i5 * twicePi5 / triangleAmount5))
			);
		}
	glEnd();

	glLoadIdentity();
}
void car2()
{
    glTranslatef(0.1f, -0.96f, 0.0f);
    glScalef(0.30, 0.85, 0);
    glBegin(GL_POLYGON);
    glColor3ub(178, 0, 0);
    glVertex2f(-.22,.08);
    glVertex2f(-.28,.08);
    glVertex2f(-.3,0);
    glVertex2f(.3,0);
    glVertex2f(.28,.08);
    glVertex2f(.2,.08);
    glVertex2f(.16,.14);
    glVertex2f(-.18,.14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(215, 215, 215);
    glVertex2f(-.17,.13);
    glVertex2f(-.21,.07);
    glColor3ub(113,113,113);
    glVertex2f(.19,.07);
    glVertex2f(.15,.13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-.01,.13);
    glVertex2f(-.01,.07);
    glVertex2f(.0,.07);
    glVertex2f(.0,.13);
    glEnd();

    //CAR-WHEEL
	int i1;

	GLfloat x2=-0.15f; GLfloat y2=0.001f; GLfloat radius2 =.05f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x2, y2); // center of circle
		for(i1 = 0; i1 <= triangleAmount2;i1++) {
			glVertex2f(
                x2 + (radius2 * cos(i1 * twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i1 * twicePi2 / triangleAmount2))
			);
		}
	glEnd();

	int i2;

	GLfloat x3=-0.15f; GLfloat y3=0.001f; GLfloat radius3 =.03f;
	int triangleAmount3 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(126, 126, 126);
		glVertex2f(x3, y3); // center of circle
		for(i2 = 0; i2 <= triangleAmount3;i2++) {
			glVertex2f(
                x3 + (radius3 * cos(i2 * twicePi3 / triangleAmount3)),
			    y3 + (radius3 * sin(i2 * twicePi3 / triangleAmount3))
			);
		}
	glEnd();

	int i4;

	GLfloat x4=0.15f; GLfloat y4=0.001f; GLfloat radius4 =.05f;
	int triangleAmount4 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x4, y4); // center of circle
		for(i4 = 0; i4 <= triangleAmount4;i4++) {
			glVertex2f(
                x4 + (radius4 * cos(i4 * twicePi4 / triangleAmount4)),
			    y4 + (radius4 * sin(i4 * twicePi4 / triangleAmount4))
			);
		}
	glEnd();

	int i5;

	GLfloat x5=0.15f; GLfloat y5=0.001f; GLfloat radius5 =.03f;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(126, 126, 126);
		glVertex2f(x5, y5); // center of circle
		for(i5 = 0; i5 <= triangleAmount5;i5++) {
			glVertex2f(
                x5 + (radius5 * cos(i5 * twicePi5 / triangleAmount5)),
			    y5 + (radius5 * sin(i5 * twicePi5 / triangleAmount5))
			);
		}
	glEnd();

	glLoadIdentity();
}
void car3()
{
    glTranslatef(0.9f, -0.96f, 0.0f);
    glScalef(0.30, 0.85, 0);
    glBegin(GL_POLYGON);
    glColor3ub(53, 69, 232);
    glVertex2f(-.22,.08);
    glVertex2f(-.28,.08);
    glVertex2f(-.3,0);
    glVertex2f(.3,0);
    glVertex2f(.28,.08);
    glVertex2f(.2,.08);
    glVertex2f(.16,.14);
    glVertex2f(-.18,.14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(215, 215, 215);
    glVertex2f(-.17,.13);
    glVertex2f(-.21,.07);
    glColor3ub(113,113,113);
    glVertex2f(.19,.07);
    glVertex2f(.15,.13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-.01,.13);
    glVertex2f(-.01,.07);
    glVertex2f(.0,.07);
    glVertex2f(.0,.13);
    glEnd();

    //CAR-WHEEL
	int i1;

	GLfloat x2=-0.15f; GLfloat y2=0.001f; GLfloat radius2 =.05f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x2, y2); // center of circle
		for(i1 = 0; i1 <= triangleAmount2;i1++) {
			glVertex2f(
                x2 + (radius2 * cos(i1 * twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i1 * twicePi2 / triangleAmount2))
			);
		}
	glEnd();

	int i2;

	GLfloat x3=-0.15f; GLfloat y3=0.001f; GLfloat radius3 =.03f;
	int triangleAmount3 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(126, 126, 126);
		glVertex2f(x3, y3); // center of circle
		for(i2 = 0; i2 <= triangleAmount3;i2++) {
			glVertex2f(
                x3 + (radius3 * cos(i2 * twicePi3 / triangleAmount3)),
			    y3 + (radius3 * sin(i2 * twicePi3 / triangleAmount3))
			);
		}
	glEnd();

	int i4;

	GLfloat x4=0.15f; GLfloat y4=0.001f; GLfloat radius4 =.05f;
	int triangleAmount4 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x4, y4); // center of circle
		for(i4 = 0; i4 <= triangleAmount4;i4++) {
			glVertex2f(
                x4 + (radius4 * cos(i4 * twicePi4 / triangleAmount4)),
			    y4 + (radius4 * sin(i4 * twicePi4 / triangleAmount4))
			);
		}
	glEnd();

	int i5;

	GLfloat x5=0.15f; GLfloat y5=0.001f; GLfloat radius5 =.03f;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(126, 126, 126);
		glVertex2f(x5, y5); // center of circle
		for(i5 = 0; i5 <= triangleAmount5;i5++) {
			glVertex2f(
                x5 + (radius5 * cos(i5 * twicePi5 / triangleAmount5)),
			    y5 + (radius5 * sin(i5 * twicePi5 / triangleAmount5))
			);
		}
	glEnd();

	glLoadIdentity();
}
void car4()
{
    glTranslatef(0.2f, -0.835f, 0.0f);
    glScalef(0.30, 0.85, 0);
    glBegin(GL_POLYGON);
    glColor3ub(98, 0, 120);
    glVertex2f(-.22,.08);
    glVertex2f(-.28,.08);
    glVertex2f(-.3,0);
    glVertex2f(.3,0);
    glVertex2f(.28,.08);
    glVertex2f(.2,.08);
    glVertex2f(.16,.14);
    glVertex2f(-.18,.14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(215, 215, 215);
    glVertex2f(-.17,.13);
    glVertex2f(-.21,.07);
    glColor3ub(113,113,113);
    glVertex2f(.19,.07);
    glVertex2f(.15,.13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-.01,.13);
    glVertex2f(-.01,.07);
    glVertex2f(.0,.07);
    glVertex2f(.0,.13);
    glEnd();

    //CAR-WHEEL
	int i1;

	GLfloat x2=-0.15f; GLfloat y2=0.001f; GLfloat radius2 =.05f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x2, y2); // center of circle
		for(i1 = 0; i1 <= triangleAmount2;i1++) {
			glVertex2f(
                x2 + (radius2 * cos(i1 * twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i1 * twicePi2 / triangleAmount2))
			);
		}
	glEnd();

	int i2;

	GLfloat x3=-0.15f; GLfloat y3=0.001f; GLfloat radius3 =.03f;
	int triangleAmount3 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(126, 126, 126);
		glVertex2f(x3, y3); // center of circle
		for(i2 = 0; i2 <= triangleAmount3;i2++) {
			glVertex2f(
                x3 + (radius3 * cos(i2 * twicePi3 / triangleAmount3)),
			    y3 + (radius3 * sin(i2 * twicePi3 / triangleAmount3))
			);
		}
	glEnd();

	int i4;

	GLfloat x4=0.15f; GLfloat y4=0.001f; GLfloat radius4 =.05f;
	int triangleAmount4 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x4, y4); // center of circle
		for(i4 = 0; i4 <= triangleAmount4;i4++) {
			glVertex2f(
                x4 + (radius4 * cos(i4 * twicePi4 / triangleAmount4)),
			    y4 + (radius4 * sin(i4 * twicePi4 / triangleAmount4))
			);
		}
	glEnd();

	int i5;

	GLfloat x5=0.15f; GLfloat y5=0.001f; GLfloat radius5 =.03f;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(126, 126, 126);
		glVertex2f(x5, y5); // center of circle
		for(i5 = 0; i5 <= triangleAmount5;i5++) {
			glVertex2f(
                x5 + (radius5 * cos(i5 * twicePi5 / triangleAmount5)),
			    y5 + (radius5 * sin(i5 * twicePi5 / triangleAmount5))
			);
		}
	glEnd();

	glLoadIdentity();
}
void cloud()
{
    //Cloud1
	glColor3ub(215, 233, 254);
	FilledCircle(0.0f, 0.68f, 0.05, 100);
	FilledCircle(0.05f, 0.63f, 0.05, 100);
	FilledCircle(-0.05f, 0.63f, 0.05, 100);
	FilledCircle(0.0f, 0.6f, 0.05, 100);
}
void cloud2()
{
    //Cloud2
	glColor3ub(215, 233, 254);
	FilledCircle(0.5f, 0.72f, 0.065, 100);
	FilledCircle(0.43f, 0.71f, 0.04, 100);
	FilledCircle(0.57f, 0.71f, 0.04, 100);
	FilledCircle(0.43f, 0.65f, 0.05, 100);
	FilledCircle(0.58f, 0.65f, 0.05, 100);
	FilledCircle(0.5f, 0.63f, 0.05, 100);
}
void cloudAsh()
{
    //Cloud1
	glColor3ub(135, 135, 135);
	FilledCircle(0.0f, 0.68f, 0.05, 100);
	FilledCircle(0.05f, 0.63f, 0.05, 100);
	FilledCircle(-0.05f, 0.63f, 0.05, 100);
	FilledCircle(0.0f, 0.6f, 0.05, 100);
}
void cloudAsh2()
{
    //Cloud2
	glColor3ub(135, 135, 135);
	FilledCircle(0.5f, 0.72f, 0.065, 100);
	FilledCircle(0.43f, 0.71f, 0.04, 100);
	FilledCircle(0.57f, 0.71f, 0.04, 100);
	FilledCircle(0.43f, 0.65f, 0.05, 100);
	FilledCircle(0.58f, 0.65f, 0.05, 100);
	FilledCircle(0.5f, 0.63f, 0.05, 100);
}
void plane()
{
    glTranslatef(-0.6f, 1.4f, 0.0f);
	glScalef(0.4, 0.85, 0);
    glColor3ub(247,2,1);
    glBegin(GL_POLYGON);
    glVertex2f(-.68,-.75);
    glVertex2f(-.78,-.55);
    glVertex2f(-.84,-.55);
    glVertex2f(-.8,-.75);
    glEnd();
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(-.8315,-.6);
    glVertex2f(-.8275,-.62);
    glVertex2f(-.755,-.64);
    glVertex2f(-.765,-.62);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-.8215,-.64);
    glVertex2f(-.8175,-.66);
    glVertex2f(-.735,-.68);
    glVertex2f(-.745,-.66);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-.55,-.89);
    glVertex2f(0,-.89);
    glVertex2f(.07,-.875);
    glVertex2f(.07,-.835);
    glVertex2f(.03,-.82);
    glVertex2f(-.085,-.75);
    glVertex2f(-.2,-.73);
    glVertex2f(-.75,-.73);
    glVertex2f(-.9,-.75);
    glVertex2f(-.9,-.79);
    glVertex2f(-.8,-.83);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex2f(-.9,-.75);
    glVertex2f(-.93,-.755);
    glVertex2f(-.93,-.785);
    glVertex2f(-.9,-.79);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(247,2,1);
    glVertex2f(.07,-.835);
    glVertex2f(.07,-.875);
    glVertex2f(.1,-.86);
    glVertex2f(.1,-.85);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(247,2,1);
    glVertex2f(-.73,-.79);
    glVertex2f(-.75,-.785);
    glVertex2f(-.84,-.785);
    glVertex2f(-.93,-.81);
    glVertex2f(-.87,-.815);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(-.15,-.77);
    glVertex2f(-.15,-.81);
    glVertex2f(.015,-.81);
    glVertex2f(-.05,-.77);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(-.085,-.77);
    glVertex2f(-.06,-.81);
    glVertex2f(-.05,-.81);
    glVertex2f(-.075,-.77);
    glEnd();
    glColor3f(0,0,0);
    FilledCircle(-.46,-.923,.025,360);
    glColor3f(1,1,1);
    FilledCircle(-.46,-.923,.01,360);
    glColor3ub(223,227,239);
    glBegin(GL_POLYGON);
    glVertex2f(-.54,-.85);
    glVertex2f(-.54,-.9);
    glVertex2f(-.49,-.91);
    glVertex2f(-.44,-.91);
    glVertex2f(-.44,-.85);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.44,-.91);
    glVertex2f(-.44,-.85);
    glVertex2f(-.43,-.85);
    glVertex2f(-.43,-.91);
    glEnd();
    glColor3ub(247,2,1);
    glBegin(GL_POLYGON);
    glVertex2f(-.28,-.84);
    glVertex2f(-.33,-.83);
    glVertex2f(-.5,-.84);
    glVertex2f(-.7,-.9);
    glVertex2f(-.6,-.893);
    glVertex2f(-.57,-.9);
    glEnd();
    glColor3ub(130,44,39);
    glBegin(GL_POLYGON);
    glVertex2f(-.7,-.9);
    glVertex2f(-.6,-.893);
    glVertex2f(-.57,-.9);
    glVertex2f(-.63,-.907);
    glEnd();
    glColor3ub(80,196,245);
    glBegin(GL_POLYGON);
    glVertex2f(-.18,-.775);
    glVertex2f(-.23,-.775);
    glVertex2f(-.23,-.835);
    glVertex2f(-.18,-.835);
    glEnd();
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(-.185,-.78);
    glVertex2f(-.225,-.78);
    glVertex2f(-.225,-.83);
    glVertex2f(-.185,-.83);
    glEnd();
    float diff=.45;
    glColor3ub(80,196,245);
    glBegin(GL_POLYGON);
    glVertex2f(-.18-diff,-.775);
    glVertex2f(-.23-diff,-.775);
    glVertex2f(-.23-diff,-.835);
    glVertex2f(-.18-diff,-.835);
    glEnd();
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(-.185-diff,-.78);
    glVertex2f(-.225-diff,-.78);
    glVertex2f(-.225-diff,-.83);
    glVertex2f(-.185-diff,-.83);
    glEnd();
    glColor3f(0,0,0);
    float x1=-.265,y1=-.783;
    float dist=.025;
    while(x1-2*dist>-.63){
    glBegin(GL_POLYGON);
    glVertex2f(x1,y1);
    glVertex2f(x1-dist,y1);
    glVertex2f(x1-dist,y1-dist);
    glVertex2f(x1,y1-dist);
    glEnd();
    x1-=2*dist;
    }
    glColor3ub(90,110,117);
    glBegin(GL_POLYGON);
    glVertex2f(-.1,-.89);
    glVertex2f(-.12,-.89);
    glVertex2f(-.12,-.92);
    glVertex2f(-.1,-.92);
    glEnd();
    glColor3f(0,0,0);
    FilledCircle(-.11,-.925,.02,360);
    glColor3f(1,1,1);
    FilledCircle(-.11,-.925,.008,360);
    glLoadIdentity();
}
void people()
{
    /*glTranslatef(0.25f, -0.68f, 0.0f);
    glScalef(0.1, 0.1, 0);
	glColor3ub(253,231,173);
    FilledCircle(0.0,0.5,0.1,100);
    glBegin(GL_TRIANGLES);
    glVertex2f(.12,.48);
    glVertex2f(.08,.55);
    glVertex2f(.0,.48);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(.05,.538);
    glVertex2f(.07,.55);
    glVertex2f(.09,.545);
    glEnd();

    FilledCircle(0.0825,0.53,.01,100);
    glBegin(GL_TRIANGLES);
    glVertex2f(.0455,.45);
    glVertex2f(.075,.438);
    glVertex2f(.085,.445);
    glEnd();
    glColor3ub(253,231,173);

    glBegin(GL_QUADS);
    glVertex2f(-.06,.43);
    glVertex2f(-.06,.35);
    glVertex2f(.03,.35);
    glVertex2f(.03,.43);
    glEnd();

    //leg
    glPushMatrix();
    glRotatef(leftL,0,0,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.05,-.5);
    glVertex2f(.1,-.5);
    glVertex2f(.09,-.45);
    glVertex2f(.05,-.45);
    glVertex2f(.08,0);
    glVertex2f(-.08,0);
    glEnd();
    glPopMatrix();

    glRotatef(0,0,0,1);
    glPushMatrix();
    glRotatef(rightL,0,0,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.05,-.5);
    glVertex2f(.1,-.5);
    glVertex2f(.09,-.45);
    glVertex2f(.05,-.45);
    glVertex2f(.08,0);
    glVertex2f(-.08,0);
    glEnd();
    glPopMatrix();

    //glRotatef(0,0,0,1);


    //body
    glBegin(GL_POLYGON);
    glVertex2f(-.065,.37);
    glVertex2f(-.1,.3);
    glVertex2f(-.08,0);
    glVertex2f(.08,0);
    glVertex2f(.083,.28);
    glVertex2f(.04,.35);
    glEnd();

    glColor3ub(253,231,173);
    glBegin(GL_POLYGON);

    glVertex2f(-.02,.14);
    glVertex2f(.04,.3);
    glVertex2f(-.07,.3);
    glVertex2f(-.1,.1);
    glVertex2f(.0,.05);
    glVertex2f(.02,.11);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(.04,.3);
    glVertex2f(-.07,.3);
    glVertex2f(-.084,.22);
    glVertex2f(.01,.2);
    glEnd();

    glLoadIdentity();
    */
    glColor3ub(253,231,173);
    FilledCircle(0,.5,.1,100);
    glBegin(GL_TRIANGLES);
    glVertex2f(.12,.48);
    glVertex2f(.08,.55);
    glVertex2f(.0,.48);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(.05,.538);
    glVertex2f(.07,.55);
    glVertex2f(.09,.545);
    glEnd();

    FilledCircle(.0825,.53,.01,100);
    glBegin(GL_TRIANGLES);
    glVertex2f(.0455,.45);
    glVertex2f(.075,.438);
    glVertex2f(.085,.445);
    glEnd();
    glColor3ub(253,231,173);

    glBegin(GL_QUADS);
    glVertex2f(-.06,.43);
    glVertex2f(-.06,.35);
    glVertex2f(.03,.35);
    glVertex2f(.03,.43);
    glEnd();

    //leg
    glPushMatrix();
    glRotatef(leftL,0,0,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.05,-.5);
    glVertex2f(.1,-.5);
    glVertex2f(.09,-.45);
    glVertex2f(.05,-.45);
    glVertex2f(.08,0);
    glVertex2f(-.08,0);
    glEnd();
    glPopMatrix();

    glRotatef(0,0,0,1);
    glPushMatrix();
    glRotatef(rightL,0,0,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.05,-.5);
    glVertex2f(.1,-.5);
    glVertex2f(.09,-.45);
    glVertex2f(.05,-.45);
    glVertex2f(.08,0);
    glVertex2f(-.08,0);
    glEnd();

    glPopMatrix();

    glRotatef(0,0,0,1);


//body
    getColor();
    glBegin(GL_POLYGON);
    glVertex2f(-.065,.37);
    glVertex2f(-.1,.3);
    glVertex2f(-.08,0);
    glVertex2f(.08,0);
    glVertex2f(.083,.28);
    glVertex2f(.04,.35);
    glEnd();

    glColor3ub(253,231,173);
    glBegin(GL_POLYGON);

    glVertex2f(-.02,.14);
    glVertex2f(.04,.3);
    glVertex2f(-.07,.3);
    glVertex2f(-.1,.1);
    glVertex2f(.0,.05);
    glVertex2f(.02,.11);
    glEnd();
    getColor();
    glBegin(GL_POLYGON);
    glVertex2f(.04,.3);
    glVertex2f(-.07,.3);
    glVertex2f(-.084,.22);
    glVertex2f(.01,.2);

    glEnd();
}
void people2()
{
    glTranslatef(0.375f, -0.70f, 0.0f);
    glScalef(0.1, 0.1, 0);
	glColor3ub(253,231,173);
    FilledCircle(0.0,0.5,0.1,100);
    glBegin(GL_TRIANGLES);
    glVertex2f(.12,.48);
    glVertex2f(.08,.55);
    glVertex2f(.0,.48);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(.05,.538);
    glVertex2f(.07,.55);
    glVertex2f(.09,.545);
    glEnd();

    FilledCircle(0.0825,0.53,.01,100);
    glBegin(GL_TRIANGLES);
    glVertex2f(.0455,.45);
    glVertex2f(.075,.438);
    glVertex2f(.085,.445);
    glEnd();
    glColor3ub(253,231,173);

    glBegin(GL_QUADS);
    glVertex2f(-.06,.43);
    glVertex2f(-.06,.35);
    glVertex2f(.03,.35);
    glVertex2f(.03,.43);
    glEnd();

    //leg
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.05,-.5);
    glVertex2f(.1,-.5);
    glVertex2f(.09,-.45);
    glVertex2f(.05,-.45);
    glVertex2f(.08,0);
    glVertex2f(-.08,0);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.05,-.5);
    glVertex2f(.1,-.5);
    glVertex2f(.09,-.45);
    glVertex2f(.05,-.45);
    glVertex2f(.08,0);
    glVertex2f(-.08,0);
    glEnd();

    //body
    glBegin(GL_POLYGON);
    glVertex2f(-.065,.37);
    glVertex2f(-.1,.3);
    glVertex2f(-.08,0);
    glVertex2f(.08,0);
    glVertex2f(.083,.28);
    glVertex2f(.04,.35);
    glEnd();

    glColor3ub(253,231,173);
    glBegin(GL_POLYGON);

    glVertex2f(-.02,.14);
    glVertex2f(.04,.3);
    glVertex2f(-.07,.3);
    glVertex2f(-.1,.1);
    glVertex2f(.0,.05);
    glVertex2f(.02,.11);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(.04,.3);
    glVertex2f(-.07,.3);
    glVertex2f(-.084,.22);
    glVertex2f(.01,.2);
    glEnd();

    glLoadIdentity();
}
void streetlight()
{
    glTranslatef(-0.2f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(71, 71, 71);
	glVertex2f(-0.005, -0.75);
	glVertex2f(-0.005, -0.55);
	glVertex2f(0.005, -0.55);
	glVertex2f(0.005, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(71, 71, 71);
	glVertex2f(-0.05, -0.56);
	glVertex2f(-0.05, -0.550);
	glVertex2f(0.05, -0.550);
	glVertex2f(0.05, -0.56);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(71, 71, 71);
	glVertex2f(-0.05, -0.585);
	glVertex2f(-0.05, -0.550);
	glVertex2f(-0.04, -0.550);
	glVertex2f(-0.04, -0.585);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(71, 71, 71);
	glVertex2f(0.05, -0.585);
	glVertex2f(0.05, -0.550);
	glVertex2f(0.04, -0.550);
	glVertex2f(0.04, -0.585);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(71, 71, 71);
    glVertex2f(0.0,-0.725);
    glVertex2f(-0.02,-0.75);
    glVertex2f(0.02,-0.75);
    glEnd();

	glColor3ub(223, 223, 223);
	FilledCircle(-0.045f,-0.6f,.015,100);
	FilledCircle(0.045f,-0.6f,.015,100);
	glLoadIdentity();


}
void streetlightnight()
{
    glTranslatef(-0.2f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(71, 71, 71);
	glVertex2f(-0.005, -0.75);
	glVertex2f(-0.005, -0.55);
	glVertex2f(0.005, -0.55);
	glVertex2f(0.005, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(71, 71, 71);
	glVertex2f(-0.05, -0.56);
	glVertex2f(-0.05, -0.550);
	glVertex2f(0.05, -0.550);
	glVertex2f(0.05, -0.56);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(71, 71, 71);
	glVertex2f(-0.05, -0.585);
	glVertex2f(-0.05, -0.550);
	glVertex2f(-0.04, -0.550);
	glVertex2f(-0.04, -0.585);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(71, 71, 71);
	glVertex2f(0.05, -0.585);
	glVertex2f(0.05, -0.550);
	glVertex2f(0.04, -0.550);
	glVertex2f(0.04, -0.585);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(71, 71, 71);
    glVertex2f(0.0,-0.725);
    glVertex2f(-0.02,-0.75);
    glVertex2f(0.02,-0.75);
    glEnd();

	glColor3ub(255, 179, 0);
	FilledCircle(-0.045f,-0.6f,.015,100);
	FilledCircle(0.045f,-0.6f,.015,100);
	glLoadIdentity();


}
void traficlight()
{
   glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.005, -0.75);
	glVertex2f(-0.005, -0.55);
	glVertex2f(0.005, -0.55);
	glVertex2f(0.005, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.05, -0.56);
	glVertex2f(-0.05, -0.550);
	glVertex2f(0.05, -0.550);
	glVertex2f(0.05, -0.56);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.05, -0.575);
	glVertex2f(-0.05, -0.550);
	glVertex2f(-0.045, -0.550);
	glVertex2f(-0.045, -0.575);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(0.05, -0.575);
	glVertex2f(0.05, -0.550);
	glVertex2f(0.045, -0.550);
	glVertex2f(0.045, -0.575);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.06, -0.65);
	glVertex2f(-0.06, -0.575);
	glVertex2f(-0.04, -0.575);
	glVertex2f(-0.04, -0.65);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(0.06, -0.65);
	glVertex2f(0.06, -0.575);
	glVertex2f(0.04, -0.575);
	glVertex2f(0.04, -0.65);
	glEnd();

	glColor3ub(255, 0, 0);
	FilledCircle(-0.05f,-0.59f,.01,100);
	glColor3ub(216, 216, 45);
	FilledCircle(-0.05f,-0.615f,.01,100);
	glColor3ub(45, 198, 64);
	FilledCircle(-0.05f,-0.638f,.01,100);

	glColor3ub(255, 0, 0);
	FilledCircle(0.05f,-0.59f,.01,100);
	glColor3ub(216, 216, 45);
	FilledCircle(0.05f,-0.615f,.01,100);
	glColor3ub(45, 198, 64);
	FilledCircle(0.05f,-0.638f,.01,100);

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.0,-0.725);
    glVertex2f(-0.02,-0.75);
    glVertex2f(0.02,-0.75);
    glEnd();
}
void rain()
{
    glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.95, 0.95);
	glVertex2f(-0.9, 0.90);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.9, 0.8);
	glVertex2f(-0.95, 0.85);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.85, 0.95);
	glVertex2f(-0.8, 0.9);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.85, 0.85);
	glVertex2f(-0.8, 0.8);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-1.0, 0.8);
	glVertex2f(-0.95, 0.75);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.9, 0.75);
	glVertex2f(-0.85, 0.70);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.95, 0.70);
	glVertex2f(-0.90, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.75, 0.95);
	glVertex2f(-0.7, 0.90);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.7, 0.8);
	glVertex2f(-0.75, 0.85);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.65, 0.95);
	glVertex2f(-0.6, 0.9);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.65, 0.85);
	glVertex2f(-0.6, 0.8);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.8, 0.8);
	glVertex2f(-0.75, 0.75);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.7, 0.75);
	glVertex2f(-0.65, 0.70);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.75, 0.70);
	glVertex2f(-0.7, 0.65);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.55, 0.95);
	glVertex2f(-0.5, 0.90);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.5, 0.8);
	glVertex2f(-0.55, 0.85);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.45, 0.95);
	glVertex2f(-0.4, 0.9);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.45, 0.85);
	glVertex2f(-0.4, 0.8);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.6, 0.8);
	glVertex2f(-0.55, 0.75);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.5, 0.75);
	glVertex2f(-0.45, 0.70);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.55, 0.70);
	glVertex2f(-0.5, 0.65);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.35, 0.95);
	glVertex2f(-0.3, 0.90);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.3, 0.8);
	glVertex2f(-0.35, 0.85);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.25, 0.95);
	glVertex2f(-0.2, 0.9);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.25, 0.85);
	glVertex2f(-0.2, 0.8);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.4, 0.8);
	glVertex2f(-0.35, 0.75);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.3, 0.75);
	glVertex2f(-0.25, 0.70);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.35, 0.70);
	glVertex2f(-0.3, 0.65);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.15, 0.95);
	glVertex2f(-0.1, 0.90);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.1, 0.8);
	glVertex2f(-0.15, 0.85);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.05, 0.95);
	glVertex2f(-0.0, 0.9);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.05, 0.85);
	glVertex2f(-0.0, 0.8);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.2, 0.8);
	glVertex2f(-0.15, 0.75);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.1, 0.75);
	glVertex2f(-0.05, 0.70);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(-0.15, 0.70);
	glVertex2f(-0.1, 0.65);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.05, 0.95);
	glVertex2f(0.1, 0.90);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.1, 0.8);
	glVertex2f(0.05, 0.85);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.15, 0.95);
	glVertex2f(0.2, 0.9);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.15, 0.85);
	glVertex2f(0.2, 0.8);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.0, 0.8);
	glVertex2f(0.05, 0.75);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.1, 0.75);
	glVertex2f(0.15, 0.70);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.05, 0.70);
	glVertex2f(0.1, 0.65);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.25, 0.95);
	glVertex2f(0.3, 0.90);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.3, 0.8);
	glVertex2f(0.25, 0.85);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.35, 0.95);
	glVertex2f(0.4, 0.9);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.35, 0.85);
	glVertex2f(0.4, 0.8);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.2, 0.8);
	glVertex2f(0.25, 0.75);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.3, 0.75);
	glVertex2f(0.35, 0.70);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.25, 0.70);
	glVertex2f(0.3, 0.65);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.45, 0.95);
	glVertex2f(0.5, 0.90);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.5, 0.8);
	glVertex2f(0.45, 0.85);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.55, 0.95);
	glVertex2f(0.6, 0.9);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.55, 0.85);
	glVertex2f(0.6, 0.8);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.4, 0.8);
	glVertex2f(0.45, 0.75);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.5, 0.75);
	glVertex2f(0.55, 0.70);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.45, 0.70);
	glVertex2f(0.5, 0.65);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.65, 0.95);
	glVertex2f(0.7, 0.90);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.7, 0.8);
	glVertex2f(0.65, 0.85);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.75, 0.95);
	glVertex2f(0.8, 0.9);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.75, 0.85);
	glVertex2f(0.8, 0.8);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.6, 0.8);
	glVertex2f(0.65, 0.75);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.7, 0.75);
	glVertex2f(0.75, 0.70);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.65, 0.70);
	glVertex2f(0.7, 0.65);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.85, 0.95);
	glVertex2f(0.9, 0.90);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.9, 0.8);
	glVertex2f(0.85, 0.85);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.95, 0.95);
	glVertex2f(1.0, 0.9);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.95, 0.85);
	glVertex2f(1.0, 0.8);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.8, 0.8);
	glVertex2f(0.85, 0.75);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.9, 0.75);
	glVertex2f(0.95, 0.70);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(213, 213, 213);
	glVertex2f(0.85, 0.70);
	glVertex2f(0.9, 0.65);
	glEnd();
}
void nightstar()
{
    glBegin(GL_TRIANGLES);
    glColor3ub(227, 227, 227);
    glVertex2f(0.0,0.85);
    glVertex2f(-0.013,0.82);
    glVertex2f(0.013,0.82);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(227, 227, 227);
    glVertex2f(0.0,0.805);
    glVertex2f(-0.013,0.836);
    glVertex2f(0.013,0.836);
    glEnd();
}
void rainanim (int value)
{
	if(rainposition >1.0)
        rainposition = -1.0f;

    rainposition += rainspeed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, rainanim, 0);
}





void morning() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

	//SKY
	glBegin(GL_QUADS);
	glColor3ub(0, 204, 255);
	glVertex2f(-1.0, 0.3);
	glVertex2f(-1.0, 1.0);
	glVertex2f(1.0, 1.0);
	glVertex2f(1.0, 0.3);
	glEnd();

	//SUN
    glPushMatrix();
    glTranslatef(sunposition,sunposition,0);
	glColor3ub(255, 102, 0);
	FilledCircle(0.7f, 0.7f, .1, 100);
    glPopMatrix();

	//BACKGROUND
	glBegin(GL_QUADS);
	glColor3ub(0, 99, 15);
	glVertex2f(-1.0, -0.75);
	glVertex2f(-1.0, 0.275);
	glVertex2f(1.0, 0.275);
	glVertex2f(1.0, -0.75);
	glEnd();




	//DIGANTO
	glBegin(GL_QUADS);
	glColor3ub(49, 163, 0);
	glVertex2f(-1.0, 0.275);
	glVertex2f(-1.0, 0.325);
	glVertex2f(1.0,0.325);
	glVertex2f(1.0, 0.275);
	glEnd();

	FilledCircle(0.0f, 0.3f, .05, 100);
	FilledCircle(0.05f, 0.32f, .06, 100);
	FilledCircle(0.1f, 0.3f, .06, 100);
	FilledCircle(0.19f, 0.33f, .06, 100);
	FilledCircle(0.25f, 0.31f, .06, 100);
	FilledCircle(0.32f, 0.31f, .04, 100);
	FilledCircle(0.39f, 0.31f, .06, 100);
	FilledCircle(0.46f, 0.32f, .07, 100);
	FilledCircle(0.55f, 0.3f, .07, 100);
	FilledCircle(0.63f, 0.3f, .04, 100);
	FilledCircle(0.70f, 0.3f, .06, 100);
	FilledCircle(0.75f, 0.322f, .06, 100);
	FilledCircle(0.82f, 0.322f, .04, 100);
	FilledCircle(0.9f, 0.322f, .05, 100);
	FilledCircle(0.95f, 0.3f, .05, 100);
	FilledCircle(1.02f, 0.34f, .05, 100);

	FilledCircle(0.0f, 0.3f, .05, 100);
	FilledCircle(-0.05f, 0.32f, .06, 100);
	FilledCircle(-0.1f, 0.3f, .06, 100);
	FilledCircle(-0.19f, 0.33f, .06, 100);
	FilledCircle(-0.25f, 0.31f, .06, 100);
	FilledCircle(-0.32f, 0.31f, .04, 100);
	FilledCircle(-0.39f, 0.31f, .06, 100);
	FilledCircle(-0.46f, 0.32f, .07, 100);
	FilledCircle(-0.55f, 0.3f, .07, 100);
	FilledCircle(-0.63f, 0.3f, .04, 100);
	FilledCircle(-0.70f, 0.3f, .06, 100);
	FilledCircle(-0.75f, 0.322f, .06, 100);
	FilledCircle(-0.82f, 0.322f, .04, 100);
	FilledCircle(-0.9f, 0.322f, .05, 100);
	FilledCircle(-0.95f, 0.3f, .05, 100);
	FilledCircle(-1.02f, 0.34f, .05, 100);

    glBegin(GL_QUADS);
	glColor3ub(0, 99, 15);
	glVertex2f(-1.0, 0.275);
	glVertex2f(-1.0, 0.2);
	glVertex2f(1.0, 0.2);
	glVertex2f(1.0, 0.275);
	glEnd();

	//BACK-TREE
	glTranslatef(-0.95f, 0.0f, 0.0f);
	bigtree();
	glTranslatef(-0.8f, -0.05f, 0.0f);
	glScalef(0.6, 0.75, 0);
	bigtree2();
	glTranslatef(-0.88f, -0.25f, 0.0f);
	smalltree();

	glTranslatef(0.95f, 0.0f, 0.0f);
	bigtree();
	glTranslatef(0.8f, -0.05f, 0.0f);
	glScalef(0.6, 0.75, 0);
	bigtree2();
	glTranslatef(0.88f, -0.25f, 0.0f);
	smalltree();





    //CLOUDS
	glPushMatrix();
    glTranslatef(position2, 0.0f, 0.0f);
	cloud();
	cloud2();
	glTranslatef(-0.8f, 0.2f, 0.0f);
	cloud2();
	glTranslatef(-0.5f, 0.1f, 0.0f);
	cloud();
	glTranslatef(0.5f, -0.1f, 0.0f);
	cloud();
	glTranslatef(-0.5f, -0.1f, 0.0f);
	cloud2();
	glTranslatef(-0.3f, -0.1f, 0.0f);
	cloud2();
	glTranslatef(-0.3f, -0.1f, 0.0f);
	cloud();
    glPopMatrix();

    //RED-Circle_Behind_The_STOMBHO_MIDDILE
	glColor3ub(204, 0, 0);
	FilledCircle(0.0f, 0.13f, .25, 100);

	//PLANE
	glPushMatrix();
    glTranslatef(-planeposition,0.0, 0.0f);
	plane();
    glPopMatrix();

    //STOMBHO-MIDDLE

    //SHIRI
	glBegin(GL_QUADS);
	glColor3ub(169, 93, 109);
	glVertex2f(-0.75, -0.35);
	glVertex2f(-0.675, -0.15);
	glVertex2f(0.675,-0.15);
	glVertex2f(0.75, -0.35);
	glEnd();
	//BLACK-LINE
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.1, 0.45);
	glVertex2f(-0.1, 0.445);
    glVertex2f(0.1, 0.445);
	glVertex2f(0.1, 0.45);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.105, -0.30);
	glVertex2f(-0.105, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.11, -0.30);
	glVertex2f(-0.11, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.115, -0.30);
	glVertex2f(-0.115, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.12, -0.30);
	glVertex2f(-0.12, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.125, -0.30);
	glVertex2f(-0.125, 0.65);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.105, -0.30);
	glVertex2f(0.105, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.11, -0.30);
	glVertex2f(0.11, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.115, -0.30);
	glVertex2f(0.115, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.12, -0.30);
	glVertex2f(0.12, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.125, -0.30);
	glVertex2f(0.125, 0.65);
	glEnd();

	glTranslatef(0.0f, 0.05f, 0.0f);

    glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.15, -0.35);
	glVertex2f(-0.15, -0.30);
	glVertex2f(0.15, -0.30);
	glVertex2f(0.15, -0.35);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.15, -0.30);
	glVertex2f(-0.15, 0.40);
	glVertex2f(-0.1, 0.40);
	glVertex2f(-0.1, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(0.15, -0.30);
	glVertex2f(0.15, 0.40);
	glVertex2f(0.1, 0.40);
	glVertex2f(0.1, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.025, -0.30);
	glVertex2f(-0.025, 0.40);
	glVertex2f(0.025, 0.40);
	glVertex2f(0.025, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.15, 0.40);
	glVertex2f(-0.16, 0.60);
	glVertex2f(-0.13, 0.60);
	glVertex2f(-0.10, 0.40);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(0.15, 0.40);
	glVertex2f(0.16, 0.60);
	glVertex2f(0.13, 0.60);
	glVertex2f(0.10, 0.40);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.025, 0.40);
	glVertex2f(-0.018, 0.60);
	glVertex2f(0.018, 0.60);
	glVertex2f(0.025, 0.40);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.16, 0.60);
	glVertex2f(-0.16, 0.65);
    glVertex2f(0.16, 0.65);
	glVertex2f(0.16, 0.60);
	glEnd();

    //BLACK-LINE

	//middle
	//glBegin(GL_LINES);
	//glColor3ub(0, 0, 0);
	//glVertex2f(0.0, -0.30);
	//glVertex2f(0.0, 0.60);
	//glEnd();

	/////////
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.1, -0.30);
	glVertex2f(-0.1, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.095, -0.30);
	glVertex2f(-0.095, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.09, -0.30);
	glVertex2f(-0.09, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.085, -0.30);
	glVertex2f(-0.085, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.08, -0.30);
	glVertex2f(-0.08, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.075, -0.30);
	glVertex2f(-0.075, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.07, -0.30);
	glVertex2f(-0.07, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.065, -0.30);
	glVertex2f(-0.065, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.06, -0.30);
	glVertex2f(-0.06, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.055, -0.30);
	glVertex2f(-0.055, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.05, -0.30);
	glVertex2f(-0.05, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.045, -0.30);
	glVertex2f(-0.045, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.04, -0.30);
	glVertex2f(-0.04, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.035, -0.30);
	glVertex2f(-0.035, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.03, -0.30);
	glVertex2f(-0.03, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.025, -0.30);
	glVertex2f(-0.025, 0.60);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.1, -0.30);
	glVertex2f(0.1, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.095, -0.30);
	glVertex2f(0.095, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.09, -0.30);
	glVertex2f(0.09, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.085, -0.30);
	glVertex2f(0.085, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.08, -0.30);
	glVertex2f(0.08, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.075, -0.30);
	glVertex2f(0.075, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.07, -0.30);
	glVertex2f(0.07, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.065, -0.30);
	glVertex2f(0.065, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.06, -0.30);
	glVertex2f(0.06, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.055, -0.30);
	glVertex2f(0.055, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.05, -0.30);
	glVertex2f(0.05, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.045, -0.30);
	glVertex2f(0.045, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.04, -0.30);
	glVertex2f(0.04, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.035, -0.30);
	glVertex2f(0.035, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.03, -0.30);
	glVertex2f(0.03, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.025, -0.30);
	glVertex2f(0.025, 0.60);
	glEnd();



	glLoadIdentity();

	//STOMBHO-MIDDLE-LEFT
	glTranslatef(0.0f, 0.05f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.35);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.325, -0.30);
	glVertex2f(-0.325, -0.35);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.475, 0.40);
	glVertex2f(-0.450, 0.40);
	glVertex2f(-0.450, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.35, -0.30);
	glVertex2f(-0.35, 0.40);
	glVertex2f(-0.325, 0.40);
	glVertex2f(-0.325, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, 0.40);
	glVertex2f(-0.475, 0.45);
	glVertex2f(-0.325, 0.45);
	glVertex2f(-0.325, 0.40);
	glEnd();

	//BLACK-LINE
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.35, -0.3);
	glVertex2f(-0.35, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.355, -0.3);
	glVertex2f(-0.355, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.36, -0.3);
	glVertex2f(-0.36, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.365, -0.3);
	glVertex2f(-0.365, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.37, -0.3);
	glVertex2f(-0.37, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.375, -0.3);
	glVertex2f(-0.375, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.38, -0.3);
	glVertex2f(-0.38, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.385, -0.3);
	glVertex2f(-0.385, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.39, -0.3);
	glVertex2f(-0.39, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.395, -0.3);
	glVertex2f(-0.395, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.4, -0.3);
	glVertex2f(-0.4, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.405, -0.3);
	glVertex2f(-0.405, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.41, -0.3);
	glVertex2f(-0.41, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.415, -0.3);
	glVertex2f(-0.415, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.42, -0.3);
	glVertex2f(-0.42, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.425, -0.3);
	glVertex2f(-0.425, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.43, -0.3);
	glVertex2f(-0.43, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.435, -0.3);
	glVertex2f(-0.435, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.44, -0.3);
	glVertex2f(-0.44, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.445, -0.3);
	glVertex2f(-0.445, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.45, -0.3);
	glVertex2f(-0.45, 0.4);
	glEnd();

	glLoadIdentity();

	//STOMBHO-MIDDLE-RIGHT
	glTranslatef(0.8f, 0.05f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.35);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.325, -0.30);
	glVertex2f(-0.325, -0.35);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.475, 0.40);
	glVertex2f(-0.450, 0.40);
	glVertex2f(-0.450, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.35, -0.30);
	glVertex2f(-0.35, 0.40);
	glVertex2f(-0.325, 0.40);
	glVertex2f(-0.325, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, 0.40);
	glVertex2f(-0.475, 0.45);
	glVertex2f(-0.325, 0.45);
	glVertex2f(-0.325, 0.40);
	glEnd();

	//BLACK-LINE
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.35, -0.3);
	glVertex2f(-0.35, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.355, -0.3);
	glVertex2f(-0.355, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.36, -0.3);
	glVertex2f(-0.36, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.365, -0.3);
	glVertex2f(-0.365, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.37, -0.3);
	glVertex2f(-0.37, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.375, -0.3);
	glVertex2f(-0.375, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.38, -0.3);
	glVertex2f(-0.38, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.385, -0.3);
	glVertex2f(-0.385, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.39, -0.3);
	glVertex2f(-0.39, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.395, -0.3);
	glVertex2f(-0.395, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.4, -0.3);
	glVertex2f(-0.4, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.405, -0.3);
	glVertex2f(-0.405, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.41, -0.3);
	glVertex2f(-0.41, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.415, -0.3);
	glVertex2f(-0.415, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.42, -0.3);
	glVertex2f(-0.42, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.425, -0.3);
	glVertex2f(-0.425, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.43, -0.3);
	glVertex2f(-0.43, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.435, -0.3);
	glVertex2f(-0.435, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.44, -0.3);
	glVertex2f(-0.44, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.445, -0.3);
	glVertex2f(-0.445, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.45, -0.3);
	glVertex2f(-0.45, 0.4);
	glEnd();


	glLoadIdentity();

	//STOMBHO-MIDDLE-RIGHT- RIGHT
	glTranslatef(1.05f, 0.05f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.35);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.325, -0.30);
	glVertex2f(-0.325, -0.35);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.475, 0.20);
	glVertex2f(-0.450, 0.20);
	glVertex2f(-0.450, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.35, -0.30);
	glVertex2f(-0.35, 0.20);
	glVertex2f(-0.325, 0.20);
	glVertex2f(-0.325, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, 0.20);
	glVertex2f(-0.475, 0.25);
	glVertex2f(-0.325, 0.25);
	glVertex2f(-0.325, 0.20);
	glEnd();

	//BLACK-LINE
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.35, -0.3);
	glVertex2f(-0.35, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.355, -0.3);
	glVertex2f(-0.355, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.36, -0.3);
	glVertex2f(-0.36, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.365, -0.3);
	glVertex2f(-0.365, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.37, -0.3);
	glVertex2f(-0.37, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.375, -0.3);
	glVertex2f(-0.375, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.38, -0.3);
	glVertex2f(-0.38, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.385, -0.3);
	glVertex2f(-0.385, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.39, -0.3);
	glVertex2f(-0.39, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.395, -0.3);
	glVertex2f(-0.395, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.4, -0.3);
	glVertex2f(-0.4, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.405, -0.3);
	glVertex2f(-0.405, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.41, -0.3);
	glVertex2f(-0.41, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.415, -0.3);
	glVertex2f(-0.415, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.42, -0.3);
	glVertex2f(-0.42, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.425, -0.3);
	glVertex2f(-0.425, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.43, -0.3);
	glVertex2f(-0.43, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.435, -0.3);
	glVertex2f(-0.435, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.44, -0.3);
	glVertex2f(-0.44, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.445, -0.3);
	glVertex2f(-0.445, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.45, -0.3);
	glVertex2f(-0.45, 0.2);
	glEnd();

	glLoadIdentity();

	//STOMBHO-MIDDLE-LEFT-LEFT
	glTranslatef(-0.25f, 0.05f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.35);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.325, -0.30);
	glVertex2f(-0.325, -0.35);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.475, 0.20);
	glVertex2f(-0.450, 0.20);
	glVertex2f(-0.450, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.35, -0.30);
	glVertex2f(-0.35, 0.20);
	glVertex2f(-0.325, 0.20);
	glVertex2f(-0.325, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, 0.20);
	glVertex2f(-0.475, 0.25);
	glVertex2f(-0.325, 0.25);
	glVertex2f(-0.325, 0.20);
	glEnd();

    //BLACK-LINE
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.35, -0.3);
	glVertex2f(-0.35, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.355, -0.3);
	glVertex2f(-0.355, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.36, -0.3);
	glVertex2f(-0.36, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.365, -0.3);
	glVertex2f(-0.365, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.37, -0.3);
	glVertex2f(-0.37, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.375, -0.3);
	glVertex2f(-0.375, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.38, -0.3);
	glVertex2f(-0.38, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.385, -0.3);
	glVertex2f(-0.385, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.39, -0.3);
	glVertex2f(-0.39, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.395, -0.3);
	glVertex2f(-0.395, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.4, -0.3);
	glVertex2f(-0.4, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.405, -0.3);
	glVertex2f(-0.405, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.41, -0.3);
	glVertex2f(-0.41, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.415, -0.3);
	glVertex2f(-0.415, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.42, -0.3);
	glVertex2f(-0.42, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.425, -0.3);
	glVertex2f(-0.425, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.43, -0.3);
	glVertex2f(-0.43, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.435, -0.3);
	glVertex2f(-0.435, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.44, -0.3);
	glVertex2f(-0.44, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.445, -0.3);
	glVertex2f(-0.445, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.45, -0.3);
	glVertex2f(-0.45, 0.2);
	glEnd();

	glLoadIdentity();

	//SHIRI
	glBegin(GL_QUADS);
	glColor3ub(110, 32, 32);
	glVertex2f(-0.75, -0.40);
	glVertex2f(-0.75, -0.35);
	glVertex2f(0.75, -0.35);
	glVertex2f(0.75, -0.40);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(169, 93, 109);
	glVertex2f(-0.8, -0.45);
	glVertex2f(-0.750, -0.40);
	glVertex2f(0.750, -0.40);
	glVertex2f(0.8, -0.45);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(110, 32, 32);
	glVertex2f(-0.80, -0.50);
	glVertex2f(-0.80, -0.45);
	glVertex2f(0.80, -0.45);
	glVertex2f(0.80, -0.50);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(169, 93, 109);
	glVertex2f(-0.85, -0.55);
	glVertex2f(-0.8, -0.50);
	glVertex2f(0.8, -0.50);
	glVertex2f(0.85, -0.55);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(110, 32, 32);
	glVertex2f(-0.85, -0.60);
	glVertex2f(-0.85, -0.55);
	glVertex2f(0.85, -0.55);
	glVertex2f(0.85, -0.60);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(169, 93, 109);
	glVertex2f(-0.9, -0.65);
	glVertex2f(-0.85, -0.60);
	glVertex2f(0.85, -0.60);
	glVertex2f(0.9, -0.65);
	glEnd();

	/*
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.025, -0.4);
	glVertex2f(-0.025, -0.35);
	glVertex2f(0.025, -0.35);
	glVertex2f(0.025, -0.4);
	glEnd();

	glTranslatef(0.0f, -0.05f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(153, 153, 153);
	glVertex2f(-0.025, -0.4);
	glVertex2f(-0.025, -0.35);
	glVertex2f(0.025, -0.35);
	glVertex2f(0.025, -0.4);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.0f, -0.1f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.025, -0.4);
	glVertex2f(-0.025, -0.35);
	glVertex2f(0.025, -0.35);
	glVertex2f(0.025, -0.4);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.0f, -0.15f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(153, 153, 153);
	glVertex2f(-0.025, -0.4);
	glVertex2f(-0.025, -0.35);
	glVertex2f(0.025, -0.35);
	glVertex2f(0.025, -0.4);
	glEnd();

	glLoadIdentity();
	glTranslatef(0.0f, -0.2f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.025, -0.4);
	glVertex2f(-0.025, -0.35);
	glVertex2f(0.025, -0.35);
	glVertex2f(0.025, -0.4);
	glEnd();

	glLoadIdentity();
	glTranslatef(0.0f, -0.25f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(153, 153, 153);
	glVertex2f(-0.025, -0.4);
	glVertex2f(-0.025, -0.35);
	glVertex2f(0.025, -0.35);
	glVertex2f(0.025, -0.4);
	glEnd();
	glLoadIdentity();*/



	//FOOTPATH
	glBegin(GL_QUADS);
	glColor3ub(144, 144, 144);
	glVertex2f(-1.0, -0.75);
	glVertex2f(-1.0, -0.65);
	glVertex2f(1.0, -0.65);
	glVertex2f(1.0, -0.75);
	glEnd();

    //PEOPLE
    /*people();
    glTranslatef(0.5f, 0.0f, 0.0f);
    people();
    glTranslatef(-0.5f, 0.05f, 0.0f);
    people();
    glTranslatef(-0.52f, 0.0f, 0.0f);
    people();
    glTranslatef(-0.62f, 0.0f, 0.0f);
    people();
    glTranslatef(-0.8f, 0.0f, 0.0f);
    people();
    glTranslatef(-1.0f, 0.05f, 0.0f);
    people();*/
    glTranslatef(peoplePos,-.62,0);
    glScalef(.12,.12,1);
    setColor(88,9,153);
    people();
    glTranslatef(2,0,0);
    setColor(175,99,237);
    people();
    glTranslatef(6,0,0);
    setColor(146,7,9);
    people();

    Origin();

    glTranslatef(peoplePos2,-.62,0);
    glScalef(.12,.12,1);
    setColor(88,9,153);
    people();
    glTranslatef(2,0,0);
    setColor(175,99,237);
    people();
    glTranslatef(6,0,0);
    setColor(146,7,9);
    people();

    Origin();

    glRotatef(180,0,1,0);

    glTranslatef(peoplePos,-.61,0);
    glScalef(.12,.12,1);
    setColor(88,9,153);
    people();
    glTranslatef(2,0,0);
    setColor(175,99,237);
    people();
    glTranslatef(6,0,0);
    setColor(146,7,9);
    people();

    Origin();

    glRotatef(180,0,1,0);
    glTranslatef(peoplePos2,-.61,0);
    glScalef(.12,.12,1);
    setColor(88,9,153);
    people();
    glTranslatef(2,0,0);
    setColor(175,99,237);
    people();
    glTranslatef(6,0,0);
    setColor(146,7,9);
    people();

    Origin();

    //ROAD-FENCH
    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-1.0, -0.66);
	glVertex2f(-1.0, -0.65);
	glVertex2f(-0.2, -0.65);
	glVertex2f(-0.2, -0.66);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-1.0, -0.71);
	glVertex2f(-1.0, -0.70);
	glVertex2f(-0.2, -0.70);
	glVertex2f(-0.2, -0.71);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.95, -0.75);
	glVertex2f(-0.95, -0.65);
	glVertex2f(-0.947, -0.65);
	glVertex2f(-0.947, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.90, -0.75);
	glVertex2f(-0.90, -0.65);
	glVertex2f(-0.897, -0.65);
	glVertex2f(-0.897, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.85, -0.75);
	glVertex2f(-0.85, -0.65);
	glVertex2f(-0.847, -0.65);
	glVertex2f(-0.847, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.80, -0.75);
	glVertex2f(-0.80, -0.65);
	glVertex2f(-0.797, -0.65);
	glVertex2f(-0.797, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.75, -0.75);
	glVertex2f(-0.75, -0.65);
	glVertex2f(-0.747, -0.65);
	glVertex2f(-0.747, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.70, -0.75);
	glVertex2f(-0.70, -0.65);
	glVertex2f(-0.697, -0.65);
	glVertex2f(-0.697, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.65, -0.75);
	glVertex2f(-0.65, -0.65);
	glVertex2f(-0.647, -0.65);
	glVertex2f(-0.647, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.60, -0.75);
	glVertex2f(-0.60, -0.65);
	glVertex2f(-0.597, -0.65);
	glVertex2f(-0.597, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.55, -0.75);
	glVertex2f(-0.55, -0.65);
	glVertex2f(-0.547, -0.65);
	glVertex2f(-0.547, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.50, -0.75);
	glVertex2f(-0.50, -0.65);
	glVertex2f(-0.497, -0.65);
	glVertex2f(-0.497, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.45, -0.75);
	glVertex2f(-0.45, -0.65);
	glVertex2f(-0.447, -0.65);
	glVertex2f(-0.447, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.40, -0.75);
	glVertex2f(-0.40, -0.65);
	glVertex2f(-0.397, -0.65);
	glVertex2f(-0.397, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.35, -0.75);
	glVertex2f(-0.35, -0.65);
	glVertex2f(-0.347, -0.65);
	glVertex2f(-0.347, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.30, -0.75);
	glVertex2f(-0.30, -0.65);
	glVertex2f(-0.297, -0.65);
	glVertex2f(-0.297, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.25, -0.75);
	glVertex2f(-0.25, -0.65);
	glVertex2f(-0.247, -0.65);
	glVertex2f(-0.247, -0.75);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(1.0, -0.66);
	glVertex2f(1.0, -0.65);
	glVertex2f(0.2, -0.65);
	glVertex2f(0.2, -0.66);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(1.0, -0.71);
	glVertex2f(1.0, -0.70);
	glVertex2f(0.2, -0.70);
	glVertex2f(0.2, -0.71);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.95, -0.75);
	glVertex2f(0.95, -0.65);
	glVertex2f(0.947, -0.65);
	glVertex2f(0.947, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.90, -0.75);
	glVertex2f(0.90, -0.65);
	glVertex2f(0.897, -0.65);
	glVertex2f(0.897, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.85, -0.75);
	glVertex2f(0.85, -0.65);
	glVertex2f(0.847, -0.65);
	glVertex2f(0.847, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.80, -0.75);
	glVertex2f(0.80, -0.65);
	glVertex2f(0.797, -0.65);
	glVertex2f(0.797, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.75, -0.75);
	glVertex2f(0.75, -0.65);
	glVertex2f(0.747, -0.65);
	glVertex2f(0.747, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.70, -0.75);
	glVertex2f(0.70, -0.65);
	glVertex2f(0.697, -0.65);
	glVertex2f(0.697, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.65, -0.75);
	glVertex2f(0.65, -0.65);
	glVertex2f(0.647, -0.65);
	glVertex2f(0.647, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.60, -0.75);
	glVertex2f(0.60, -0.65);
	glVertex2f(0.597, -0.65);
	glVertex2f(0.597, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.55, -0.75);
	glVertex2f(0.55, -0.65);
	glVertex2f(0.547, -0.65);
	glVertex2f(0.547, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.50, -0.75);
	glVertex2f(0.50, -0.65);
	glVertex2f(0.497, -0.65);
	glVertex2f(0.497, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.45, -0.75);
	glVertex2f(0.45, -0.65);
	glVertex2f(0.447, -0.65);
	glVertex2f(0.447, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.40, -0.75);
	glVertex2f(0.40, -0.65);
	glVertex2f(0.397, -0.65);
	glVertex2f(0.397, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.35, -0.75);
	glVertex2f(0.35, -0.65);
	glVertex2f(0.347, -0.65);
	glVertex2f(0.347, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.30, -0.75);
	glVertex2f(0.30, -0.65);
	glVertex2f(0.297, -0.65);
	glVertex2f(0.297, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.25, -0.75);
	glVertex2f(0.25, -0.65);
	glVertex2f(0.247, -0.65);
	glVertex2f(0.247, -0.75);
	glEnd();

    //STREET-LIGHT
    streetlight();
    glTranslatef(0.4f, 0.0f, 0.0f);
    streetlight();
    glTranslatef(-0.8f, 0.0f, 0.0f);
    streetlight();
    glTranslatef(1.2f, 0.0f, 0.0f);
    streetlight();
    glTranslatef(-0.4f, 0.0f, 0.0f);
    streetlight();
    glTranslatef(0.8f, 0.0f, 0.0f);
    streetlight();

    //TRAFIC-LIGHT
    traficlight();

	//ROAD
	glBegin(GL_QUADS);
	glColor3ub(33, 33, 33);
	glVertex2f(-1.0, -1.0);
	glVertex2f(-1.0, -0.75);
	glVertex2f(1.0, -0.75);
	glVertex2f(1.0, -1.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(95, 95, 95);
	glVertex2f(-1.0, -0.75);
	glVertex2f(-1.0, -0.77);
	glVertex2f(1.0, -0.77);
	glVertex2f(1.0, -0.75);
	glEnd();


	//ROAD_MIDDLE LINE
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();

	glTranslatef(0.1f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.2f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.3f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.4f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.5f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.6f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.7f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.8f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

    //JEBRA-CROSING1
    glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-0.1, -0.8);
	glVertex2f(-0.1, -0.77);
	glVertex2f(-0.05, -0.77);
	glVertex2f(-0.05, -0.8);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-0.1, -0.85);
	glVertex2f(-0.1, -0.82);
	glVertex2f(-0.05, -0.82);
	glVertex2f(-0.05, -0.85);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-0.1, -0.9);
	glVertex2f(-0.1, -0.87);
	glVertex2f(-0.05, -0.87);
	glVertex2f(-0.05, -0.9);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-0.1, -0.95);
	glVertex2f(-0.1, -0.92);
	glVertex2f(-0.05, -0.92);
	glVertex2f(-0.05, -0.95);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-0.1, -1.0);
	glVertex2f(-0.1, -0.97);
	glVertex2f(-0.05, -0.97);
	glVertex2f(-0.05, -1.0);
	glEnd();


	glTranslatef(0.975f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	//JEBRA-CROSING2
    glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(0.1, -0.8);
	glVertex2f(0.1, -0.77);
	glVertex2f(0.05, -0.77);
	glVertex2f(0.05, -0.8);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(0.1, -0.85);
	glVertex2f(0.1, -0.82);
	glVertex2f(0.05, -0.82);
	glVertex2f(0.05, -0.85);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(0.1, -0.9);
	glVertex2f(0.1, -0.87);
	glVertex2f(0.05, -0.87);
	glVertex2f(0.05, -0.9);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(0.1, -0.95);
	glVertex2f(0.1, -0.92);
	glVertex2f(0.05, -0.92);
	glVertex2f(0.05, -0.95);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(0.1, -1.0);
	glVertex2f(0.1, -0.97);
	glVertex2f(0.05, -0.97);
	glVertex2f(0.05, -1.0);
	glEnd();


	glTranslatef(1.15f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.25f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.35f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.45f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.55f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.65f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.75f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.85f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.95f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();


    glPushMatrix();
    glTranslatef(position1, 0.0f, 0.0f);
    car();
    glPushMatrix();
    glTranslatef(position1, 0.0f, 0.0f);
    car4();
    glPushMatrix();
    glTranslatef(position1, 0.0f, 0.0f);
    bus3();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-position11, 0.0f, 0.0f);
    glTranslatef(-0.18f, 0.03f, 0.0f);
    bus();
    glPushMatrix();
    glTranslatef(-position11, 0.0f, 0.0f);
    bus2();
    glPushMatrix();
    glTranslatef(-position11, 0.0f, 0.0f);
    car2();
    glPushMatrix();
    glTranslatef(-position11, 0.0f, 0.0f);
    car3();
    glPopMatrix();

	//axis();


	glFlush();
}

void night()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


	//BACKGROUND
	glBegin(GL_QUADS);
	glColor3ub(17, 84, 3);
	glVertex2f(-1.0, -0.75);
	glVertex2f(-1.0, 0.275);
	glVertex2f(1.0, 0.275);
	glVertex2f(1.0, -0.75);
	glEnd();

	//SKY
	glBegin(GL_QUADS);
	glColor3ub(0, 33, 115);
	glVertex2f(-1.0, 0.3);
	glVertex2f(-1.0, 1.0);
	glVertex2f(1.0, 1.0);
	glVertex2f(1.0, 0.3);
	glEnd();

	nightstar();
	glTranslatef(-0.1f, 0.1f, 0.0f);
	nightstar();
	glTranslatef(-0.1f, -0.1f, 0.0f);
	nightstar();
	glTranslatef(-0.1f, 0.1f, 0.0f);
	nightstar();
	glTranslatef(-0.1f, -0.1f, 0.0f);
	nightstar();
	glTranslatef(-0.1f, 0.1f, 0.0f);
	nightstar();
	glTranslatef(-0.1f, -0.1f, 0.0f);
	nightstar();
	glTranslatef(-0.1f, 0.1f, 0.0f);
	nightstar();
	glTranslatef(-0.1f, -0.1f, 0.0f);
	nightstar();
	glTranslatef(-0.1f, 0.1f, 0.0f);
	nightstar();
	glTranslatef(-0.1f, -0.1f, 0.0f);
	nightstar();
    glLoadIdentity();
	glTranslatef(-0.1f, -0.1f, 0.0f);
	nightstar();
	glTranslatef(-0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(-0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(-0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(-0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(-0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(-0.2f, 0.0f, 0.0f);
	nightstar();
	glLoadIdentity();
    glTranslatef(0.0f, -0.2f, 0.0f);
	nightstar();
	glLoadIdentity();
	glTranslatef(-0.2f, -0.2f, 0.0f);
	nightstar();
	glTranslatef(-0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(-0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(-0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(-0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(-0.2f, 0.0f, 0.0f);
	nightstar();
	glLoadIdentity();
	glTranslatef(0.0f, -0.4f, 0.0f);
	nightstar();
	glLoadIdentity();
	glTranslatef(-0.2f, -0.4f, 0.0f);
	nightstar();
	glTranslatef(-0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(-0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(-0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(-0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(-0.2f, 0.0f, 0.0f);
	nightstar();
	glLoadIdentity();
	glTranslatef(0.1f, 0.1f, 0.0f);
	nightstar();
	glTranslatef(0.1f, -0.1f, 0.0f);
	nightstar();
	glTranslatef(0.1f, 0.1f, 0.0f);
	nightstar();
	glTranslatef(0.1f, -0.1f, 0.0f);
	nightstar();
	glTranslatef(0.1f, 0.1f, 0.0f);
	nightstar();
	glTranslatef(0.1f, -0.1f, 0.0f);
	nightstar();
	glTranslatef(0.1f, 0.1f, 0.0f);
	nightstar();
	glTranslatef(0.1f, -0.1f, 0.0f);
	nightstar();
	glTranslatef(0.1f, 0.1f, 0.0f);
	nightstar();
	glTranslatef(0.1f, -0.1f, 0.0f);
	nightstar();
    glLoadIdentity();
	glTranslatef(0.1f, -0.1f, 0.0f);
	nightstar();
	glTranslatef(0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(0.2f, 0.0f, 0.0f);
	nightstar();
	glLoadIdentity();

    glTranslatef(0.0f, -0.2f, 0.0f);
	nightstar();
	glLoadIdentity();
	glTranslatef(0.2f, -0.2f, 0.0f);
	nightstar();
	glTranslatef(0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(0.2f, 0.0f, 0.0f);
	nightstar();

	glLoadIdentity();

	glTranslatef(0.0f, -0.4f, 0.0f);
	nightstar();
	glLoadIdentity();

	glTranslatef(0.2f, -0.4f, 0.0f);
	nightstar();
	glTranslatef(0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(0.2f, 0.0f, 0.0f);
	nightstar();
	glTranslatef(0.2f, 0.0f, 0.0f);
	nightstar();

	glLoadIdentity();





	//DIGANTO
	glBegin(GL_QUADS);
	glColor3ub(0, 125, 17);
	glVertex2f(-1.0, 0.275);
	glVertex2f(-1.0, 0.325);
	glVertex2f(1.0,0.325);
	glVertex2f(1.0, 0.275);
	glEnd();

	FilledCircle(0.0f, 0.3f, .05, 100);
	FilledCircle(0.05f, 0.32f, .06, 100);
	FilledCircle(0.1f, 0.3f, .06, 100);
	FilledCircle(0.19f, 0.33f, .06, 100);
	FilledCircle(0.25f, 0.31f, .06, 100);
	FilledCircle(0.32f, 0.31f, .04, 100);
	FilledCircle(0.39f, 0.31f, .06, 100);
	FilledCircle(0.46f, 0.32f, .07, 100);
	FilledCircle(0.55f, 0.3f, .07, 100);
	FilledCircle(0.63f, 0.3f, .04, 100);
	FilledCircle(0.70f, 0.3f, .06, 100);
	FilledCircle(0.75f, 0.322f, .06, 100);
	FilledCircle(0.82f, 0.322f, .04, 100);
	FilledCircle(0.9f, 0.322f, .05, 100);
	FilledCircle(0.95f, 0.3f, .05, 100);
	FilledCircle(1.02f, 0.34f, .05, 100);

	FilledCircle(0.0f, 0.3f, .05, 100);
	FilledCircle(-0.05f, 0.32f, .06, 100);
	FilledCircle(-0.1f, 0.3f, .06, 100);
	FilledCircle(-0.19f, 0.33f, .06, 100);
	FilledCircle(-0.25f, 0.31f, .06, 100);
	FilledCircle(-0.32f, 0.31f, .04, 100);
	FilledCircle(-0.39f, 0.31f, .06, 100);
	FilledCircle(-0.46f, 0.32f, .07, 100);
	FilledCircle(-0.55f, 0.3f, .07, 100);
	FilledCircle(-0.63f, 0.3f, .04, 100);
	FilledCircle(-0.70f, 0.3f, .06, 100);
	FilledCircle(-0.75f, 0.322f, .06, 100);
	FilledCircle(-0.82f, 0.322f, .04, 100);
	FilledCircle(-0.9f, 0.322f, .05, 100);
	FilledCircle(-0.95f, 0.3f, .05, 100);
	FilledCircle(-1.02f, 0.34f, .05, 100);

    glBegin(GL_QUADS);
	glColor3ub(17, 84, 3);
	glVertex2f(-1.0, 0.275);
	glVertex2f(-1.0, 0.2);
	glVertex2f(1.0, 0.2);
	glVertex2f(1.0, 0.275);
	glEnd();

	//BACK-TREE
	glTranslatef(-0.95f, 0.0f, 0.0f);
	bigtree();
	glTranslatef(-0.8f, -0.05f, 0.0f);
	glScalef(0.6, 0.75, 0);
	bigtree2();
	glTranslatef(-0.88f, -0.25f, 0.0f);
	smalltree();

	glTranslatef(0.95f, 0.0f, 0.0f);
	bigtree();
	glTranslatef(0.8f, -0.05f, 0.0f);
	glScalef(0.6, 0.75, 0);
	bigtree2();
	glTranslatef(0.88f, -0.25f, 0.0f);
	smalltree();



    //MOON
	glColor3ub(245, 197, 66);
	FilledCircle(0.7f, 0.8f, .1, 100);
	glColor3ub(0, 33, 115);
	FilledCircle(0.65f, 0.8f, .1, 100);


    /*/CLOUDS
	glPushMatrix();
    glTranslatef(position2, 0.0f, 0.0f);
	cloud();
	cloud2();
	glTranslatef(-0.8f, 0.2f, 0.0f);
	cloud2();
	glTranslatef(-0.5f, 0.1f, 0.0f);
	cloud();
	glTranslatef(0.5f, -0.1f, 0.0f);
	cloud();
	glTranslatef(-0.5f, -0.1f, 0.0f);
	cloud2();
	glTranslatef(-0.3f, -0.1f, 0.0f);
	cloud2();
	glTranslatef(-0.3f, -0.1f, 0.0f);
	cloud();
    glPopMatrix();
    */

    //RED-Circle_Behind_The_STOMBHO_MIDDILE
	glColor3ub(204, 0, 0);
	FilledCircle(0.0f, 0.13f, .25, 100);

	//PLANE
	//plane();

    //STOMBHO-MIDDLE

    //SHIRI
	glBegin(GL_QUADS);
	glColor3ub(169, 93, 109);
	glVertex2f(-0.75, -0.35);
	glVertex2f(-0.675, -0.15);
	glVertex2f(0.675,-0.15);
	glVertex2f(0.75, -0.35);
	glEnd();
	//BLACK-LINE
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.1, 0.45);
	glVertex2f(-0.1, 0.445);
    glVertex2f(0.1, 0.445);
	glVertex2f(0.1, 0.45);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.105, -0.30);
	glVertex2f(-0.105, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.11, -0.30);
	glVertex2f(-0.11, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.115, -0.30);
	glVertex2f(-0.115, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.12, -0.30);
	glVertex2f(-0.12, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.125, -0.30);
	glVertex2f(-0.125, 0.65);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.105, -0.30);
	glVertex2f(0.105, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.11, -0.30);
	glVertex2f(0.11, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.115, -0.30);
	glVertex2f(0.115, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.12, -0.30);
	glVertex2f(0.12, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.125, -0.30);
	glVertex2f(0.125, 0.65);
	glEnd();

	glTranslatef(0.0f, 0.05f, 0.0f);

    glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.15, -0.35);
	glVertex2f(-0.15, -0.30);
	glVertex2f(0.15, -0.30);
	glVertex2f(0.15, -0.35);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.15, -0.30);
	glVertex2f(-0.15, 0.40);
	glVertex2f(-0.1, 0.40);
	glVertex2f(-0.1, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(0.15, -0.30);
	glVertex2f(0.15, 0.40);
	glVertex2f(0.1, 0.40);
	glVertex2f(0.1, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.025, -0.30);
	glVertex2f(-0.025, 0.40);
	glVertex2f(0.025, 0.40);
	glVertex2f(0.025, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.15, 0.40);
	glVertex2f(-0.16, 0.60);
	glVertex2f(-0.13, 0.60);
	glVertex2f(-0.10, 0.40);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(0.15, 0.40);
	glVertex2f(0.16, 0.60);
	glVertex2f(0.13, 0.60);
	glVertex2f(0.10, 0.40);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.025, 0.40);
	glVertex2f(-0.018, 0.60);
	glVertex2f(0.018, 0.60);
	glVertex2f(0.025, 0.40);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.16, 0.60);
	glVertex2f(-0.16, 0.65);
    glVertex2f(0.16, 0.65);
	glVertex2f(0.16, 0.60);
	glEnd();

    //BLACK-LINE

	//middle
	//glBegin(GL_LINES);
	//glColor3ub(0, 0, 0);
	//glVertex2f(0.0, -0.30);
	//glVertex2f(0.0, 0.60);
	//glEnd();

	/////////
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.1, -0.30);
	glVertex2f(-0.1, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.095, -0.30);
	glVertex2f(-0.095, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.09, -0.30);
	glVertex2f(-0.09, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.085, -0.30);
	glVertex2f(-0.085, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.08, -0.30);
	glVertex2f(-0.08, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.075, -0.30);
	glVertex2f(-0.075, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.07, -0.30);
	glVertex2f(-0.07, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.065, -0.30);
	glVertex2f(-0.065, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.06, -0.30);
	glVertex2f(-0.06, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.055, -0.30);
	glVertex2f(-0.055, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.05, -0.30);
	glVertex2f(-0.05, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.045, -0.30);
	glVertex2f(-0.045, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.04, -0.30);
	glVertex2f(-0.04, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.035, -0.30);
	glVertex2f(-0.035, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.03, -0.30);
	glVertex2f(-0.03, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.025, -0.30);
	glVertex2f(-0.025, 0.60);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.1, -0.30);
	glVertex2f(0.1, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.095, -0.30);
	glVertex2f(0.095, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.09, -0.30);
	glVertex2f(0.09, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.085, -0.30);
	glVertex2f(0.085, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.08, -0.30);
	glVertex2f(0.08, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.075, -0.30);
	glVertex2f(0.075, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.07, -0.30);
	glVertex2f(0.07, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.065, -0.30);
	glVertex2f(0.065, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.06, -0.30);
	glVertex2f(0.06, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.055, -0.30);
	glVertex2f(0.055, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.05, -0.30);
	glVertex2f(0.05, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.045, -0.30);
	glVertex2f(0.045, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.04, -0.30);
	glVertex2f(0.04, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.035, -0.30);
	glVertex2f(0.035, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.03, -0.30);
	glVertex2f(0.03, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.025, -0.30);
	glVertex2f(0.025, 0.60);
	glEnd();



	glLoadIdentity();

	//STOMBHO-MIDDLE-LEFT
	glTranslatef(0.0f, 0.05f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.35);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.325, -0.30);
	glVertex2f(-0.325, -0.35);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.475, 0.40);
	glVertex2f(-0.450, 0.40);
	glVertex2f(-0.450, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.35, -0.30);
	glVertex2f(-0.35, 0.40);
	glVertex2f(-0.325, 0.40);
	glVertex2f(-0.325, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, 0.40);
	glVertex2f(-0.475, 0.45);
	glVertex2f(-0.325, 0.45);
	glVertex2f(-0.325, 0.40);
	glEnd();

	//BLACK-LINE
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.35, -0.3);
	glVertex2f(-0.35, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.355, -0.3);
	glVertex2f(-0.355, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.36, -0.3);
	glVertex2f(-0.36, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.365, -0.3);
	glVertex2f(-0.365, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.37, -0.3);
	glVertex2f(-0.37, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.375, -0.3);
	glVertex2f(-0.375, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.38, -0.3);
	glVertex2f(-0.38, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.385, -0.3);
	glVertex2f(-0.385, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.39, -0.3);
	glVertex2f(-0.39, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.395, -0.3);
	glVertex2f(-0.395, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.4, -0.3);
	glVertex2f(-0.4, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.405, -0.3);
	glVertex2f(-0.405, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.41, -0.3);
	glVertex2f(-0.41, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.415, -0.3);
	glVertex2f(-0.415, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.42, -0.3);
	glVertex2f(-0.42, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.425, -0.3);
	glVertex2f(-0.425, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.43, -0.3);
	glVertex2f(-0.43, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.435, -0.3);
	glVertex2f(-0.435, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.44, -0.3);
	glVertex2f(-0.44, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.445, -0.3);
	glVertex2f(-0.445, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.45, -0.3);
	glVertex2f(-0.45, 0.4);
	glEnd();

	glLoadIdentity();

	//STOMBHO-MIDDLE-RIGHT
	glTranslatef(0.8f, 0.05f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.35);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.325, -0.30);
	glVertex2f(-0.325, -0.35);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.475, 0.40);
	glVertex2f(-0.450, 0.40);
	glVertex2f(-0.450, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.35, -0.30);
	glVertex2f(-0.35, 0.40);
	glVertex2f(-0.325, 0.40);
	glVertex2f(-0.325, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, 0.40);
	glVertex2f(-0.475, 0.45);
	glVertex2f(-0.325, 0.45);
	glVertex2f(-0.325, 0.40);
	glEnd();

	//BLACK-LINE
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.35, -0.3);
	glVertex2f(-0.35, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.355, -0.3);
	glVertex2f(-0.355, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.36, -0.3);
	glVertex2f(-0.36, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.365, -0.3);
	glVertex2f(-0.365, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.37, -0.3);
	glVertex2f(-0.37, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.375, -0.3);
	glVertex2f(-0.375, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.38, -0.3);
	glVertex2f(-0.38, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.385, -0.3);
	glVertex2f(-0.385, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.39, -0.3);
	glVertex2f(-0.39, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.395, -0.3);
	glVertex2f(-0.395, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.4, -0.3);
	glVertex2f(-0.4, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.405, -0.3);
	glVertex2f(-0.405, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.41, -0.3);
	glVertex2f(-0.41, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.415, -0.3);
	glVertex2f(-0.415, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.42, -0.3);
	glVertex2f(-0.42, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.425, -0.3);
	glVertex2f(-0.425, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.43, -0.3);
	glVertex2f(-0.43, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.435, -0.3);
	glVertex2f(-0.435, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.44, -0.3);
	glVertex2f(-0.44, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.445, -0.3);
	glVertex2f(-0.445, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.45, -0.3);
	glVertex2f(-0.45, 0.4);
	glEnd();


	glLoadIdentity();

	//STOMBHO-MIDDLE-RIGHT- RIGHT
	glTranslatef(1.05f, 0.05f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.35);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.325, -0.30);
	glVertex2f(-0.325, -0.35);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.475, 0.20);
	glVertex2f(-0.450, 0.20);
	glVertex2f(-0.450, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.35, -0.30);
	glVertex2f(-0.35, 0.20);
	glVertex2f(-0.325, 0.20);
	glVertex2f(-0.325, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, 0.20);
	glVertex2f(-0.475, 0.25);
	glVertex2f(-0.325, 0.25);
	glVertex2f(-0.325, 0.20);
	glEnd();

	//BLACK-LINE
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.35, -0.3);
	glVertex2f(-0.35, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.355, -0.3);
	glVertex2f(-0.355, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.36, -0.3);
	glVertex2f(-0.36, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.365, -0.3);
	glVertex2f(-0.365, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.37, -0.3);
	glVertex2f(-0.37, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.375, -0.3);
	glVertex2f(-0.375, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.38, -0.3);
	glVertex2f(-0.38, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.385, -0.3);
	glVertex2f(-0.385, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.39, -0.3);
	glVertex2f(-0.39, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.395, -0.3);
	glVertex2f(-0.395, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.4, -0.3);
	glVertex2f(-0.4, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.405, -0.3);
	glVertex2f(-0.405, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.41, -0.3);
	glVertex2f(-0.41, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.415, -0.3);
	glVertex2f(-0.415, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.42, -0.3);
	glVertex2f(-0.42, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.425, -0.3);
	glVertex2f(-0.425, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.43, -0.3);
	glVertex2f(-0.43, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.435, -0.3);
	glVertex2f(-0.435, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.44, -0.3);
	glVertex2f(-0.44, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.445, -0.3);
	glVertex2f(-0.445, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.45, -0.3);
	glVertex2f(-0.45, 0.2);
	glEnd();

	glLoadIdentity();

	//STOMBHO-MIDDLE-LEFT-LEFT
	glTranslatef(-0.25f, 0.05f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.35);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.325, -0.30);
	glVertex2f(-0.325, -0.35);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.475, 0.20);
	glVertex2f(-0.450, 0.20);
	glVertex2f(-0.450, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.35, -0.30);
	glVertex2f(-0.35, 0.20);
	glVertex2f(-0.325, 0.20);
	glVertex2f(-0.325, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, 0.20);
	glVertex2f(-0.475, 0.25);
	glVertex2f(-0.325, 0.25);
	glVertex2f(-0.325, 0.20);
	glEnd();

    //BLACK-LINE
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.35, -0.3);
	glVertex2f(-0.35, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.355, -0.3);
	glVertex2f(-0.355, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.36, -0.3);
	glVertex2f(-0.36, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.365, -0.3);
	glVertex2f(-0.365, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.37, -0.3);
	glVertex2f(-0.37, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.375, -0.3);
	glVertex2f(-0.375, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.38, -0.3);
	glVertex2f(-0.38, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.385, -0.3);
	glVertex2f(-0.385, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.39, -0.3);
	glVertex2f(-0.39, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.395, -0.3);
	glVertex2f(-0.395, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.4, -0.3);
	glVertex2f(-0.4, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.405, -0.3);
	glVertex2f(-0.405, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.41, -0.3);
	glVertex2f(-0.41, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.415, -0.3);
	glVertex2f(-0.415, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.42, -0.3);
	glVertex2f(-0.42, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.425, -0.3);
	glVertex2f(-0.425, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.43, -0.3);
	glVertex2f(-0.43, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.435, -0.3);
	glVertex2f(-0.435, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.44, -0.3);
	glVertex2f(-0.44, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.445, -0.3);
	glVertex2f(-0.445, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.45, -0.3);
	glVertex2f(-0.45, 0.2);
	glEnd();

	glLoadIdentity();

	//SHIRI
	glBegin(GL_QUADS);
	glColor3ub(110, 32, 32);
	glVertex2f(-0.75, -0.40);
	glVertex2f(-0.75, -0.35);
	glVertex2f(0.75, -0.35);
	glVertex2f(0.75, -0.40);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(169, 93, 109);
	glVertex2f(-0.8, -0.45);
	glVertex2f(-0.750, -0.40);
	glVertex2f(0.750, -0.40);
	glVertex2f(0.8, -0.45);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(110, 32, 32);
	glVertex2f(-0.80, -0.50);
	glVertex2f(-0.80, -0.45);
	glVertex2f(0.80, -0.45);
	glVertex2f(0.80, -0.50);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(169, 93, 109);
	glVertex2f(-0.85, -0.55);
	glVertex2f(-0.8, -0.50);
	glVertex2f(0.8, -0.50);
	glVertex2f(0.85, -0.55);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(110, 32, 32);
	glVertex2f(-0.85, -0.60);
	glVertex2f(-0.85, -0.55);
	glVertex2f(0.85, -0.55);
	glVertex2f(0.85, -0.60);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(169, 93, 109);
	glVertex2f(-0.9, -0.65);
	glVertex2f(-0.85, -0.60);
	glVertex2f(0.85, -0.60);
	glVertex2f(0.9, -0.65);
	glEnd();

	/*
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.025, -0.4);
	glVertex2f(-0.025, -0.35);
	glVertex2f(0.025, -0.35);
	glVertex2f(0.025, -0.4);
	glEnd();

	glTranslatef(0.0f, -0.05f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(153, 153, 153);
	glVertex2f(-0.025, -0.4);
	glVertex2f(-0.025, -0.35);
	glVertex2f(0.025, -0.35);
	glVertex2f(0.025, -0.4);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.0f, -0.1f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.025, -0.4);
	glVertex2f(-0.025, -0.35);
	glVertex2f(0.025, -0.35);
	glVertex2f(0.025, -0.4);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.0f, -0.15f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(153, 153, 153);
	glVertex2f(-0.025, -0.4);
	glVertex2f(-0.025, -0.35);
	glVertex2f(0.025, -0.35);
	glVertex2f(0.025, -0.4);
	glEnd();

	glLoadIdentity();
	glTranslatef(0.0f, -0.2f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.025, -0.4);
	glVertex2f(-0.025, -0.35);
	glVertex2f(0.025, -0.35);
	glVertex2f(0.025, -0.4);
	glEnd();

	glLoadIdentity();
	glTranslatef(0.0f, -0.25f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(153, 153, 153);
	glVertex2f(-0.025, -0.4);
	glVertex2f(-0.025, -0.35);
	glVertex2f(0.025, -0.35);
	glVertex2f(0.025, -0.4);
	glEnd();
	glLoadIdentity();*/



	//FOOTPATH
	glBegin(GL_QUADS);
	glColor3ub(102, 102, 102);
	glVertex2f(-1.0, -0.75);
	glVertex2f(-1.0, -0.65);
	glVertex2f(1.0, -0.65);
	glVertex2f(1.0, -0.75);
	glEnd();

    /*/PEOPLE
    glTranslatef(peoplePos,-.62,0);
    glScalef(.12,.12,1);
    setColor(88,9,153);
    people();
    glTranslatef(2,0,0);
    setColor(175,99,237);
    people();
    glTranslatef(6,0,0);
    setColor(146,7,9);
    people();
    Origin();
    glTranslatef(peoplePos2,-.62,0);
    glScalef(.12,.12,1);
    setColor(88,9,153);
    people();
    glTranslatef(2,0,0);
    setColor(175,99,237);
    people();
    glTranslatef(6,0,0);
    setColor(146,7,9);
    people();
    Origin();
    glRotatef(180,0,1,0);
    glTranslatef(peoplePos,-.61,0);
    glScalef(.12,.12,1);
    setColor(88,9,153);
    people();
    glTranslatef(2,0,0);
    setColor(175,99,237);
    people();
    glTranslatef(6,0,0);
    setColor(146,7,9);
    people();
    Origin();
    glRotatef(180,0,1,0);
    glTranslatef(peoplePos2,-.61,0);
    glScalef(.12,.12,1);
    setColor(88,9,153);
    people();
    glTranslatef(2,0,0);
    setColor(175,99,237);
    people();
    glTranslatef(6,0,0);
    setColor(146,7,9);
    people();
    Origin();
    */

    //ROAD-FENCH
    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-1.0, -0.66);
	glVertex2f(-1.0, -0.65);
	glVertex2f(-0.2, -0.65);
	glVertex2f(-0.2, -0.66);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-1.0, -0.71);
	glVertex2f(-1.0, -0.70);
	glVertex2f(-0.2, -0.70);
	glVertex2f(-0.2, -0.71);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.95, -0.75);
	glVertex2f(-0.95, -0.65);
	glVertex2f(-0.947, -0.65);
	glVertex2f(-0.947, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.90, -0.75);
	glVertex2f(-0.90, -0.65);
	glVertex2f(-0.897, -0.65);
	glVertex2f(-0.897, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.85, -0.75);
	glVertex2f(-0.85, -0.65);
	glVertex2f(-0.847, -0.65);
	glVertex2f(-0.847, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.80, -0.75);
	glVertex2f(-0.80, -0.65);
	glVertex2f(-0.797, -0.65);
	glVertex2f(-0.797, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.75, -0.75);
	glVertex2f(-0.75, -0.65);
	glVertex2f(-0.747, -0.65);
	glVertex2f(-0.747, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.70, -0.75);
	glVertex2f(-0.70, -0.65);
	glVertex2f(-0.697, -0.65);
	glVertex2f(-0.697, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.65, -0.75);
	glVertex2f(-0.65, -0.65);
	glVertex2f(-0.647, -0.65);
	glVertex2f(-0.647, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.60, -0.75);
	glVertex2f(-0.60, -0.65);
	glVertex2f(-0.597, -0.65);
	glVertex2f(-0.597, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.55, -0.75);
	glVertex2f(-0.55, -0.65);
	glVertex2f(-0.547, -0.65);
	glVertex2f(-0.547, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.50, -0.75);
	glVertex2f(-0.50, -0.65);
	glVertex2f(-0.497, -0.65);
	glVertex2f(-0.497, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.45, -0.75);
	glVertex2f(-0.45, -0.65);
	glVertex2f(-0.447, -0.65);
	glVertex2f(-0.447, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.40, -0.75);
	glVertex2f(-0.40, -0.65);
	glVertex2f(-0.397, -0.65);
	glVertex2f(-0.397, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.35, -0.75);
	glVertex2f(-0.35, -0.65);
	glVertex2f(-0.347, -0.65);
	glVertex2f(-0.347, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.30, -0.75);
	glVertex2f(-0.30, -0.65);
	glVertex2f(-0.297, -0.65);
	glVertex2f(-0.297, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.25, -0.75);
	glVertex2f(-0.25, -0.65);
	glVertex2f(-0.247, -0.65);
	glVertex2f(-0.247, -0.75);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(1.0, -0.66);
	glVertex2f(1.0, -0.65);
	glVertex2f(0.2, -0.65);
	glVertex2f(0.2, -0.66);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(1.0, -0.71);
	glVertex2f(1.0, -0.70);
	glVertex2f(0.2, -0.70);
	glVertex2f(0.2, -0.71);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.95, -0.75);
	glVertex2f(0.95, -0.65);
	glVertex2f(0.947, -0.65);
	glVertex2f(0.947, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.90, -0.75);
	glVertex2f(0.90, -0.65);
	glVertex2f(0.897, -0.65);
	glVertex2f(0.897, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.85, -0.75);
	glVertex2f(0.85, -0.65);
	glVertex2f(0.847, -0.65);
	glVertex2f(0.847, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.80, -0.75);
	glVertex2f(0.80, -0.65);
	glVertex2f(0.797, -0.65);
	glVertex2f(0.797, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.75, -0.75);
	glVertex2f(0.75, -0.65);
	glVertex2f(0.747, -0.65);
	glVertex2f(0.747, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.70, -0.75);
	glVertex2f(0.70, -0.65);
	glVertex2f(0.697, -0.65);
	glVertex2f(0.697, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.65, -0.75);
	glVertex2f(0.65, -0.65);
	glVertex2f(0.647, -0.65);
	glVertex2f(0.647, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.60, -0.75);
	glVertex2f(0.60, -0.65);
	glVertex2f(0.597, -0.65);
	glVertex2f(0.597, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.55, -0.75);
	glVertex2f(0.55, -0.65);
	glVertex2f(0.547, -0.65);
	glVertex2f(0.547, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.50, -0.75);
	glVertex2f(0.50, -0.65);
	glVertex2f(0.497, -0.65);
	glVertex2f(0.497, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.45, -0.75);
	glVertex2f(0.45, -0.65);
	glVertex2f(0.447, -0.65);
	glVertex2f(0.447, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.40, -0.75);
	glVertex2f(0.40, -0.65);
	glVertex2f(0.397, -0.65);
	glVertex2f(0.397, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.35, -0.75);
	glVertex2f(0.35, -0.65);
	glVertex2f(0.347, -0.65);
	glVertex2f(0.347, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.30, -0.75);
	glVertex2f(0.30, -0.65);
	glVertex2f(0.297, -0.65);
	glVertex2f(0.297, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.25, -0.75);
	glVertex2f(0.25, -0.65);
	glVertex2f(0.247, -0.65);
	glVertex2f(0.247, -0.75);
	glEnd();

    //STREET-LIGHT
    streetlightnight();
    glTranslatef(0.4f, 0.0f, 0.0f);
    streetlightnight();
    glTranslatef(-0.8f, 0.0f, 0.0f);
    streetlightnight();
    glTranslatef(1.2f, 0.0f, 0.0f);
    streetlightnight();
    glTranslatef(-0.4f, 0.0f, 0.0f);
    streetlightnight();
    glTranslatef(0.8f, 0.0f, 0.0f);
    streetlightnight();

    //TRAFIC-LIGHT
    traficlight();

	//ROAD
	glBegin(GL_QUADS);
	glColor3ub(33, 33, 33);
	glVertex2f(-1.0, -1.0);
	glVertex2f(-1.0, -0.75);
	glVertex2f(1.0, -0.75);
	glVertex2f(1.0, -1.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(95, 95, 95);
	glVertex2f(-1.0, -0.75);
	glVertex2f(-1.0, -0.77);
	glVertex2f(1.0, -0.77);
	glVertex2f(1.0, -0.75);
	glEnd();


	//ROAD_MIDDLE LINE
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();

	glTranslatef(0.1f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.2f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.3f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.4f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.5f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.6f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.7f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.8f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

    //JEBRA-CROSING1
    glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-0.1, -0.8);
	glVertex2f(-0.1, -0.77);
	glVertex2f(-0.05, -0.77);
	glVertex2f(-0.05, -0.8);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-0.1, -0.85);
	glVertex2f(-0.1, -0.82);
	glVertex2f(-0.05, -0.82);
	glVertex2f(-0.05, -0.85);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-0.1, -0.9);
	glVertex2f(-0.1, -0.87);
	glVertex2f(-0.05, -0.87);
	glVertex2f(-0.05, -0.9);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-0.1, -0.95);
	glVertex2f(-0.1, -0.92);
	glVertex2f(-0.05, -0.92);
	glVertex2f(-0.05, -0.95);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-0.1, -1.0);
	glVertex2f(-0.1, -0.97);
	glVertex2f(-0.05, -0.97);
	glVertex2f(-0.05, -1.0);
	glEnd();


	glTranslatef(0.975f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	//JEBRA-CROSING2
    glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(0.1, -0.8);
	glVertex2f(0.1, -0.77);
	glVertex2f(0.05, -0.77);
	glVertex2f(0.05, -0.8);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(0.1, -0.85);
	glVertex2f(0.1, -0.82);
	glVertex2f(0.05, -0.82);
	glVertex2f(0.05, -0.85);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(0.1, -0.9);
	glVertex2f(0.1, -0.87);
	glVertex2f(0.05, -0.87);
	glVertex2f(0.05, -0.9);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(0.1, -0.95);
	glVertex2f(0.1, -0.92);
	glVertex2f(0.05, -0.92);
	glVertex2f(0.05, -0.95);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(0.1, -1.0);
	glVertex2f(0.1, -0.97);
	glVertex2f(0.05, -0.97);
	glVertex2f(0.05, -1.0);
	glEnd();


	glTranslatef(1.15f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.25f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.35f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.45f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.55f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.65f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.75f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.85f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.95f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();


    glTranslatef(-0.18f, 0.15f, 0.0f);
    bus();

    glTranslatef(-0.1f, 0.12f, 0.0f);
    bus2();

    glTranslatef(-0.5f, 0.12f, 0.0f);
    car2();




	//axis();


	glFlush();
}

void rainy()
{
    	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


	//BACKGROUND
	glBegin(GL_QUADS);
	glColor3ub(0, 99, 15);
	glVertex2f(-1.0, -1.0);
	glVertex2f(-1.0, 1.0);
	glVertex2f(1.0, 1.0);
	glVertex2f(1.0, -1.0);
	glEnd();

	//SKY
	glBegin(GL_QUADS);
	glColor3ub(184, 184, 184);
	glVertex2f(-1.0, 0.3);
	glVertex2f(-1.0, 1.0);
	glVertex2f(1.0, 1.0);
	glVertex2f(1.0, 0.3);
	glEnd();

	//DIGANTO
	glBegin(GL_QUADS);
	glColor3ub(49, 163, 0);
	glVertex2f(-1.0, 0.275);
	glVertex2f(-1.0, 0.325);
	glVertex2f(1.0,0.325);
	glVertex2f(1.0, 0.275);
	glEnd();

	FilledCircle(0.0f, 0.3f, .05, 100);
	FilledCircle(0.05f, 0.32f, .06, 100);
	FilledCircle(0.1f, 0.3f, .06, 100);
	FilledCircle(0.19f, 0.33f, .06, 100);
	FilledCircle(0.25f, 0.31f, .06, 100);
	FilledCircle(0.32f, 0.31f, .04, 100);
	FilledCircle(0.39f, 0.31f, .06, 100);
	FilledCircle(0.46f, 0.32f, .07, 100);
	FilledCircle(0.55f, 0.3f, .07, 100);
	FilledCircle(0.63f, 0.3f, .04, 100);
	FilledCircle(0.70f, 0.3f, .06, 100);
	FilledCircle(0.75f, 0.322f, .06, 100);
	FilledCircle(0.82f, 0.322f, .04, 100);
	FilledCircle(0.9f, 0.322f, .05, 100);
	FilledCircle(0.95f, 0.3f, .05, 100);
	FilledCircle(1.02f, 0.34f, .05, 100);

	FilledCircle(0.0f, 0.3f, .05, 100);
	FilledCircle(-0.05f, 0.32f, .06, 100);
	FilledCircle(-0.1f, 0.3f, .06, 100);
	FilledCircle(-0.19f, 0.33f, .06, 100);
	FilledCircle(-0.25f, 0.31f, .06, 100);
	FilledCircle(-0.32f, 0.31f, .04, 100);
	FilledCircle(-0.39f, 0.31f, .06, 100);
	FilledCircle(-0.46f, 0.32f, .07, 100);
	FilledCircle(-0.55f, 0.3f, .07, 100);
	FilledCircle(-0.63f, 0.3f, .04, 100);
	FilledCircle(-0.70f, 0.3f, .06, 100);
	FilledCircle(-0.75f, 0.322f, .06, 100);
	FilledCircle(-0.82f, 0.322f, .04, 100);
	FilledCircle(-0.9f, 0.322f, .05, 100);
	FilledCircle(-0.95f, 0.3f, .05, 100);
	FilledCircle(-1.02f, 0.34f, .05, 100);

    glBegin(GL_QUADS);
	glColor3ub(0, 99, 15);
	glVertex2f(-1.0, 0.275);
	glVertex2f(-1.0, 0.2);
	glVertex2f(1.0, 0.2);
	glVertex2f(1.0, 0.275);
	glEnd();

	//BACK-TREE
	glTranslatef(-0.95f, 0.0f, 0.0f);
	bigtree();
	glTranslatef(-0.8f, -0.05f, 0.0f);
	glScalef(0.6, 0.75, 0);
	bigtree2();
	glTranslatef(-0.88f, -0.25f, 0.0f);
	smalltree();

	glTranslatef(0.95f, 0.0f, 0.0f);
	bigtree();
	glTranslatef(0.8f, -0.05f, 0.0f);
	glScalef(0.6, 0.75, 0);
	bigtree2();
	glTranslatef(0.88f, -0.25f, 0.0f);
	smalltree();



    //SUN
	glColor3ub(255, 102, 0);
	FilledCircle(0.7f, 0.7f, .1, 100);


    //CLOUDS
	glPushMatrix();
    glTranslatef(position2, 0.0f, 0.0f);
	cloudAsh();
	cloudAsh2();
	glTranslatef(-0.8f, 0.2f, 0.0f);
	cloudAsh2();
	glTranslatef(-0.5f, 0.1f, 0.0f);
	cloudAsh();
	glTranslatef(0.5f, -0.1f, 0.0f);
	cloudAsh();
	glTranslatef(-0.5f, -0.1f, 0.0f);
	cloudAsh2();
	glTranslatef(-0.3f, -0.1f, 0.0f);
	cloudAsh2();
	glTranslatef(-0.3f, -0.1f, 0.0f);
	cloudAsh2();
	glTranslatef(-0.3f, -0.1f, 0.0f);
	cloudAsh2();
	glTranslatef(-0.3f, -0.1f, 0.0f);
	cloudAsh();
	glLoadIdentity();
    glPopMatrix();

    glTranslatef(0.2f, 0.0f, 0.0f);
    cloudAsh2();
    glLoadIdentity();

    //RED-Circle_Behind_The_STOMBHO_MIDDILE
	glColor3ub(204, 0, 0);
	FilledCircle(0.0f, 0.13f, .25, 100);

	//PLANE
	//plane();

    //STOMBHO-MIDDLE

    //SHIRI
	glBegin(GL_QUADS);
	glColor3ub(169, 93, 109);
	glVertex2f(-0.75, -0.35);
	glVertex2f(-0.675, -0.15);
	glVertex2f(0.675,-0.15);
	glVertex2f(0.75, -0.35);
	glEnd();
	//BLACK-LINE
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.1, 0.45);
	glVertex2f(-0.1, 0.445);
    glVertex2f(0.1, 0.445);
	glVertex2f(0.1, 0.45);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.105, -0.30);
	glVertex2f(-0.105, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.11, -0.30);
	glVertex2f(-0.11, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.115, -0.30);
	glVertex2f(-0.115, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.12, -0.30);
	glVertex2f(-0.12, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.125, -0.30);
	glVertex2f(-0.125, 0.65);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.105, -0.30);
	glVertex2f(0.105, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.11, -0.30);
	glVertex2f(0.11, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.115, -0.30);
	glVertex2f(0.115, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.12, -0.30);
	glVertex2f(0.12, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.125, -0.30);
	glVertex2f(0.125, 0.65);
	glEnd();

	glTranslatef(0.0f, 0.05f, 0.0f);

    glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.15, -0.35);
	glVertex2f(-0.15, -0.30);
	glVertex2f(0.15, -0.30);
	glVertex2f(0.15, -0.35);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.15, -0.30);
	glVertex2f(-0.15, 0.40);
	glVertex2f(-0.1, 0.40);
	glVertex2f(-0.1, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(0.15, -0.30);
	glVertex2f(0.15, 0.40);
	glVertex2f(0.1, 0.40);
	glVertex2f(0.1, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.025, -0.30);
	glVertex2f(-0.025, 0.40);
	glVertex2f(0.025, 0.40);
	glVertex2f(0.025, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.15, 0.40);
	glVertex2f(-0.16, 0.60);
	glVertex2f(-0.13, 0.60);
	glVertex2f(-0.10, 0.40);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(0.15, 0.40);
	glVertex2f(0.16, 0.60);
	glVertex2f(0.13, 0.60);
	glVertex2f(0.10, 0.40);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.025, 0.40);
	glVertex2f(-0.018, 0.60);
	glVertex2f(0.018, 0.60);
	glVertex2f(0.025, 0.40);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.16, 0.60);
	glVertex2f(-0.16, 0.65);
    glVertex2f(0.16, 0.65);
	glVertex2f(0.16, 0.60);
	glEnd();

    //BLACK-LINE

	//middle
	//glBegin(GL_LINES);
	//glColor3ub(0, 0, 0);
	//glVertex2f(0.0, -0.30);
	//glVertex2f(0.0, 0.60);
	//glEnd();

	/////////
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.1, -0.30);
	glVertex2f(-0.1, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.095, -0.30);
	glVertex2f(-0.095, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.09, -0.30);
	glVertex2f(-0.09, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.085, -0.30);
	glVertex2f(-0.085, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.08, -0.30);
	glVertex2f(-0.08, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.075, -0.30);
	glVertex2f(-0.075, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.07, -0.30);
	glVertex2f(-0.07, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.065, -0.30);
	glVertex2f(-0.065, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.06, -0.30);
	glVertex2f(-0.06, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.055, -0.30);
	glVertex2f(-0.055, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.05, -0.30);
	glVertex2f(-0.05, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.045, -0.30);
	glVertex2f(-0.045, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.04, -0.30);
	glVertex2f(-0.04, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.035, -0.30);
	glVertex2f(-0.035, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.03, -0.30);
	glVertex2f(-0.03, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.025, -0.30);
	glVertex2f(-0.025, 0.60);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.1, -0.30);
	glVertex2f(0.1, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.095, -0.30);
	glVertex2f(0.095, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.09, -0.30);
	glVertex2f(0.09, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.085, -0.30);
	glVertex2f(0.085, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.08, -0.30);
	glVertex2f(0.08, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.075, -0.30);
	glVertex2f(0.075, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.07, -0.30);
	glVertex2f(0.07, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.065, -0.30);
	glVertex2f(0.065, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.06, -0.30);
	glVertex2f(0.06, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.055, -0.30);
	glVertex2f(0.055, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.05, -0.30);
	glVertex2f(0.05, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.045, -0.30);
	glVertex2f(0.045, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.04, -0.30);
	glVertex2f(0.04, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.035, -0.30);
	glVertex2f(0.035, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.03, -0.30);
	glVertex2f(0.03, 0.60);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.025, -0.30);
	glVertex2f(0.025, 0.60);
	glEnd();



	glLoadIdentity();

	//STOMBHO-MIDDLE-LEFT
	glTranslatef(0.0f, 0.05f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.35);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.325, -0.30);
	glVertex2f(-0.325, -0.35);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.475, 0.40);
	glVertex2f(-0.450, 0.40);
	glVertex2f(-0.450, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.35, -0.30);
	glVertex2f(-0.35, 0.40);
	glVertex2f(-0.325, 0.40);
	glVertex2f(-0.325, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, 0.40);
	glVertex2f(-0.475, 0.45);
	glVertex2f(-0.325, 0.45);
	glVertex2f(-0.325, 0.40);
	glEnd();

	//BLACK-LINE
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.35, -0.3);
	glVertex2f(-0.35, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.355, -0.3);
	glVertex2f(-0.355, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.36, -0.3);
	glVertex2f(-0.36, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.365, -0.3);
	glVertex2f(-0.365, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.37, -0.3);
	glVertex2f(-0.37, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.375, -0.3);
	glVertex2f(-0.375, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.38, -0.3);
	glVertex2f(-0.38, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.385, -0.3);
	glVertex2f(-0.385, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.39, -0.3);
	glVertex2f(-0.39, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.395, -0.3);
	glVertex2f(-0.395, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.4, -0.3);
	glVertex2f(-0.4, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.405, -0.3);
	glVertex2f(-0.405, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.41, -0.3);
	glVertex2f(-0.41, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.415, -0.3);
	glVertex2f(-0.415, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.42, -0.3);
	glVertex2f(-0.42, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.425, -0.3);
	glVertex2f(-0.425, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.43, -0.3);
	glVertex2f(-0.43, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.435, -0.3);
	glVertex2f(-0.435, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.44, -0.3);
	glVertex2f(-0.44, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.445, -0.3);
	glVertex2f(-0.445, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.45, -0.3);
	glVertex2f(-0.45, 0.4);
	glEnd();

	glLoadIdentity();

	//STOMBHO-MIDDLE-RIGHT
	glTranslatef(0.8f, 0.05f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.35);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.325, -0.30);
	glVertex2f(-0.325, -0.35);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.475, 0.40);
	glVertex2f(-0.450, 0.40);
	glVertex2f(-0.450, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.35, -0.30);
	glVertex2f(-0.35, 0.40);
	glVertex2f(-0.325, 0.40);
	glVertex2f(-0.325, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, 0.40);
	glVertex2f(-0.475, 0.45);
	glVertex2f(-0.325, 0.45);
	glVertex2f(-0.325, 0.40);
	glEnd();

	//BLACK-LINE
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.35, -0.3);
	glVertex2f(-0.35, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.355, -0.3);
	glVertex2f(-0.355, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.36, -0.3);
	glVertex2f(-0.36, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.365, -0.3);
	glVertex2f(-0.365, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.37, -0.3);
	glVertex2f(-0.37, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.375, -0.3);
	glVertex2f(-0.375, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.38, -0.3);
	glVertex2f(-0.38, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.385, -0.3);
	glVertex2f(-0.385, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.39, -0.3);
	glVertex2f(-0.39, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.395, -0.3);
	glVertex2f(-0.395, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.4, -0.3);
	glVertex2f(-0.4, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.405, -0.3);
	glVertex2f(-0.405, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.41, -0.3);
	glVertex2f(-0.41, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.415, -0.3);
	glVertex2f(-0.415, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.42, -0.3);
	glVertex2f(-0.42, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.425, -0.3);
	glVertex2f(-0.425, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.43, -0.3);
	glVertex2f(-0.43, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.435, -0.3);
	glVertex2f(-0.435, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.44, -0.3);
	glVertex2f(-0.44, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.445, -0.3);
	glVertex2f(-0.445, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.45, -0.3);
	glVertex2f(-0.45, 0.4);
	glEnd();


	glLoadIdentity();

	//STOMBHO-MIDDLE-RIGHT- RIGHT
	glTranslatef(1.05f, 0.05f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.35);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.325, -0.30);
	glVertex2f(-0.325, -0.35);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.475, 0.20);
	glVertex2f(-0.450, 0.20);
	glVertex2f(-0.450, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.35, -0.30);
	glVertex2f(-0.35, 0.20);
	glVertex2f(-0.325, 0.20);
	glVertex2f(-0.325, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, 0.20);
	glVertex2f(-0.475, 0.25);
	glVertex2f(-0.325, 0.25);
	glVertex2f(-0.325, 0.20);
	glEnd();

	//BLACK-LINE
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.35, -0.3);
	glVertex2f(-0.35, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.355, -0.3);
	glVertex2f(-0.355, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.36, -0.3);
	glVertex2f(-0.36, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.365, -0.3);
	glVertex2f(-0.365, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.37, -0.3);
	glVertex2f(-0.37, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.375, -0.3);
	glVertex2f(-0.375, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.38, -0.3);
	glVertex2f(-0.38, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.385, -0.3);
	glVertex2f(-0.385, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.39, -0.3);
	glVertex2f(-0.39, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.395, -0.3);
	glVertex2f(-0.395, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.4, -0.3);
	glVertex2f(-0.4, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.405, -0.3);
	glVertex2f(-0.405, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.41, -0.3);
	glVertex2f(-0.41, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.415, -0.3);
	glVertex2f(-0.415, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.42, -0.3);
	glVertex2f(-0.42, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.425, -0.3);
	glVertex2f(-0.425, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.43, -0.3);
	glVertex2f(-0.43, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.435, -0.3);
	glVertex2f(-0.435, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.44, -0.3);
	glVertex2f(-0.44, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.445, -0.3);
	glVertex2f(-0.445, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.45, -0.3);
	glVertex2f(-0.45, 0.2);
	glEnd();

	glLoadIdentity();

	//STOMBHO-MIDDLE-LEFT-LEFT
	glTranslatef(-0.25f, 0.05f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.35);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.325, -0.30);
	glVertex2f(-0.325, -0.35);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, -0.30);
	glVertex2f(-0.475, 0.20);
	glVertex2f(-0.450, 0.20);
	glVertex2f(-0.450, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.35, -0.30);
	glVertex2f(-0.35, 0.20);
	glVertex2f(-0.325, 0.20);
	glVertex2f(-0.325, -0.30);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.475, 0.20);
	glVertex2f(-0.475, 0.25);
	glVertex2f(-0.325, 0.25);
	glVertex2f(-0.325, 0.20);
	glEnd();

    //BLACK-LINE
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.35, -0.3);
	glVertex2f(-0.35, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.355, -0.3);
	glVertex2f(-0.355, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.36, -0.3);
	glVertex2f(-0.36, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.365, -0.3);
	glVertex2f(-0.365, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.37, -0.3);
	glVertex2f(-0.37, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.375, -0.3);
	glVertex2f(-0.375, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.38, -0.3);
	glVertex2f(-0.38, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.385, -0.3);
	glVertex2f(-0.385, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.39, -0.3);
	glVertex2f(-0.39, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.395, -0.3);
	glVertex2f(-0.395, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.4, -0.3);
	glVertex2f(-0.4, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.405, -0.3);
	glVertex2f(-0.405, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.41, -0.3);
	glVertex2f(-0.41, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.415, -0.3);
	glVertex2f(-0.415, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.42, -0.3);
	glVertex2f(-0.42, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.425, -0.3);
	glVertex2f(-0.425, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.43, -0.3);
	glVertex2f(-0.43, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.435, -0.3);
	glVertex2f(-0.435, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.44, -0.3);
	glVertex2f(-0.44, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.445, -0.3);
	glVertex2f(-0.445, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.45, -0.3);
	glVertex2f(-0.45, 0.2);
	glEnd();

	glLoadIdentity();

	//SHIRI
	glBegin(GL_QUADS);
	glColor3ub(110, 32, 32);
	glVertex2f(-0.75, -0.40);
	glVertex2f(-0.75, -0.35);
	glVertex2f(0.75, -0.35);
	glVertex2f(0.75, -0.40);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(169, 93, 109);
	glVertex2f(-0.8, -0.45);
	glVertex2f(-0.750, -0.40);
	glVertex2f(0.750, -0.40);
	glVertex2f(0.8, -0.45);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(110, 32, 32);
	glVertex2f(-0.80, -0.50);
	glVertex2f(-0.80, -0.45);
	glVertex2f(0.80, -0.45);
	glVertex2f(0.80, -0.50);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(169, 93, 109);
	glVertex2f(-0.85, -0.55);
	glVertex2f(-0.8, -0.50);
	glVertex2f(0.8, -0.50);
	glVertex2f(0.85, -0.55);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(110, 32, 32);
	glVertex2f(-0.85, -0.60);
	glVertex2f(-0.85, -0.55);
	glVertex2f(0.85, -0.55);
	glVertex2f(0.85, -0.60);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(169, 93, 109);
	glVertex2f(-0.9, -0.65);
	glVertex2f(-0.85, -0.60);
	glVertex2f(0.85, -0.60);
	glVertex2f(0.9, -0.65);
	glEnd();

	/*
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.025, -0.4);
	glVertex2f(-0.025, -0.35);
	glVertex2f(0.025, -0.35);
	glVertex2f(0.025, -0.4);
	glEnd();

	glTranslatef(0.0f, -0.05f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(153, 153, 153);
	glVertex2f(-0.025, -0.4);
	glVertex2f(-0.025, -0.35);
	glVertex2f(0.025, -0.35);
	glVertex2f(0.025, -0.4);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.0f, -0.1f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.025, -0.4);
	glVertex2f(-0.025, -0.35);
	glVertex2f(0.025, -0.35);
	glVertex2f(0.025, -0.4);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.0f, -0.15f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(153, 153, 153);
	glVertex2f(-0.025, -0.4);
	glVertex2f(-0.025, -0.35);
	glVertex2f(0.025, -0.35);
	glVertex2f(0.025, -0.4);
	glEnd();

	glLoadIdentity();
	glTranslatef(0.0f, -0.2f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.025, -0.4);
	glVertex2f(-0.025, -0.35);
	glVertex2f(0.025, -0.35);
	glVertex2f(0.025, -0.4);
	glEnd();

	glLoadIdentity();
	glTranslatef(0.0f, -0.25f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(153, 153, 153);
	glVertex2f(-0.025, -0.4);
	glVertex2f(-0.025, -0.35);
	glVertex2f(0.025, -0.35);
	glVertex2f(0.025, -0.4);
	glEnd();
	glLoadIdentity();*/



	//FOOTPATH
	glBegin(GL_QUADS);
	glColor3ub(144, 144, 144);
	glVertex2f(-1.0, -0.75);
	glVertex2f(-1.0, -0.65);
	glVertex2f(1.0, -0.65);
	glVertex2f(1.0, -0.75);
	glEnd();

    //PEOPLE
    people2();
    glTranslatef(0.05f, 0.0f, 0.0f);
    people2();
    //glTranslatef(-0.5f, 0.05f, 0.0f);
    //people2();
    //glTranslatef(-0.52f, 0.0f, 0.0f);
    //people2();
    //glTranslatef(-0.62f, 0.0f, 0.0f);
    //people2();
    //glTranslatef(-0.8f, 0.0f, 0.0f);
    //people2();
    //glTranslatef(-1.0f, 0.05f, 0.0f);
    //people2();

     //STOPAGE
    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(0.3, -0.75);
	glVertex2f(0.3, -0.60);
	glVertex2f(0.31, -0.60);
	glVertex2f(0.31, -0.75);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(0.33, -0.75);
	glVertex2f(0.33, -0.60);
	glVertex2f(0.34, -0.60);
	glVertex2f(0.34, -0.75);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(0.45, -0.75);
	glVertex2f(0.45, -0.60);
	glVertex2f(0.46, -0.60);
	glVertex2f(0.46, -0.75);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(0.49, -0.75);
	glVertex2f(0.49, -0.55);
	glVertex2f(0.50, -0.55);
	glVertex2f(0.50, -0.75);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(194, 194, 194);
	glVertex2f(0.3, -0.60);
	glVertex2f(0.33, -0.55);
	glVertex2f(0.51, -0.55);
	glVertex2f(0.46, -0.60);
	glEnd();

    //ROAD-FENCH
    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-1.0, -0.66);
	glVertex2f(-1.0, -0.65);
	glVertex2f(-0.2, -0.65);
	glVertex2f(-0.2, -0.66);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-1.0, -0.71);
	glVertex2f(-1.0, -0.70);
	glVertex2f(-0.2, -0.70);
	glVertex2f(-0.2, -0.71);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.95, -0.75);
	glVertex2f(-0.95, -0.65);
	glVertex2f(-0.947, -0.65);
	glVertex2f(-0.947, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.90, -0.75);
	glVertex2f(-0.90, -0.65);
	glVertex2f(-0.897, -0.65);
	glVertex2f(-0.897, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.85, -0.75);
	glVertex2f(-0.85, -0.65);
	glVertex2f(-0.847, -0.65);
	glVertex2f(-0.847, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.80, -0.75);
	glVertex2f(-0.80, -0.65);
	glVertex2f(-0.797, -0.65);
	glVertex2f(-0.797, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.75, -0.75);
	glVertex2f(-0.75, -0.65);
	glVertex2f(-0.747, -0.65);
	glVertex2f(-0.747, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.70, -0.75);
	glVertex2f(-0.70, -0.65);
	glVertex2f(-0.697, -0.65);
	glVertex2f(-0.697, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.65, -0.75);
	glVertex2f(-0.65, -0.65);
	glVertex2f(-0.647, -0.65);
	glVertex2f(-0.647, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.60, -0.75);
	glVertex2f(-0.60, -0.65);
	glVertex2f(-0.597, -0.65);
	glVertex2f(-0.597, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.55, -0.75);
	glVertex2f(-0.55, -0.65);
	glVertex2f(-0.547, -0.65);
	glVertex2f(-0.547, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.50, -0.75);
	glVertex2f(-0.50, -0.65);
	glVertex2f(-0.497, -0.65);
	glVertex2f(-0.497, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.45, -0.75);
	glVertex2f(-0.45, -0.65);
	glVertex2f(-0.447, -0.65);
	glVertex2f(-0.447, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.40, -0.75);
	glVertex2f(-0.40, -0.65);
	glVertex2f(-0.397, -0.65);
	glVertex2f(-0.397, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.35, -0.75);
	glVertex2f(-0.35, -0.65);
	glVertex2f(-0.347, -0.65);
	glVertex2f(-0.347, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.30, -0.75);
	glVertex2f(-0.30, -0.65);
	glVertex2f(-0.297, -0.65);
	glVertex2f(-0.297, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.25, -0.75);
	glVertex2f(-0.25, -0.65);
	glVertex2f(-0.247, -0.65);
	glVertex2f(-0.247, -0.75);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(1.0, -0.66);
	glVertex2f(1.0, -0.65);
	glVertex2f(0.2, -0.65);
	glVertex2f(0.2, -0.66);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(1.0, -0.71);
	glVertex2f(1.0, -0.70);
	glVertex2f(0.2, -0.70);
	glVertex2f(0.2, -0.71);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.95, -0.75);
	glVertex2f(0.95, -0.65);
	glVertex2f(0.947, -0.65);
	glVertex2f(0.947, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.90, -0.75);
	glVertex2f(0.90, -0.65);
	glVertex2f(0.897, -0.65);
	glVertex2f(0.897, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.85, -0.75);
	glVertex2f(0.85, -0.65);
	glVertex2f(0.847, -0.65);
	glVertex2f(0.847, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.80, -0.75);
	glVertex2f(0.80, -0.65);
	glVertex2f(0.797, -0.65);
	glVertex2f(0.797, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.75, -0.75);
	glVertex2f(0.75, -0.65);
	glVertex2f(0.747, -0.65);
	glVertex2f(0.747, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.70, -0.75);
	glVertex2f(0.70, -0.65);
	glVertex2f(0.697, -0.65);
	glVertex2f(0.697, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.65, -0.75);
	glVertex2f(0.65, -0.65);
	glVertex2f(0.647, -0.65);
	glVertex2f(0.647, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.60, -0.75);
	glVertex2f(0.60, -0.65);
	glVertex2f(0.597, -0.65);
	glVertex2f(0.597, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.55, -0.75);
	glVertex2f(0.55, -0.65);
	glVertex2f(0.547, -0.65);
	glVertex2f(0.547, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.50, -0.75);
	glVertex2f(0.50, -0.65);
	glVertex2f(0.497, -0.65);
	glVertex2f(0.497, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.45, -0.75);
	glVertex2f(0.45, -0.65);
	glVertex2f(0.447, -0.65);
	glVertex2f(0.447, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.40, -0.75);
	glVertex2f(0.40, -0.65);
	glVertex2f(0.397, -0.65);
	glVertex2f(0.397, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.35, -0.75);
	glVertex2f(0.35, -0.65);
	glVertex2f(0.347, -0.65);
	glVertex2f(0.347, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.30, -0.75);
	glVertex2f(0.30, -0.65);
	glVertex2f(0.297, -0.65);
	glVertex2f(0.297, -0.75);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.25, -0.75);
	glVertex2f(0.25, -0.65);
	glVertex2f(0.247, -0.65);
	glVertex2f(0.247, -0.75);
	glEnd();

    //STREET-LIGHT
    streetlight();
    glTranslatef(0.4f, 0.0f, 0.0f);
    streetlight();
    glTranslatef(-0.8f, 0.0f, 0.0f);
    streetlight();
    glTranslatef(1.2f, 0.0f, 0.0f);
    streetlight();
    glTranslatef(-0.4f, 0.0f, 0.0f);
    streetlight();
    glTranslatef(0.8f, 0.0f, 0.0f);
    streetlight();

    //TRAFIC-LIGHT
    traficlight();

	//ROAD
	glBegin(GL_QUADS);
	glColor3ub(33, 33, 33);
	glVertex2f(-1.0, -1.0);
	glVertex2f(-1.0, -0.75);
	glVertex2f(1.0, -0.75);
	glVertex2f(1.0, -1.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(95, 95, 95);
	glVertex2f(-1.0, -0.75);
	glVertex2f(-1.0, -0.77);
	glVertex2f(1.0, -0.77);
	glVertex2f(1.0, -0.75);
	glEnd();


	//ROAD_MIDDLE LINE
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();

	glTranslatef(0.1f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.2f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.3f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.4f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.5f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.6f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.7f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(0.8f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

    //JEBRA-CROSING1
    glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-0.1, -0.8);
	glVertex2f(-0.1, -0.77);
	glVertex2f(-0.05, -0.77);
	glVertex2f(-0.05, -0.8);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-0.1, -0.85);
	glVertex2f(-0.1, -0.82);
	glVertex2f(-0.05, -0.82);
	glVertex2f(-0.05, -0.85);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-0.1, -0.9);
	glVertex2f(-0.1, -0.87);
	glVertex2f(-0.05, -0.87);
	glVertex2f(-0.05, -0.9);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-0.1, -0.95);
	glVertex2f(-0.1, -0.92);
	glVertex2f(-0.05, -0.92);
	glVertex2f(-0.05, -0.95);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-0.1, -1.0);
	glVertex2f(-0.1, -0.97);
	glVertex2f(-0.05, -0.97);
	glVertex2f(-0.05, -1.0);
	glEnd();


	glTranslatef(0.975f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	//JEBRA-CROSING2
    glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(0.1, -0.8);
	glVertex2f(0.1, -0.77);
	glVertex2f(0.05, -0.77);
	glVertex2f(0.05, -0.8);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(0.1, -0.85);
	glVertex2f(0.1, -0.82);
	glVertex2f(0.05, -0.82);
	glVertex2f(0.05, -0.85);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(0.1, -0.9);
	glVertex2f(0.1, -0.87);
	glVertex2f(0.05, -0.87);
	glVertex2f(0.05, -0.9);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(0.1, -0.95);
	glVertex2f(0.1, -0.92);
	glVertex2f(0.05, -0.92);
	glVertex2f(0.05, -0.95);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(0.1, -1.0);
	glVertex2f(0.1, -0.97);
	glVertex2f(0.05, -0.97);
	glVertex2f(0.05, -1.0);
	glEnd();


	glTranslatef(1.15f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.25f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.35f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.45f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.55f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.65f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.75f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.85f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();

	glTranslatef(1.95f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(205, 207, 206);
	glVertex2f(-1.0, -0.9);
	glVertex2f(-1.0, -0.89);
	glVertex2f(-0.95, -0.89);
	glVertex2f(-0.95, -0.9);
	glEnd();
	glLoadIdentity();


    glPushMatrix();
    glTranslatef(position1, 0.0f, 0.0f);
    car();
    glPushMatrix();
    glTranslatef(position1, 0.0f, 0.0f);
    car4();
    glPushMatrix();
    glTranslatef(position1, 0.0f, 0.0f);
    bus3();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-position11, 0.0f, 0.0f);
    glTranslatef(-0.18f, 0.03f, 0.0f);
    bus();
    glPushMatrix();
    glTranslatef(-position11, 0.0f, 0.0f);
    bus2();
    glPushMatrix();
    glTranslatef(-position11, 0.0f, 0.0f);
    car2();
    glPushMatrix();
    glTranslatef(-position11, 0.0f, 0.0f);
    car3();
    glPopMatrix();






    //RAIN
    glPushMatrix();
    glTranslatef(rainposition, -rainposition, 0.0f);
    rain();
    glTranslatef(0.0f, -0.3f, 0.0f);
    rain();
    glTranslatef(0.0f, -0.3f, 0.0f);
    rain();
    glTranslatef(0.0f, -0.3f, 0.0f);
    rain();
    glTranslatef(0.0f, -0.3f, 0.0f);
    rain();
    glTranslatef(0.0f, -0.3f, 0.0f);
    rain();
    glTranslatef(0.0f, -0.3f, 0.0f);
    rain();
    glLoadIdentity();
    glPopMatrix();







	//axis();


	glFlush();
}







void morningsound()
{

    PlaySound("morning.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}

void nightsound()
{

    PlaySound("night.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}

void rainysound()
{

    PlaySound("rainy.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    //PlaySound("", NULL, SND_ASYNC|SND_FILENAME);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}
void handleMouse(int button, int state, int x, int y)
{
    if(button == GLUT_LEFT_BUTTON)
    {
        speed1 += 0.02f;
        speed11 += 0.02f;
    }
    if(button == GLUT_RIGHT_BUTTON)
    {
        speed1 = 0.0f;
        speed11 = 0.0f;
    }
    glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'm':
     glLoadIdentity();
     glutDisplayFunc(morning);
     morningsound();
     glutPostRedisplay();
     break;
case 'n':
     glutDisplayFunc(night);
     nightsound();
     glutPostRedisplay();
     break;
case 'r':
     glutDisplayFunc(rainy);
     rainysound();
     glutPostRedisplay();
     break;

	}
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(640, 500);   // Set the window's initial width & height
	glutDisplayFunc(morning);// Register display callback handler for window re-paint
	morningsound();
	//glutIdleFunc(Idle);
	//glutCreateWindow("Morning: 'm' Night: 'n' Rainy: 'r'");

	glutKeyboardFunc(handleKeypress);
	glutTimerFunc(100, planeanimation, 0);
	glutTimerFunc(100,legAnim,0);
    glutTimerFunc(100,peopleAnim,0);

	glutMouseFunc(handleMouse);
	glutTimerFunc(100, vehicleleft, 0);
	glutTimerFunc(100, vehicleright, 0);
	glutTimerFunc(100, cloud, 0);
	glutTimerFunc(100, sunanim, 0);
	glutTimerFunc(100, rainanim, 0);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}






