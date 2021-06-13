#include "Circle.h"
#include <fstream>
void Circle::draw()
{
	HPEN pen;
	HBRUSH brush;
	double radius = (x2 + x1) / 2;
	if ((x1 <= rt.left) ||
		(x2 >= rt.right) ||
		(y1 <= rt.top) ||
		((y2 + radius)>= rt.bottom)
		) throw Border();
	pen = CreatePen(PS_SOLID, 2, RGB(0, 128, 0));
	brush = CreateSolidBrush(color);
	SelectObject(hdc, pen);
	SelectObject(hdc, brush);
	//Ellipse(hdc, cx - radius, cy - radius, cx + radius, cy + radius);
	Pie(hdc, x1, y1, ((x1+x2)/2), (y2 + (x2 - x1) / 2), x1, y1, x2, y2);
	DeleteObject(pen);
	DeleteObject(brush);
}
void Circle::hide()
{
	Figure::hide();
}
void Circle::moveTo(int newx, int newy) {
	Figure::moveTo(newx, newy);
}