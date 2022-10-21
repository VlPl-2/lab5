#pragma once
#include <iostream>
#include <windows.h>
#include <windowsx.h>
using namespace std;

class Figure
{
public:
	Figure();
	~Figure();
	virtual void showfig();
	virtual void hidefig();
	 void moveTo(int newX, int newY);

	class Border {};

	//перегрузка оператора <<
	friend ostream& operator <<(ostream &out, const Figure &fig)
	{
		out << "Вывод информации о фигуре:\nOx = " << fig.Ox << "; Oy = " << fig.Oy << "; color = " << fig.color << ".\n";
		return out;
	}
	//Перегрузка оператора ">>"
	friend istream& operator >> (istream &in, Figure &fig)
	{
		cout << "Введите координаты точки О: \n Введите координату X: ";
		in >> fig.Ox;
		cout << " Введите координату Y: ";
		in >> fig.Oy;
		cout << "\n";
		return in;
	}
protected:
	HWND hwnd;
	HDC hdc;
	COLORREF color;
	int Ox, Oy;
	RECT rt;
};
