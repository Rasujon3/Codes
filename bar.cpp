#include<graphics.h>
#include<iostream>
using namespace std;

int main(){

    int gd=DETECT, gm;
    initgraph(&gd, &gm, " ");

    int x1=280,y1=250,x2=380,y2=250,x3=330,y3=150;
    int a1,b1,a2,b2,a3,b3;
    int sx=2,sy=2;
    int mx,my;

    // varkendro ber krbo
    mx = (x1+x2+x3)/3;
    my = (y1+y2+y3)/3;

    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    a1=mx+(x1-mx)*sx;
    b1=my+(y1-my)*sy;

    a2=mx+(x2-mx)*sx;
    b2=my+(y2-my)*sy;

    a3=mx+(x3-mx)*sx;
    b3=my+(y3-my)*sy;

    setcolor(RED);
    line(a1,b1,a2,b2);
    line(a2,b2,a3,b3);
    line(a3,b3,a1,b1);



    getch();
    closegraph();



}
