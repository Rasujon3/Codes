#include<graphics.h>
#include<iostream>
using namespace std;

int main(){

    int gd=DETECT, gm,x,y;
    initgraph(&gd, &gm, " ");
    /* Heading deuya holo */
    outtextxy(200,10, "PIE CHART");

    /* koyta circle hobe,seta thik kora
       pie chart ta middle e hobe,
       so middle point ta ber krte hobe
     */
     x = getmaxx()/2;
     y = getmaxy()/2;
      /*cout<<x<<" "<<y; */   //2001

      /*pie slice akbo */
      setfillstyle(1,RED);
      pieslice(x,y,0,72,120);
      outtextxy(x+125,y-70, "FOOD");

      setfillstyle(1,GREEN);
      pieslice(x,y,73,144,120);
      outtextxy(x-70,y-135, "rent");

      setfillstyle(1,BLUE);
      pieslice(x,y,145,216,120);
      outtextxy(x-190,y, "savings");

      setfillstyle(1,YELLOW);
      pieslice(x,y,217,288,120);
      outtextxy(x-70,y+130, "TREATMENT");

      setfillstyle(1,WHITE);
      pieslice(x,y,289,360,120);
      outtextxy(x+100,y+90, "CLOTH");







    getch();
    closegraph();



}
