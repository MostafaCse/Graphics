#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    initwindow(1024, 800);
    setcolor(RED);
    circle(500, 330, 150);
    setfillstyle(1, RED);
    fillellipse(500, 330, 150, 150);

    setcolor(WHITE);
    setlinestyle(0, 1, 20);
    line(100,650,900,650);//base
    rectangle(120, 450, 200, 650);//left small
    rectangle(800, 450, 880, 650);//right small
    rectangle(250, 350, 330, 650);//left middle
    rectangle(670, 350, 750, 650);//right middle
    line(380,350,380,650);//center piece left line
    line(620,350,620,650);//center piece right line
    line(360,140,640,140);//center piece upper line
    line(360,140, 380, 350);
    line(640, 140, 620, 350);
    cin.get();
}
