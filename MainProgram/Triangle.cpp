#include "Triangle.h"
#include <fstream>
void Triangle::draw()
{
	HPEN pen;
	HBRUSH brush;
	double radius = (x2 - x1) / 2;
	if (((cx - radius) <= rt.left) ||
		((cx + radius) >= rt.right) ||
		(cy  <= rt.top) ||
		(y1 >= rt.bottom)
		) throw Border();
	pen = CreatePen(PS_SOLID, 2, RGB(0, 128, 0)); //темно-зеленое перо
	brush = CreateSolidBrush(color);
	SelectObject(hdc, pen);
	SelectObject(hdc, brush);
	POINT points[3];
	points[0] = { cx,cy };
	points[1] = { x1,y1 };
	points[2] = { x2,y2 };
	
	
	Polygon(hdc, points, 3);
	DeleteObject(pen);
	DeleteObject(brush);
}
void Triangle::hide() {
	RECT rt = { cx - radius - 1, cy - radius - 1, cx + radius + 1, cy + radius + 1 };
	InvalidateRect(hwnd, &rt, 0);
}
void Triangle::moveTo(int newx, int newy) {
	Figure::moveTo(newx, newy);
}