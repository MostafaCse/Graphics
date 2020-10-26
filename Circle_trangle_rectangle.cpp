#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gm,&gd," ");
    circle(100,200,50);
    line(300,100,200,200);
    line(300,100,400,200);
    line(200,200,400,200);
    rectangle(250,450,450,250);
    getch();
    closegraph();
}
