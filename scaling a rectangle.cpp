#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<math.h>

int x11,y11,x2,y2,x3,y3,x4,y4,mx,my;
void draw();
void scale();
int main(){
    int gd=DETECT,gm;
    int c;
    initgraph(&gd,&gm,"..\\bgi");
    printf("Enter the 1st point for the triangle:");
    scanf("%d%d",&x11,&y11);
    printf("Enter the 2nd point for the triangle:");
    scanf("%d%d",&x2,&y2);
    printf("Enter the 3rd point for the triangle:");
    scanf("%d%d",&x3,&y3);
    printf("Enter the 3rd point for the triangle:");
    scanf("%d%d",&x4,&y4);
    //draw();
    scale();
}

void draw(){
    line(x11,y11,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x4,y4);
    line(x4,y4,x11,y11);
}
void scale(){
    int x,y,a1,a2,a3,a4,b1,b2,b3,b4;
    int mx,my;
    printf("Enter the scalling coordinates:");
    scanf("%d%d",&x,&y);
    mx=(x11+x2+x3+x4)/4;
    my=(y11+y2+y3+x4)/4;

    a1=mx+(x11-mx)*x;
    b1=my+(y11-my)*y;
    a2=mx+(x2-mx)*x;
    b2=my+(y2-my)*y;
    a3=mx+(x3-mx)*x;
    b3=my+(y3-my)*y;
    a4=mx+(x4-mx)*x;
    b4=my+(y4-my)*y;
    line(a1,b1,a2,b2);
    line(a2,b2,a3,b3);
    line(a3,b3,a1,b1);
    line(a1,b1,a4,b4);
    draw();
    getch();
}

