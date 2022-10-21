#pragma once
#include "figure_object.h"

class rhombus : public Figure
{
private:
	int a;
public:
	rhombus(int x = 0, int y = 0, int na = 0, COLORREF c = RGB(0, 0, 0));
	~rhombus();

	//���������� ��������� "<<"
	friend ostream& operator <<(ostream &out, const rhombus &fig)
	{
		out << "����� ���������� � ������:\nOx = " << fig.Ox << "; Oy = " << fig.Oy << "; a = " << fig.a << ".\n";
		return out;
	}
	//���������� ��������� ">>"
	friend istream& operator >> (istream &in, rhombus &fig)
	{
		cout << "������� ����� ���������� ����� �: \n ������� ���������� X: ";
		in >> fig.Ox;
		cout << "\n ������� ���������� Y: ";
		in >> fig.Oy;
		cout << "\n ������� ����� ����� �����: ";
		in >> fig.a;
		cout << "\n";
		return in;
	}

	//�������, ������������ ������
	void showfig();
	//�������, ���������� ������
	void hidefig();
};

