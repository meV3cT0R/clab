#include <graphics.h>
#include <stdio.h>
#include <conio.h>
/*
WAP to draw a rectangle with red and a circle with yellow color.
*/
void main() {
	int gd = DETECT, gm;
	clrscr();
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setcolor(RED);
	rectangle(50,50,200,100);
	setcolor(YELLOW);
	circle(300,50,50);
	getch();
	closegraph();
}