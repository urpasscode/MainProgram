#pragma once
#include "Figure.h"
#include "Circle.h"
#include "Triangle.h"
class Complex_Figure : public Figure {
private:
	Circle* circle;
	Triangle* triangle;
public:
	Complex_Figure(int x , int y,
		int x1, int y1, int x2, int y2, COLORREF c = RGB(0, 0, 0));
	virtual void draw();
	virtual void hide();
	void moveTo(int, int);
};