#pragma once
#include <iostream>
#include <windows.h>
#include <windowsx.h>
#include <string>
using namespace std;
class Figure
{
public:
	Figure();
	virtual ~Figure() = 0;
	virtual void draw() = 0;
	virtual void hide() = 0;
	virtual void moveTo(int newX, int newY);
	void file_read();
	void file_write();
	class Border {};//класс исключения
protected:
	HWND hwnd;
	HDC hdc;
	RECT rt; //прямоугольник окна
	COLORREF color;
	int cx, cy, radius, x1,y1,x2,y2;
};