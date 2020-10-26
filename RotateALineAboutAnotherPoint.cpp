#include<iostream>
#include<graphics.h>
#include<cmath>
using namespace std;
int main()
{
    initwindow(1024,700);
    int x,y,x1,y1,x2,y2,h,k,xp1,yp1,xp2,yp2;
    float c,t;
    cout<<"enter x-cordinate of h: ";
    cin>>h;
    cout<<"enter y-cordinate of k: ";
    cin>>k;
    cout<<"enter starting x-cordinate of rotating line : ";
    cin>>x1;
    cout<<"enter starting y-cordinate of rotating line : ";
    cin>>y1;

    cout<<"enter ending x-cordinate of rotating line : ";
    cin>>x2;
    cout<<"enter ending y-cordinate of rotating line : ";
    cin>>y2;
    cout<<"enter angle : ";
    cin>>t;
    c= 0.01745329252;
    t=c*t;

        xp1=x1*cos(t)-y1*sin(t)-h*cos(t)+k*sin(t)+h;
        yp1=x1*sin(t)+y1*cos(t)-h*sin(t)-k*cos(t)+k;

        xp2=x2*cos(t)-y2*sin(t)-h*cos(t)+k*sin(t)+h;
        yp2=x2*sin(t)+y2*cos(t)-h*sin(t)-k*cos(t)+k;

        //line(h,k,x,y);
        //line(h,k,x1,y1);
        putpixel(xp1,yp1,15);
        putpixel(xp2,yp2,15);
        line(x1,y1,x2,y2);
        line(xp1,yp1,xp2,yp2);


    getch();
    cin.get();

}


