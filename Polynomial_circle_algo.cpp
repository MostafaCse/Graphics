
#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main() {
    double radius, x, y, s, t;

    cout << "Enter radius: ";   cin >> radius;    cout<<endl;
    cout << "Enter s: ";   cin >> s;    cout<<endl;
    cout << "Enter t: ";   cin >> t;    cout<<endl;
    int limit = (int)(radius / sqrt(2));

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\tc\\bgi");

    for(x = 0; x < limit; x++){
        y = sqrt((radius * radius) - (x * x));
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
