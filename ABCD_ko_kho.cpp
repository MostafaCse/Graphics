#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    initwindow(1024, 700);
   // settextstyle(8, HORIZ_DIR, 10);
   // outtextxy(70, 70, "A  B");

    circle(300,300, 20);//kho
    arc(330,300, 180, 320, 50);
   line(400, 300, 280,430);
   line(280,430, 450, 550);
   line(450, 550, 450, 280);
   line(450,300,470 ,300 );

   line(550, 280, 800, 280);//matra ko
   line(700, 280, 700, 550);//lomba khara line
   line(700, 280, 550, 415);
    line( 550, 415, 700, 550);

    arc(700,330, 340, 90, 50);
    circle(730,335, 20);
    cin.get();
}
