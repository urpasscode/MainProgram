#include "Complex_Figure.h"
#include <fstream>
Complex_Figure::Complex_Figure(int x, int y, int x1, int y1, int x2, int y2, COLORREF c)
{
	this->x1 = x1;
	this->x2 = x2;
	this->y1 = y1;
	this->y2 = y2;
	cx = x; cy = y;
	color = c;
	circle = new Circle(cx, cy, x1, y1, x2, y2,color);
	triangle = new Triangle(cx, cy,  x1, y1, x2, y2, color);
}
void Complex_Figure::draw()
{
	circle->draw();
	triangle->draw();
}
void Complex_Figure::hide()
{
	circle->hide();
	triangle->hide();
}
void Complex_Figure::moveTo(int newx, int newy) {
	circle->moveTo(newx, newy);
	triangle->moveTo(newx, newy);
}