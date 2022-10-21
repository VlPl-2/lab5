#pragma once
#include "figure_object.h"

class rhombus : public Figure
{
private:
	int a;
public:
	rhombus(int x = 0, int y = 0, int na = 0, COLORREF c = RGB(0, 0, 0));
	~rhombus();

	//Перегрузка оператора "<<"
	friend ostream& operator <<(ostream &out, const rhombus &fig)
	{
		out << "Вывод информации о фигуре:\nOx = " << fig.Ox << "; Oy = " << fig.Oy << "; a = " << fig.a << ".\n";
		return out;
	}
	//Перегрузка оператора ">>"
	friend istream& operator >> (istream &in, rhombus &fig)
	{
		cout << "Введите новые координаты точки О: \n Введите координату X: ";
		in >> fig.Ox;
		cout << "\n Введите координату Y: ";
		in >> fig.Oy;
		cout << "\n Введите длину ребра ромба: ";
		in >> fig.a;
		cout << "\n";
		return in;
	}

	//Функция, отображающая фигуру
	void showfig();
	//Функция, скрывающая фигуру
	void hidefig();
};

