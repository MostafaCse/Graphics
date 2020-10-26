#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
int gd=DETECT,gm;
int i,xmid,ymid,x1,y1,x2,y2,x3,y3,x,y,dy,dx,p,gap=50,temp;
float m,sxscale,syscale;
char str[5];
initgraph(&gd,&gm,"..\\bgi");

printf("Enter first co-ords of the triangle ( eg : 50 50 ) \n");
scanf("%d %d",&x1,&y1);
printf("Enter second co-ords of the triangle ( eg : 100 100 )\n");
scanf("%d  %d",&x2,&y2);
printf("Enter third co-ords of the triangle ( eg : 150 150 ) \n");
scanf("%d  %d",&x3,&y3);

xmid= getmaxx()/2;
ymid= getmaxy()/2;
line(5,ymid,getmaxx()-5,ymid);
line(xmid+3,5,xmid+3,getmaxy()-5);

for( i= xmid+gap;i<getmaxx()-5;i=i+gap)
{
outtextxy(i,ymid-3,"|");
itoa(i-xmid,str,10);
outtextxy(i,ymid+3,str);
}
for( i= ymid-gap;i>5;i=i-gap)
{
outtextxy(xmid,i,"-");
itoa(ymid-i,str,10);
outtextxy(xmid+5,i,str);

}
for( i= xmid-gap;i>5;i=i-gap)
{
outtextxy(i,ymid-3,"|");
itoa(-(xmid-i),str,10);
outtextxy(i-6,ymid+3,str);

}
for( i= ymid+gap;i<getmaxy()-5;i=i+gap)
{
outtextxy(xmid,i,"-");
itoa(-(i-ymid),str,10);
outtextxy(xmid+8,i,str);
}
line(x1+xmid,ymid-y1,x2+xmid,ymid-y2);
line(x2+xmid,ymid-y2,x3+xmid,ymid-y3);
line(x3+xmid,ymid-y3,x1+xmid,ymid-y1);
printf("\nEnter the scaling factor for x axis");
scanf("%f",&sxscale);
printf("\nEnter the scaling factor for y axis");
scanf("%f",&syscale);

setcolor(0);  // to hide drawn triangle
line(x1+xmid,ymid-y1,x2+xmid,ymid-y2);
line(x2+xmid,ymid-y2,x3+xmid,ymid-y3);
line(x3+xmid,ymid-y3,x1+xmid,ymid-y1);
setcolor(5);

line(x1*sxscale+xmid,ymid-y1*syscale,x2*sxscale+xmid,ymid-y2*syscale);
line(x2*sxscale+xmid,ymid-y2*syscale,x3*sxscale+xmid,ymid-y3*syscale);
line(x3*sxscale+xmid,ymid-y3*syscale,x1*sxscale+xmid,ymid-y1*syscale);

getch();
closegraph();
return 0;
}

