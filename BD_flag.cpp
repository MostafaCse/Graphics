#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    initwindow(1024, 700);
    setfillstyle(1, GREEN);
    bar(800, 180, 180, 600);
   setcolor(RED);
   circle(440, 400, 100);
  setfillstyle(1, RED);
    fillellipse(440, 400, 100, 100);
    cin.get();
}
