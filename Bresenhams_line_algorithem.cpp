#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
      int gd=DETECT,gm;
    initgraph(&gm,&gd," ");

        double x1,x2,y1,y2;
    cout<<"enter the first co-ordinate : ";
    cin>>x1>>y1;
     cout<<"enter the 2nd co-ordinate : ";
   cin>>x2>>y2;

   int x=x1,y=y1,dx=x2-x1,dy=y2-y1;
   int dt=2*(dy-dx), ds=2*dy, d=(2*dy)-dx;

   putpixel(x,y,1);

   while(x<x2)
   {
       x++;
       if(d<0)
        d+=ds;
       else
       {
           y++;
           d+=dt;
       }
       putpixel(x,y,1);
   }
    getch();
 closegraph();

}
