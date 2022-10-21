#include "stdafx.h"
#include "figure_object.h"
using namespace std;

//�����������
Figure::Figure()
{
	hwnd = 0;

	if ((hwnd = GetConsoleWindow()) == 0) // �������� ������������� ����
	{
		cout << "������ ��������� ���� ��� �����������" << endl;
		return;
	}
	if ((hdc = GetDC(hwnd)) == 0)       // �������� �������� �����������
	{
		cout << "������ ��������� ��������� �����������" << endl;
		return;
	}
	GetClientRect(hwnd, &rt);   // �������� ������ ����
}

//����������
Figure::~Figure()
{
	ReleaseDC(hwnd, hdc);
}

//������� ������ ������
void Figure::showfig() 
{
	cout << "������: ��� ������� ���� ������ ����� ����������� ����������" << endl;
	return;
};

//������� ������� ������
void Figure::hidefig() 
{
	cout << "������: ��� ������� ���� ������ ������� ����������� ����������" << endl;
	return;
};

//������� ����������� ������
void Figure::moveTo(int newX, int newY) {
	hidefig();
	Ox = newX; Oy = newY;
	showfig();
}
