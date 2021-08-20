#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<stdio.h>
main()
{
   int gd = DETECT, gm, max_x;
   initgraph(&gd, &gm, " ");
    // |m| <= 1
    /*
   int x1 = 100, y1 = 100, x2=200, y2=200, x,y;
   x=x1;
   float yf=y1,m=(y2-y1)/(x2-x1);

   while(x<=x2){
    y=floor(yf+0.5);
    putpixel(x,y,RED);
    x++;
    yf=yf+m;


   }
   */

       // |m| > 1
   float x1 = 100, y1 = 100, x2=200, y2=250, x,y;
   y=y1;
   float xf=x1,minv=(x2-x1)/(y2-y1);

   while(y<=y2){

    x=floor(xf+0.5);
    putpixel(x,y,RED);

    xf=xf+minv;
    y++;


   }



   getch();
   closegraph();
   return 0;
}
