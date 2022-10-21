#include "stdafx.h"
#include "figure_object.h"
using namespace std;

//Конструктор
Figure::Figure()
{
	hwnd = 0;

	if ((hwnd = GetConsoleWindow()) == 0) // получаем идентификатор окна
	{
		cout << "Ошибка получения окна для отображения" << endl;
		return;
	}
	if ((hdc = GetDC(hwnd)) == 0)       // получаем контекст отображения
	{
		cout << "Ошибка получения контекста отображения" << endl;
		return;
	}
	GetClientRect(hwnd, &rt);   // получаем размер окна
}

//Деструктор
Figure::~Figure()
{
	ReleaseDC(hwnd, hdc);
}

//Функция показа фигуры
void Figure::showfig() 
{
	cout << "Ошибка: для данного типа фигуры показ изображения невозможен" << endl;
	return;
};

//Функция скрытия фигуры
void Figure::hidefig() 
{
	cout << "Ошибка: для данного типа фигуры скрытие изображения невозможно" << endl;
	return;
};

//Функция перемещения фигуры
void Figure::moveTo(int newX, int newY) {
	hidefig();
	Ox = newX; Oy = newY;
	showfig();
}
