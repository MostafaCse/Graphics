#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
     int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
  /*  double x,y,s,e,r;
    cout<<"enter the co-ordinate: ";
    cin>>x>>y;
    cout<<"starting and end point: ";
    cin>>s>>e;
    cout<<"radius: ";
    cin>>r;
    int limit = (int)(r / sqrt(2));
    for(int i=s; i<=e; i++)
    {
        double x=limit*cos(i)+x;
        double y=limit*sin(i)+y;
        putpixel(x,y,i);
    }
    */
    line(100,25,50,130);
     line(100,25,150,130);
     arc(100,130,180,360,50);
     getch();
    closegraph();
}
