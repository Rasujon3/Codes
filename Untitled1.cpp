#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
    // graphics driver = detect & graphics mood
   int gd = DETECT, gm, max_x;
   initgraph(&gd, &gm, " "); // path
    // initialization
    int x1=150, y1 = 250, x2 = 250,y2=150,x3=350,y3=250;
    int a1,b1,a2,b2,a3,b3;
    int x,y,p=x3,q=y3;

    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    // angle er value nebo, radian e
    float angle;
    cout<<"Enter the angle of rotation: ";
    cin>>angle;

    angle = (angle * 3.1416)/180;

    a1=p+(x1-p)*cos(angle)-(y1-q)*sin(angle);
    b1=q+(x1-p)*sin(angle)+(y1-q)*cos(angle);

    a2=p+(x2-p)*cos(angle)-(y2-q)*sin(angle);
    b2=q+(x2-p)*sin(angle)+(y2-q)*cos(angle);

    a3=p+(x3-p)*cos(angle)-(y3-q)*sin(angle);
    b3=q+(x3-p)*sin(angle)+(y3-q)*cos(angle);

    setcolor(RED);
    line(a1,b1,a2,b2);
    line(a2,b2,a3,b3);
    line(a3,b3,a1,b1);


   getch();
   closegraph();
   return 0;
}
