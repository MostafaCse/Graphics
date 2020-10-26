#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
int gd=DETECT,gm;
int i,xmid,ymid,x1,y1,x2,y2,x3,y3,x,y,dy,dx,p,gap=50,temp;
int x1dash,x2dash,x3dash,y1dash,y2dash,y3dash;
float m;
double theta;
char str[5];

initgraph(&gd,&gm,"..\\bgi");
printf("Enter first co-ords of the triangle\n");
scanf("%d %d",&x1,&y1);
printf("Enter second co-ords of the triangle\n");
scanf("%d  %d",&x2,&y2);
printf("Enter third co-ords of the triangle\n");
scanf("%d  %d",&x3,&y3);


xmid= getmaxx()/2;
ymid= getmaxy()/2;

printf("%d - ",xmid);
printf("%d",ymid);
line(5,ymid,getmaxx()-5,ymid);
line(xmid+3,5,xmid+3,getmaxy()-5);

line(x1+xmid,ymid-y1,x2+xmid,ymid-y2);
line(x2+xmid,ymid-y2,x3+xmid,ymid-y3);
line(x3+xmid,ymid-y3,x1+xmid,ymid-y1);

printf("Enter the degree to rotate");
scanf("%lf",&theta);
theta= ((float) theta *3.14f )/(float)180;
x1dash=x1*cos(theta)-y1*sin(theta);
x2dash=x2*cos(theta)-y2*sin(theta);
x3dash=x3*cos(theta)-y3*sin(theta);
y1dash=x1*sin(theta)+y1*cos(theta);
y2dash=x2*sin(theta)+y2*cos(theta);
y3dash=x3*sin(theta)+y3*cos(theta);

line(x1dash+xmid,ymid-y1dash,x2dash+xmid,ymid-y2dash);
line(x2dash+xmid,ymid-y2dash,x3dash+xmid,ymid-y3dash);
line(x3dash+xmid,ymid-y3dash,x1dash+xmid,ymid-y1dash);

getch();
closegraph();
}
