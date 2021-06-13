#pragma once
#include "Figure.h"
class Triangle :public Figure {
public:
	Triangle(int x, int y, int x1, int y1, int x2, int y2, COLORREF c)
	{
		cx = x; cy = y;
		color = c;
		this->x1 = x1;
		this->x2 = x2;
		this->y1 = y1;
		this->y2 = y2;
	}
	void draw();
	void hide();
	void moveTo(int, int);
};