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
	//HWND hwnd = GetConsoleWindow();     // �������� ������������� ����
	//HDC hdc = GetDC(hwnd);
	//RECT rt; //������������� ����
	//GetClientRect(hwnd, &rt);
	//class Border {};//����� ����������

	//����� ������
	void showfig(HDC hdc)
	{
		
		HWND hwnd = GetConsoleWindow();     // �������� ������������� ����
		HDC hdc = GetDC(hwnd);              // �������� �������� �����������

		HPEN hRedPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));// ������� ������� ����
		HBRUSH hGreenBrush = CreateSolidBrush(RGB(0, 255, 0));// ������� ������� �����

		InvalidateRect(hwnd, NULL, 1);			// �������� ����
		RECT rt;								// rt-�������������
		GetClientRect(hwnd, &rt);				// �������� ������ ����					
		SelectObject(hdc, hRedPen); SelectObject(hdc, hGreenBrush);//��������� ���� � ����� ��� ���������
		
		POINT points[] = { { Ox, Oy },{ Ox - (a * 0.707107), Oy + (a * 0.707107) },
		{ Ox, Oy + (a * 0.707107 * 2) },{ Ox + (a * 0.707107) , Oy + (a * 0.707107) } };
		Polygon(hdc, points, 4);

		POINT bp;
		MoveToEx(hdc, Ox, Oy, &bp);
		LineTo(hdc, Ox + (a * 0.707107), Oy);
		LineTo(hdc, Ox + (a * 0.707107), Oy + (a * 0.707107 * 2));
		LineTo(hdc, Ox, Oy + (a * 0.707107 * 2));


	};

	//������� ������
	void hidefig(HWND hwnd)
	{
		
		RECT squr;
		squr.left = Ox - (a * 0.707107);
		squr.top = Oy;
		squr.right = Ox + (a * 0.707107);
		squr.bottom = Oy + (a * 0.707107 * 2);
		InvalidateRect(hwnd, NULL, true);  // �������� ����
	};

	//������������ � �������������:
	Figure() 
	{}

	Figure(const int nOx, const int nOy, const int na)
	{
		Ox = nOx;
		Oy = nOy;
		a = na;
//		GetClientRect(hwnd, &rt);   // �������� ������ ����
	}

	Figure(const Figure &source)
	{
		Ox = source.Ox;
		Oy = source.Oy;
		a = source.a;
		//GetClientRect(hwnd, &rt);   // �������� ������ ����
	}

	~Figure() {}

	//���������� ��������� "="
	Figure& operator =(Figure &newFig)
	{
		Ox = newFig.Ox;		//��� ���� �������� this.Mx?
		Oy = newFig.Oy;
		a = newFig.a;
		//GetClientRect(hwnd, &rt);   // �������� ������ ����
		return *this;
	}

	//���������� ��������� "<<"
	friend ostream& operator <<(ostream &out, const Figure &fig)
	{
		out << "����� ���������� � ������:\nOx = " << fig.Ox << "; Oy = " << fig.Oy << "; a = " << fig.a << ".\n";
		return out;
	}

	//���������� ��������� ">>"
	friend istream& operator >> (istream &in, Figure &fig)
	{
		cout << "������� ����� ���������� ����� �: \n ������� ���������� X: ";
		in >> fig.Ox;
		cout << "\n ������� ���������� Y: ";
		in >> fig.Oy;
		cout << "\n ������� ����� ����� ��������: ";
		in >> fig.a;
		cout << "\n";
		//GetClientRect(hwnd, &rt);   // �������� ������ ����
		return in;
	}

	
};
*/
