#include <graphics.h>

void main() {
	int gd = DETECT ,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	ellpise(250,250,0,360,100,50);
	line(50,50,100,100);
	getch();
	closegraph();
}