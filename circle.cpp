#include<GL/glut.h>
#include<math.h>
const int number=100;
const GLfloat R=0.5f;
const GLfloat PI=3.141592653f;
void circle2()
{
	
}

void circle1()
{
	int i;
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_LOOP);
	for(i=0;i<number;i++)
	{
		glVertex2f(R*cos(2*PI/number*i),R*sin(2*PI/number*i));
	}
	glEnd();
	glFlush();
}
 int main(int sss,char *aaa[])
 {
	 glutInit(&sss,aaa);
	 glutInitWindowPosition(600,200);
	 glutInitWindowSize(400,400);
	 glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	 glutCreateWindow("hhhh");
	 glutDisplayFunc(circle1);
	 glutMainLoop();
	 return 0;
 }

