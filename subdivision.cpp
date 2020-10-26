#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int *x,*y,i,nin;

void dda(float x1,float y1,float x2,float y2)
{
float dx,dy,x=x1,y=y1,m;
int i;
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>=abs(dy))
m=abs(dx);
else m=abs(dy);
putpixel((int)x,(int)y,15);
for(i=1;i<m;i++)
{
x=x+dx/m;
y=y+dy/m;
putpixel((int)x,(int)y,15);
}
}
void bress(float x1,float y1,float x2,float y2)
{
int x,y,end,inc=0,p,dx=abs(x2-x1),dy=abs(y2-y1),c=0,current=0;
if(dx>dy)
{
p=2*dy-dx;
if(x1<x2)
{
x=x1;y=y1;end=x2;
}
if(y1<y2)
inc=1;
if(y1>y2)
inc=-1;
}
else
{
x=x2;y=y2;end=x1;
if(y2<y1)
inc=1;
if(y2>y1)
inc=-1;
}
while(x<=end)
{
putpixel(x,y,15);
if(p<0)
p=p+2*dy;
else
{
y=y+inc;p=p+2*(dy-dx);
}
x++;
if(current==0&&c==10)
{
current=1;
c=-1;
}
if(current==1&&c==6)
{
current=0;
c=-1;
}
c++;
}
}
void drawpolygon(int *x,int *y)
{
int ch=0,x1,y1,theta;
//registerbgidriver(EGAVGA_driver);
for (i=0;i<(nin-1);i++)
line(*(x+i),*(y+i),*(x+i+1),*(y+i+1));
line(*(x+nin-1),*(y+nin-1),*x,*y);

}

int main()
{
float x1,x2,y1,y2,x3,y3,x4,y4;

int gdriver=DETECT, gmode=DETECT;
initgraph(&gdriver, &gmode, "c:\\tc\\BGI");

printf("Enter end points of line(x1,y1,x2,y2)");
scanf("%f %f %f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
bress(x1,y1,x2,y2);
dda(x2,y2,x3,y3);
bress(x4,y4,x3,y3);
dda(x4,y4,x1,y1);
x=(int *)malloc(sizeof(int)*10);
y=(int *)malloc(sizeof(int)*10);

printf("ENTER NUMBER OF SIDES IN POLYGON : ");
scanf("%d",&nin);
printf("ENTER THE COORDINATES OF THE VERTICES (x,y) :\n");
for (i=0;i<nin;i++)
{
printf("(i+1) : ");
scanf("%d%d",&(*(x+i)),&(*(y+i)));
}

drawpolygon(x,y);
if (((*(x+i))<x1)&&((*(y+i))<y1)&&((*(x+i))>x2)&&((*(y+i))<y2)&&((*(x+i))>x3)&&((*(y+i))>y3)&&((*(x+i))<x4)&&((*(y+i))>y4)&&((*(x+i))<x1)&&((*(y+i))<y1))
outtextxy(400, 400,"POLYGON CATEGORY:SURROUNDS" );
 else if (((*(x+i))>x1)&&((*(y+i))>y1)&&((*(x+i))<x2)&&((*(y+i))>y2)&&((*(x+i))<x3)&&((*(y+i))<y3)&&((*(x+i))>x4)&&((*(y+i))<y4)&&((*(x+i))>x1)&&((*(y+i))<y4))
outtextxy(400, 400,"POLYGON CATEGORY:CONTAIN");


  else if (((*(x+i))>x1)&&((*(y+i))<y1)&&((*(x+i))>x2)&&((*(y+i))<y2)&&((*(x+i))>x3)&&((*(y+i))>y3)&&((*(x+i))>x4)&&((*(y+i))>y4)&&((*(x+i))>x2)&&((*(y+i))>y2))
outtextxy(400, 400,"POLYGON CATEGORY:DISJOINTS");


getch();
closegraph();


}
