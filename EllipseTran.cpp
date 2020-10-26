#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main()
{
         int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");

    float s,t,a,b;
    cout<<"co-ordinate: ";
    cin>>s>>t;
    cout<<"major axis and minor axis: ";
    cin>>a>>b;

  for(int i=0; i<=360; i++)
  {
      float x=a*cos(i)+s;
      float y=b*sin(i)+t;
      putpixel(x,y,RED);
  }
     getch();
    closegraph();
}

