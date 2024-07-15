#include <graphics.h>

int main()
{

	initwindow(1300, 1000);
	ellipse(500, 500, 0, 180, 200, 150);
	line(300, 500, 300, 550);
	circle(500, 350, 7);
	arc(633, 500, 131, 180, 200);
	line(432, 500, 432, 550);
	line(300, 550, 432, 550);
	line(432, 550, 605, 598);
	line(700,500,800,528);
	ellipse(500,500,355,90,100,150);
	ellipse(700, 700, 90, 151, 410, 200);
	ellipse(750,760,75, 132, 200, 240);
	getch();
	closegraph();
	return 0;
}
