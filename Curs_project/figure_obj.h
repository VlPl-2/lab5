#pragma once
/*
#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <windowsx.h>
using namespace std;


class Figure {
private:
	
public:
	int Ox, Oy, a;
	//HWND hwnd = GetConsoleWindow();     // получаем идентификатор окна
	//HDC hdc = GetDC(hwnd);
	//RECT rt; //прямоугольник окна
	//GetClientRect(hwnd, &rt);
	//class Border {};//класс исключения

	//Вывод фигуры
	void showfig(HDC hdc)
	{
		
		HWND hwnd = GetConsoleWindow();     // получаем идентификатор окна
		HDC hdc = GetDC(hwnd);              // получаем контекст отображения

		HPEN hRedPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));// создаем красное перо
		HBRUSH hGreenBrush = CreateSolidBrush(RGB(0, 255, 0));// создаем зеленую кисть

		InvalidateRect(hwnd, NULL, 1);			// очистить окно
		RECT rt;								// rt-прямоугольник
		GetClientRect(hwnd, &rt);				// получаем размер окна					
		SelectObject(hdc, hRedPen); SelectObject(hdc, hGreenBrush);//назначаем перо и кисть для рисования
		
		POINT points[] = { { Ox, Oy },{ Ox - (a * 0.707107), Oy + (a * 0.707107) },
		{ Ox, Oy + (a * 0.707107 * 2) },{ Ox + (a * 0.707107) , Oy + (a * 0.707107) } };
		Polygon(hdc, points, 4);

		POINT bp;
		MoveToEx(hdc, Ox, Oy, &bp);
		LineTo(hdc, Ox + (a * 0.707107), Oy);
		LineTo(hdc, Ox + (a * 0.707107), Oy + (a * 0.707107 * 2));
		LineTo(hdc, Ox, Oy + (a * 0.707107 * 2));


	};

	//Скрытие фигуры
	void hidefig(HWND hwnd)
	{
		
		RECT squr;
		squr.left = Ox - (a * 0.707107);
		squr.top = Oy;
		squr.right = Ox + (a * 0.707107);
		squr.bottom = Oy + (a * 0.707107 * 2);
		InvalidateRect(hwnd, NULL, true);  // очистить окно
	};

	//конструкторы и деконструктор:
	Figure() 
	{}

	Figure(const int nOx, const int nOy, const int na)
	{
		Ox = nOx;
		Oy = nOy;
		a = na;
//		GetClientRect(hwnd, &rt);   // получаем размер окна
	}

	Figure(const Figure &source)
	{
		Ox = source.Ox;
		Oy = source.Oy;
		a = source.a;
		//GetClientRect(hwnd, &rt);   // получаем размер окна
	}

	~Figure() {}

	//Перегрузка оператора "="
	Figure& operator =(Figure &newFig)
	{
		Ox = newFig.Ox;		//Тут надо написать this.Mx?
		Oy = newFig.Oy;
		a = newFig.a;
		//GetClientRect(hwnd, &rt);   // получаем размер окна
		return *this;
	}

	//Перегрузка оператора "<<"
	friend ostream& operator <<(ostream &out, const Figure &fig)
	{
		out << "Вывод информации о фигуре:\nOx = " << fig.Ox << "; Oy = " << fig.Oy << "; a = " << fig.a << ".\n";
		return out;
	}

	//Перегрузка оператора ">>"
	friend istream& operator >> (istream &in, Figure &fig)
	{
		cout << "Введите новые координаты точки О: \n Введите координату X: ";
		in >> fig.Ox;
		cout << "\n Введите координату Y: ";
		in >> fig.Oy;
		cout << "\n Введите длину ребра квадрата: ";
		in >> fig.a;
		cout << "\n";
		//GetClientRect(hwnd, &rt);   // получаем размер окна
		return in;
	}

	
};
*/
