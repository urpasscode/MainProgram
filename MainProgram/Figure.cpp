#include "Figure.h"
#include <windows.h>
#include <windowsx.h>
#include <fstream>
Figure::Figure()
{
	hwnd = 0;
	if ((hwnd = GetConsoleWindow()) == 0) // �������� ������������� ����
	{
		cout << "Window not found!!!" << endl;
		return;
	}
	if ((hdc = GetDC(hwnd)) == 0) // �������� �������� �����������
	{
		cout << "Error!!!" << endl;
		return;
	}
	GetClientRect(hwnd, &rt); // �������� ������ ����
}
Figure::~Figure()
{
	ReleaseDC(hwnd, hdc);
}
void Figure::file_read() {
	ifstream fin;
	fin.open("file_read.txt");
	if (!fin.is_open())
		cout << "���� �� ����� ���� ������";
	fin >> cx >> cy >> radius;
	cout << "�� ����� ��������: " << endl << cx << endl << cy << endl << radius <<
		endl;
	fin.close();
}
void Figure::file_write() {
	ofstream fout;
	fout.open("file_write.txt");
	fout << cx << cy << radius << endl;
	fout.close();
}
void Figure::moveTo(int newX, int newY) {
	hide();
	cx = newX; cy = newY;
	draw();
}
void Figure::hide() {
	RECT rt = { cx - radius - 1, cy - radius - 1, cx + radius + 1, cy + radius + 1 };
	InvalidateRect(hwnd, &rt, 0);
}