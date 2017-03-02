#include <GL/glut.h>
#include<bits/stdc++.h>
const float PI = 3.14159;
void initOpenGL()
{
    glClearColor(1,1,1,1);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);

    glBegin(GL_LINES);

    glColor3f(0.0,0.0,1.0);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.1, 0.2);

     glColor3f(0.0,0.0,1.0);
    glVertex2f(0.0, 0.0);
    glVertex2f(-0.12, 0.12);

   glColor3f(1.0, 0.0, 0.0); // red
   glVertex2f(0.15, -0.2);
   glVertex2f(0.15, -0.6);

   glColor3f(1.0, 0.0, 0.0); // red
   glVertex2f(-0.15, -0.2);
   glVertex2f(-0.15, -0.6);
 glEnd();

   glBegin(GL_LINE_LOOP);   // circle
   glColor3f(0.0,1.0,0.0);
    for(int i =0; i <= 300; i++)
     {
      double angle = 2 * PI * i / 300;
      double x = cos(angle);
      double y = sin(angle);
      glVertex2d(x/6,y/6);
     }
  glEnd();

   glBegin(GL_LINE_LOOP);   // circle
   glColor3f(0.0,1.0,0.0);
    for(int i =0; i <= 300; i++)
     {
      double angle = 2 * PI * i / 300;
      double x = cos(angle);
      double y = sin(angle);
      glVertex2d(x/4,y/4);
     }
  glEnd();

   glBegin(GL_LINES);  //Bob Lines

    glColor3f(1.0,1.0,0.0);
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,-0.4);

    glEnd();


   glBegin(GL_LINE_LOOP);
    glColor3f(0.0,1.0,0.0);

   for(int r=16;r<300;r++)       //bob
   {
    for(int i =0; i <= 300; i++)
     {
      double angle = 2 * PI * i / 300;
      double x = cos(angle);
      double y = sin(angle);
      glVertex2d(0.0+x/r,-0.4+ y/r);
     }
   }
   glEnd();


 glBegin(GL_LINE_LOOP);   // circle
   glColor3f(1.0,0.0,0.0);
    for(int i =0; i <= 300; i++)
     {
      double angle =  PI * i / 300;
      double x = -cos(angle);
      double y = -sin(angle);
      glVertex2d(0.0+ x/6.5,-0.6+ y/6.5);
     }
  glEnd();


    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutInitWindowSize(640,680);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Pendulum");
    initOpenGL();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
