#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    int a[20][20];
cout<<"enter the matrix: "<<endl;
    for(int i=0; i<13; i++)
    {
        for(int j=0; j<13; j++)
            cin>>a[i][j];
    }
cout<<"matrix is: "<<endl;
  for(int i=0; i<13; i++)
    {
        for(int j=0; j<13; j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
    }
 for(int i=0; i<13; i++)
    {
        for(int j=0; j<13; j++)
           {
               if(a[i][j]==1)
                putpixel(i+50,j+50,WHITE);
               // else
                  //  putpixel(i+50,j+50,0);
           }
    }
    getch();
    closegraph();
}
