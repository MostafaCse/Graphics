#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    float x,y1,minor,major;
    cout<<"enter the co-ordinate: ";
    cin>>x>>y1;
    cout<<"enter the major axies: ";
    cin>>major;
        cout<<"enter the minor axies: ";
    cin>>minor;

    for(int i=0; i<=major; i++)
    {
        float y=minor*sqrt(1-((i*i)/(major*major)));
        putpixel(i+x,y+y1,RED);


        putpixel(i+x,-y+y1,RED);
        putpixel(-i+x,-y+y1,RED);
        putpixel(-i+x,y+y1,RED);
    }
    getch();
    closegraph();
    return 0;
}
