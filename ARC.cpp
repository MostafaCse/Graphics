#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
using namespace std;
int main()
{
      int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");
    double x,y,s=0,t=0,a=100,b=100;

    for(int i=0; i<=360; i++)
    {
        double theta=(3.1416/180)*i;
        x=a*cos(theta)+s;
        y=b*sin(theta)+t;
        putpixel(x,y,9);
    }
       getch();
    closegraph();
}
