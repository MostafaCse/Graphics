#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

void floodFill(int x, int y, int old, int fill)
{
 int current;
 current=getpixel(x,y);
 if(current==old)
 {
  putpixel(x,y,fill);
  //delay(1);
  floodFill(x+1,y,old,fill);
  floodFill(x-1,y,old,fill);
  floodFill(x, y+1,old,fill);
  floodFill(x,y-1,old,fill);
 }
}

int main()
{
    int o=0;


    initwindow(1024, 720);
    rectangle(60, 60, 150,300);
    floodFill(125,125,o,6);        //GREEn


    cin.get();
}
