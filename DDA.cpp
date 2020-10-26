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

 double m=(y2-y1)/(x2-x1),y=y1,x=x1;
 cout<<m<<endl;
 if(m<=1)
 {
     for(int i=x1; i<=x2; i++)
     {
         y+=m;
         putpixel(i,y,1);
         cout<<i<< " "<<y<<endl;
     }
 }
 else
 {
     for(int i=y1; i<=y2; i++)
     {
         x+=(1/m);
         putpixel(x,i,1);
         cout<<x<<" "<<i<<endl;
     }
 }
 getch();
 closegraph();

}
