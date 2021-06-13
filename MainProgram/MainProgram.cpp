// MainProgram.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <windowsx.h>
#include "Complex_Figure.h"
#include <clocale>
using namespace std;
const int NotUsed = system("color F0");
int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleTitle((LPCWSTR)L"20VP1_20_Circle_and_Triangle");
	Figure* circle = new Circle(50,300, 10, 350, 90, 350, RGB(255, 255, 0));
	Figure* triangle = new Triangle(50, 300, 10, 350, 90, 350, RGB(255, 110, 180));
	//Figure* complex = new Complex_Figure(200, 400, 60, RGB(255, 0, 0));
	try
	{
		circle->file_read();
		circle->file_write();
		circle->draw();
		triangle->draw();
		//complex->draw();
		//system("pause");
		int newx, newy,newx1,newy1,newx2,newy2;
		cout << "Введите новые координаты сложной фигуры" << endl;
		cin >> newx >> newy>> newx1>>newy1;
		//complex->moveTo(newx, newy);
		circle->moveTo(450, 100);
		triangle->moveTo(100, 400);
		//system("pause");
		//circle->hide();
		//cout << "Фигура спрятана";
	}
	catch (Figure::Border) {
		cout << "Breaking window borders" << endl;
	}
	delete circle;
	delete triangle;
	//delete complex;
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
