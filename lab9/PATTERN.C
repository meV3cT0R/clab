#include <graphics.h>
#include <stdio.h>


/*
WAP to draw a square and a circle and fill a pattern in both of them.
*/
void main() {
int gd = DETECT, gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

setfillstyle(7,3);
rectangle(100,100,200,200);
floodfill(150,150,15);

setfillstyle(8,4);
circle(400,150,50);
floodfill(400,150,15);
getch();
closegraph();
}