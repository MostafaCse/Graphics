#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
   // detectgraph(&gd,&gm);

     int x1=100,y1=200,x2=400,y2=300;
  // cout<<"enter the first co-ordinate: ";
   // int x1,y1,x2,y2;
 // cin>>x1>>y2;
  //  cout<<"enter the second co-ordinate: ";
  //  cin>>x2>>y2;

    double m,b,y,x;
    m=(y2-y1)/(x2-x1);
    b=y1-(m*x1);
    if(m<=1)
    {
        for(int i=x1; i<=x2; i++)
        {
            y=(m*i)+b;
            putpixel(i,y,WHITE);
        }
    }
    else
    {
        for(int i=y1; i<=y2; i++)
        {
            x=(i-b)/m;
            putpixel(x,i,WHITE);
        }
    }
    getch();
    closegraph();
    return 0;
}
