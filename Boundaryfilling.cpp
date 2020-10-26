#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

void boundaryfill(int x,int y,int f_color,int b_color)
{
    if(getpixel(x,y)!=b_color && getpixel(x,y)!=f_color)
    {
        putpixel(x,y,f_color);
        //delay(0);
        boundaryfill(x+1,y,f_color,b_color);
        boundaryfill(x,y+1,f_color,b_color);
        boundaryfill(x-1,y,f_color,b_color);
        boundaryfill(x,y-1,f_color,b_color);
    }
}

int main()
{
    int o=0;
    int x,y;
    x=370;
    y=370;


    initwindow(1024, 720);
    setlinestyle(0, 0, 5);
    circle(350, 350, 80);
    boundaryfill(x,y,5,15);


    cin.get();
}
