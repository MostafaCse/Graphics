#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main()
{
       int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");

double r,s,t;
cout<<"radius: ";
cin>>r;
cout<<"co-ordinate: ";
cin>>s>>t;

double x=0,y=r, d=3-(2*r);
while(x<=y)
{
           putpixel(x + s, y + t, WHITE);
        putpixel(x + s, -y + t, WHITE);
        putpixel(-x + s, y + t, WHITE);
        putpixel(-x + s, -y + t, WHITE);
        putpixel(y + s, -x + t, WHITE);
        putpixel(y + s, x + t, WHITE);
        putpixel(-y + s, x + t, WHITE);
        putpixel(-y + s, -x + t, WHITE);
    if(d<0)
        d+=(4*x)+6;
    else
    {
        d+=4*(x-y)+10;
        y--;
    }
    x++;
}
     getch();
    closegraph();
}
