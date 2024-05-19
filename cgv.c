1.Write a progrm to Draw a line with openGL.

#include <stdio.h> 
#include <GL/glut.h> 

void display(void) 
{  
 glClear( GL_COLOR_BUFFER_BIT); 
 glColor3f(0.0, 1.0, 0.0); 
 glBegin(GL_LINES); 
  glVertex3f(2.0, 4.0, 0.0); 
  glVertex3f(8.0, 4.0, 0.0); 
  
 glEnd(); 
 glFlush(); 
} 

int main(int argc, char **argv) 
{ 
 
 glutInit(&argc, argv); 
 glutInitDisplayMode ( GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH); 

 glutInitWindowPosition(100,100); 
 glutInitWindowSize(300,300); 
 glutCreateWindow ("Line"); 

 glClearColor(0.0, 0.0, 0.0, 0.0);         // black background 
 glMatrixMode(GL_PROJECTION);              // setup viewing projection 
 glLoadIdentity();                           // start with identity matrix 
 glOrtho(0.0, 10.0, 0.0, 10.0, -1.0, 1.0); // setup a 10x10x2 viewing world 

 glutDisplayFunc(display); 
 glutMainLoop(); 

 return 0; 
}
2.Draw a square with openGL.
#include <stdio.h> 
#include <GL/glut.h> 

void display(void) 
{  
 glClear( GL_COLOR_BUFFER_BIT); 
 glColor3f(0.0, 1.0, 0.0); 
 glBegin(GL_POLYGON); 
  glVertex3f(2.0, 4.0, 0.0); 
  glVertex3f(8.0, 4.0, 0.0); 
  glVertex3f(8.0, 6.0, 0.0); 
  glVertex3f(2.0, 6.0, 0.0); 
 glEnd(); 
 glFlush(); 
} 

int main(int argc, char **argv) 
{ 
 
 glutInit(&argc, argv); 
 glutInitDisplayMode ( GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH); 

 glutInitWindowPosition(100,100); 
 glutInitWindowSize(300,300); 
 glutCreateWindow ("square"); 

 glClearColor(0.0, 0.0, 0.0, 0.0);         // black background 
 glMatrixMode(GL_PROJECTION);              // setup viewing projection 
 glLoadIdentity();                           // start with identity matrix 
 glOrtho(0.0, 10.0, 0.0, 10.0, -1.0, 1.0);   // setup a 10x10x2 viewing world 

 glutDisplayFunc(display); 
 glutMainLoop(); 

 return 0; 
}









3.Draw a triangle with openGL.
#include <stdio.h> 
#include <GL/glut.h> 

void display(void) 
{  
 glClear( GL_COLOR_BUFFER_BIT); 
 glColor3f(0.0, 1.0, 0.0); 
 glBegin(GL_TRIANGLES); 
  glVertex3f(2.0, 4.0, 0.0); 
  glVertex3f(8.0, 4.0, 0.0); 
  glVertex3f(8.0, 6.0, 0.0); 
  
 glEnd(); 
 glFlush(); 
} 

int main(int argc, char **argv) 
{ 
 
 glutInit(&argc, argv); 
 glutInitDisplayMode ( GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH); 

 glutInitWindowPosition(100,100); 
 glutInitWindowSize(300,300); 
 glutCreateWindow ("Triangles"); 

 glClearColor(0.0, 0.0, 0.0, 0.0);         // black background 
 glMatrixMode(GL_PROJECTION);              // setup viewing projection 
 glLoadIdentity();                           // start with identity matrix 
 glOrtho(0.0, 10.0, 0.0, 10.0, -1.0, 1.0);   // setup a 10x10x2 viewing world 

 glutDisplayFunc(display); 
 glutMainLoop(); 

 return 0; 
}



Week 2 - Sample programs

1.Write a program to Draw a triangle with OpenGL.


#include<stdio.h>
#include<GL/glut.h>
void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(0,1.0,0.0);
 glBegin(GL_TRIANGLES);
  	glVertex3f(2.0,4.0,0.0);
  	glVertex3f(6.0,4.0,0.0);
	glVertex3f(4.0,6.0,0.0);
 glEnd();
 glFlush();
}

int main(int argc,char **argv)
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);

 glutInitWindowPosition(100,100);
 glutInitWindowSize(600,600);
 glutCreateWindow("triangle");

 glClearColor(0.0,0.0,0.0,0.0);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(0.0,10.0,0.0,10.0,-1.0,1.0);

 glutDisplayFunc(display);
 glutMainLoop();
 return 0;
}


2.Write a program to Draw a quadrilateral with OpenGL.

