#include<iostream>
#include<graphics.h>
#include<cmath>
using namespace std;
int main()
{
    initwindow(1024,700);
    int x,y,t,x1,y1;
    cout<<"enter x-cordinate : ";
    cin>>x;
    cout<<"enter y-cordinate : ";
    cin>>y;
    cout<<"enter angle : ";
    cin>>t;

        x1=x*cos(t)-y*sin(t);
        y1=x*sin(t)+y*cos(t);
        line(0,0,x,y);
        line(0,0,x1,y1);
        putpixel(x1,y1,15);

   getch();
    cin.get();

}
