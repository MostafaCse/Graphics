#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main() {
    double radius, x, y, s = 200, t = 200;

    cout << "Enter radius: ";   cin >> radius;    cout<<endl;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\tc\\bgi");

    for(double i = 0; i <= 45; i += 0.2){
        x = radius * cos(i);
        y = radius * sin(i);

        putpixel(x + s, y + t, WHITE);
        putpixel(x + s, -y + t, WHITE);
        putpixel(-x + s, y + t, WHITE);
        putpixel(-x + s, -y + t, WHITE);
        putpixel(y + s, -x + t, WHITE);
        putpixel(y + s, x + t, WHITE);
        putpixel(-y + s, x + t, WHITE);
        putpixel(-y + s, -x + t, WHITE);
    }

    getch();
    closegraph();
}