#include<stdio.h>
#include<GL/glut.h>
void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(0,1.0,0.0);
 glBegin(GL_QUADS);
  	glVertex3f(2.0,4.0,0.0);
  	glVertex3f(6.0,4.0,0.0);
	glVertex3f(8.0,6.0,0.0);
 	glVertex3f(4.0,6.0,0.0);
 glEnd();
 glFlush();
}

int main(int argc,char **argv)
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);

 glutInitWindowPosition(100,100);
 glutInitWindowSize(600,600);
 glutCreateWindow("quads");

 glClearColor(1.0,0.0,0.0,1.0);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(0.0,10.0,0.0,10.0,-1.0,1.0);

 glutDisplayFunc(display);
 glutMainLoop();
 return 0;
}

3.Write a program to Draw a Rectangle with OpenGL
#include<stdio.h>
#include<GL/glut.h>
void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(0,1.0,0.0);
 glBegin(GL_POLYGON);
  	glVertex3f(2.0,4.0,0.0);
  	glVertex3f(8.0,4.0,0.0);
  	glVertex3f(8.0,6.0,0.0);
  	glVertex3f(2.0,6.0,0.0);
 glEnd();
 glFlush();
}

int main(int argc,char **argv)
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
 glutInitWindowPosition(100,100);
 glutInitWindowSize(300,300);
 glutCreateWindow("square");
 glClearColor(0.0,0.0,0.0,0.0);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(0.0,10.0,0.0,10.0,-1.0,1.0);
 glutDisplayFunc(display);
 glutMainLoop();
 return 0;
}



4.Write a program to Draw a Triangle strip with OpenGL.
(Try quad strip((GL_QUAD_STRIP))

#include<stdio.h>
#include<GL/glut.h>
void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT);
 glBegin(GL_TRIANGLE_STRIP);
	
	glColor3f(1.0,0.0,0.0);
  	glVertex3f(2.0,4.0,0.0);
  	glVertex3f(3.0,5.0,0.0);
  	glVertex3f(4.0,4.0,0.0);
	
	glColor3f(0,1.0,0.0);
	glVertex3f(3.0,5.0,0.0);
  	glVertex3f(4.0,4.0,0.0);
  	glVertex3f(5.0,5.0,0.0);
	

  	glColor3f(1.0,0.0,0.0);
	glVertex3f(4.0,4.0,0.0);
  	glVertex3f(5.0,5.0,0.0);
	glVertex3f(6.0,4.0,0.0);
	
	glColor3f(0.0,0.0,1.0);
	glVertex3f(5.0,5.0,0.0);
	glVertex3f(6.0,4.0,0.0);
	glVertex3f(7.0,5.0,0.0);
	
	glColor3f(0,1.0,1.0);
	glVertex3f(6.0,4.0,0.0);
	glVertex3f(7.0,5.0,0.0);
  	glVertex3f(8.0,4.0,0.0);
	
 glEnd();
 glFlush();
}

int main(int argc,char **argv)
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);

 glutInitWindowPosition(100,100);
 glutInitWindowSize(600,600);
 glutCreateWindow("TriangleStrip");

 glClearColor(0.0,0.0,0.0,1.0);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(0.0,10.0,0.0,10.0,-1.0,1.0);

 glutDisplayFunc(display);
 glutMainLoop();
 return 0;
}


5.Write a program to Draw a triangle with OpenGL (number of vertices and vertex values needs to be entered)


#include<stdio.h>
#include<GL/glut.h>
void display(void)
{
 int i;
 float a[10][10];
 printf("Enter the no of vertices\n");
 for(i=0;i<3;i++)
{
	printf("Enter the values for traingle vertex %d ",i+1);
	scanf("%f %f %f",&a[i][0],&a[i][1],&a[i][2]);
}
 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(0,1.0,0.0);
 glBegin(GL_POLYGON);
  	glVertex3f(a[0][0],a[0][1],a[0][2]);
  	glVertex3f(a[1][0],a[1][1],a[1][2]);
	glVertex3f(a[2][0],a[2][1],a[2][2]);
 glEnd();
 glFlush();
}

int main(int argc,char **argv)
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);

 glutInitWindowPosition(100,100);
 glutInitWindowSize(600,600);
 glutCreateWindow("triangle input");

 glClearColor(1.0,0.0,0.0,1.0);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(0.0,10.0,0.0,10.0,-1.0,1.0);

 glutDisplayFunc(display);
 glutMainLoop();
 return 0;
}


Develop a program to draw a line using DDA line drawing technique

#include<stdio.h>
#include<GL/glut.h>
#include<math.h>

//int x1,y1,x2,y2;

int n;
int endpoints[8][4];

void draw_pixel(int x,int y){
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POINTS);
		glVertex2i(x,y);
	glEnd();
}


