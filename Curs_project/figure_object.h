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

	//���������� ��������� <<
	friend ostream& operator <<(ostream &out, const Figure &fig)
	{
		out << "����� ���������� � ������:\nOx = " << fig.Ox << "; Oy = " << fig.Oy << "; color = " << fig.color << ".\n";
		return out;
	}
	//���������� ��������� ">>"
	friend istream& operator >> (istream &in, Figure &fig)
	{
		cout << "������� ���������� ����� �: \n ������� ���������� X: ";
		in >> fig.Ox;
		cout << " ������� ���������� Y: ";
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
