#include<graphics.h>
#include<conio.h>
#include<stdio.h>
main()
{
   int gd = DETECT, gm, max_x;

   initgraph(&gd, &gm, " ");

    //show text in the upper-middle
   outtextxy(275,0,"Flag");

    rectangle(150,40,450,180);
    setfillstyle(1,GREEN);
    floodfill(160,50,WHITE);

    circle(300,110,55);
    setfillstyle(1,RED);
    floodfill(310,120,WHITE);

    bar(135, 40, 155, 400);
    setfillstyle(1,BLUE);





   getch();
   closegraph();
   return 0;
}