void draw_line(int x1,int y1,int x2,int y2){

	int dx = x2 - x1;
    	int dy = y2 - y1;
	int i=0;int steps=0;
 
    // calculate steps required for generating pixels
    	steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
 
    // calculate increment in x & y for each steps
    float Xinc = dx / (float) steps;
    float Yinc = dy / (float) steps;
 
    // Put pixel for each step
    float X = x1;
    float Y = y1;
    for (i = 0; i <= steps; i++)
    {
        draw_pixel(round(X),round(Y));  // put pixel at (X,Y)
        X += Xinc;           // increment in x at each step
        Y += Yinc;           // increment in y at each step
        //delay(100);          // for visualization of line-
                             // generation step by step
    }


}

void drawText(int x,int y,char* s){
	int i=0;
	glColor3f(1.0,0.0,0.0);
	glRasterPos2i(x,y);
	for(i=0;s[i]!='\0';i++){
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,s[i]);
	}
}

void DDA(){
	int i;
	glClearColor(1.0,1.0,1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	for(i=0;i<n;i++){
		//x1=endpoints[i][0];y1=endpoints[i][1];x2=endpoints[i][2];y2=endpoints[i][3];
		draw_line(endpoints[i][0],endpoints[i][1],endpoints[i][2],endpoints[i][3]);
		glColor3f(1.0,0.0,0.0);
		glBegin(GL_LINES);
			glVertex2i(endpoints[i][0],endpoints[i][1]);
			glVertex2i(endpoints[i][2],endpoints[i][3]);
		glEnd();
		//printf("The points are %d %d %d %d\n",x1,y1,x2,y2);
		glFlush();
	}
	drawText(220,475,"DDA Line drawing algorithm");
	
	glFlush();

}

void myInit(){
	//glClearColor(1.0,1.0,1.0,1.0);
	//glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,500,0,500);
	glMatrixMode(GL_MODELVIEW);
}


void main(int argc,char** argv){
	int i;
	printf("Enter number of endpoints:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the endpoints of line %d\n",i+1);
		scanf("%d%d%d%d",&endpoints[i][0],&endpoints[i][1],&endpoints[i][2],&endpoints[i][3]);	
	}
	
	//printf("Ener the endpoints of line segment");
	//scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(500,500);
	glutCreateWindow("DDA line drawing");
	glutDisplayFunc(DDA);
	myInit();
	glutMainLoop();


}


Develop a program to draw a line using Bresenham’s line drawing technique

#include<stdio.h>
#include<GL/glut.h>
int x1,y1,x2,y2;
void draw_pixel(int x, int y)
{   glColor3f(0.0,0.0,1.0);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(x,y);
    glEnd();  
 }
void Bresenham()
{ glClear(GL_COLOR_BUFFER_BIT);
  glClearColor(1.0,1.0,1.0,1.0);
  draw_line(x1,y1,x2,y2);
   glColor3f(1.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(x1,y1);
     glVertex2i(x2,y2);
    glEnd();
  glFlush();
}
void myinit()
{
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(0,100,0,100);
  glMatrixMode(GL_MODELVIEW);
}
 
 void draw_line(int x1,int y1, int x2, int y2)
{
    int dx, dy, i, e;
    int incx, incy, inc1, inc2;
    int x,y;
    dx = x2-x1;
    dy = y2-y1;
    if (dx < 0) dx = -dx;
    if (dy < 0) dy = -dy;
    incx = 1;
    if (x2 < x1) incx = -1;
    incy = 1;
    if (y2 < y1) incy = -1;
    x = x1; y = y1;

    if (dx > dy) //slope lessthan 1
    {
        	draw_pixel(x, y);
        	e = 2 * dy-dx;// initial decision parameter
       		inc1 = 2*(dy-dx);//upper pixel
        	inc2 = 2*dy;  // lower pixel
        	for (i=0; i<dx; i++)
		 {
            	 	if (e >= 0)
				{y += incy;
				e += inc1;} //selection of upper pixel
	        	else
                 		e += inc2; //selection of Lower pixel

           		x += incx;
               		draw_pixel(x, y);
       	     	}
    } 
   else 
   {
        draw_pixel(x, y);
        e = 2*dx-dy;
        inc1 = 2*(dx-dy);
        inc2 = 2*dx;
    	    for (i=0; i<dy; i++) 
	   {
         	if (e >= 0)
         		 {
 		        x+= incx; //upper pixel
	    		e += inc1;
                         }
         	else
          	 e += inc2;
       		 
            y += incy;
            draw_pixel(x, y);
     	 }
   }
}
void main(int argc,char ** argv)
{ printf("Enter the endpoints of the line segment");
  scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
  glutInitWindowSize(500,500);
  glutInitWindowPosition(100,100);
  glutCreateWindow("Bresenham Line Algorithm");
  glutDisplayFunc(Bresenham);
  myinit();
  glutMainLoop();
}
