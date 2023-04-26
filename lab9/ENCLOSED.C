#include <graphics.h>
/*
WAP to draw a circle enclosed inside a rectangle.
*/
void main() {
int gd = DETECT, gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
rectangle(100,100,400,250);
circle(250,175,50);
getch();
closegraph();
}