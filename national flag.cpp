#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int driver,mode;
    driver=DETECT;
    mode=0;
    initgraph(&driver,&mode,"c:\\tc\\bgi");
    setbkcolor(WHITE);
    setcolor(WHITE);

    rectangle(150,40,450,180);
    setfillstyle(1,GREEN);
    floodfill(160,50,WHITE);

    setcolor(WHITE);
    bar(130,450,160,460);
    setfillstyle(1,GREEN);
    floodfill(160,50,WHITE);

    setcolor(WHITE);
    circle(300,110,55);
    setfillstyle(1,RED);
    floodfill(320,120,WHITE);

    getch();
}
