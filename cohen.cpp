#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void draw_line(float,float,float,float);
int linecode(int,int,int,int,int,int);

main()
{
 int driver,mode;
 float x1,y1,x2,y2;
 int Xu,Yu,Xb,Yb;
 int code,code1,code2;
 float slope,x,y;


 printf("Enter the two end-points of the line:");
 printf("\nx1 =");
 scanf("%f",&x1);
 printf("y1 =");
 scanf("%f",&y1);
 printf("x2 =");
 scanf("%f",&x2);
 printf("y2 =");
 scanf("%f",&y2);

 printf("\n\nEnter the upper-left and bottom-right vertices of the clip rectangle");
 printf("\nEnter the upper-left vertex of the rectangle\n");
 printf("Xu =");
 scanf("%d",&Xu);
 printf("Yu =");
 scanf("%d",&Yu);
 printf("\nEnter the bottom-right vertex of the rectangle\n");
 printf("Xb =");
 scanf("%d",&Xb);
 printf("Yb =");
 scanf("%d",&Yb);



 driver = DETECT;
 initgraph(&driver,&mode,"\\tc\\bgi"); //The path may be different in your case
 printf("Line....");
 draw_line(x1,y1,x2,y2);
 getch();

 printf("Clipping area....");
 rectangle(Xu,Yu,Xb,Yb);
 getch();

 printf("Clipped line....");
 rectangle(Xu,Yu,Xb,Yb);

 code1 = linecode(x1,y1,Xu,Yu,Xb,Yb);
 code2 = linecode(x2,y2,Xu,Yu,Xb,Yb);
 while(1)
	{
	 if((code1|code2) == 0)// Accept
	   {
	    draw_line(x1,y1,x2,y2);
	    break;
	   }
	 if(code1&code2)// Reject
		break;
	 if(code1 != 0)
		code = code1;
	 else
		code = code2;
	 slope = (y2-y1)/(x2-x1);

	 if(code & 8)
	   {
		x = x1 + (1/slope) * (Yu - y1);
		y = Yu;
	   }
       if(code & 4)
	   {
		 x = x1 + (1/slope) * (Yb - y1);
		 y = Yb;
	   }
	if(code & 2)
	  {
	 y = y1 + slope * (Xb - x1);
		 x = Xb;
	  }
	if(code & 1)
	  {
		 y = y1 + slope * (Xu - x1);
		 x = Xu;
	  }
	if(code == code1)
	  {
		 x1 = x;
		 y1 = y;
		 code1 = linecode(x1,y1,Xu,Yu,Xb,Yb);
	  }
	if(code == code2)
	  {
		 x2 = x;
		 y2 = y;
		 code2 = linecode(x2,y2,Xu,Yu,Xb,Yb);
	  }
     }
 getch();
 closegraph();
}

//Use DDA algorithm to draw the line
void draw_line(float x1,float y1,float x2,float y2)
{
 float m,c;
 float x,y,x0,y0;
 float dy,dx;

 m = (y2 - y1)/(x2 - x1);

 if(fabs(m) <= 1)
	 {
	  if(x1 < x2) //line drawn left to right
	    {
		y0 = y1;
		for(x=x1;x<=x2;x++)
		   {
		    y = y0 + m;
                putpixel(x,y,WHITE);
		    y0 = y;
		   }
		}
	   else //line drawn right to left
		{
		 y0 = y1;
		 for(x=x1;x>=x2;x--)
		    {
			y = y0 - m;
			putpixel(x,y,WHITE);
			y0 = y;
		    }
		}
	 }
 else //fabs(m)>1
	 {
	  if(y1 < y2) //Line drawn top to bottom
	    {
		x0 = x1;
		for(y=y1;y<=y2;y++)
		   {
		    x = x0 + 1/m;
		    putpixel(x,y,WHITE);
		    x0 = x;
		   }
	   }
	  else //line drawn bottom to top
	   {
	    x0 = x1;
	    for(y=y1;y>=y2;y--)
		 {
		  x = x0 - 1/m;
		  putpixel(x,y,WHITE);
		  x0 = x;
		 }
	   }
 }
}

int linecode(int x,int y,int x1,int y1,int x2,int y2)
{
 int lncode = 0;
 if(y<y1)
    lncode |= 8;
 if(y>y2)
    lncode |= 4;
 if(x>x2)
    lncode |= 2;
 if(x<x1)
    lncode |= 1;
 return lncode;


}
