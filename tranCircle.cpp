#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main()
{
       int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");
    double x,y,r;
    cout<<"co-ordinate: ";
    cin>>x>>y;
    cout<<"radius: ";
    cin>>r;
    double x1,y1;
    for(int i=0; i<=360; i+=1)
    {
        x1=r*cos(i);
        y1=r*sin(i);
        putpixel(x+x1,y+y1,1);
    }
       getch();
    closegraph();
}
