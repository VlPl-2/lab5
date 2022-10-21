#include "stdafx.h"
#include "rhombus.h"

rhombus::rhombus(int x, int y, int na, COLORREF c)
	{
	Ox = x; Oy = y; a = na; color = c;
	};
rhombus::~rhombus() {};


//�������, ������������ ������
void rhombus::showfig()
{
	HPEN    pen;
	HBRUSH  brush;
	pen = CreatePen(PS_SOLID, 2, RGB(0, 0, 0));
	brush = CreateSolidBrush(color);
	SelectObject(hdc, pen);
	SelectObject(hdc, brush);

	//���� ������ ����������� ������ �� �����
	{
		//���������� ����� ������
		POINT points[] = { { Ox, Oy },{ Ox - (a * 0.707107), Oy + (a * 0.707107) },
	{ Ox, Oy + (a * 0.707107 * 2) },{ Ox + (a * 0.707107) , Oy + (a * 0.707107) } };

		//��������� ����������, ������������ � ������, ���� ������ ������� �� ����� ����
		if ((Ox - (a * 0.707107) <= rt.left) ||
			(Ox + (a * 0.707107) >= rt.right) ||
			(Oy <= rt.top) ||
			(Oy + (a * 0.707107 * 2) >= rt.bottom)
			) throw Border();

	Polygon(hdc, points, 4);

	POINT bp;
	MoveToEx(hdc, Ox, Oy, &bp);
	LineTo(hdc, Ox + (a * 0.707107), Oy);
	LineTo(hdc, Ox + (a * 0.707107), Oy + (a * 0.707107 * 2));
	LineTo(hdc, Ox, Oy + (a * 0.707107 * 2)); 
	}

	DeleteObject(pen);
	DeleteObject(brush);
}

//�������, ���������� ������
void rhombus::hidefig()
{
	RECT *squr = new RECT;
	squr->left = Ox - (a * 0.707107);
	squr->top = Oy;
	squr->right = Ox + (a * 0.707107);
	squr->bottom = Oy + (a * 0.707107 * 2);
	InvalidateRect(hwnd, squr, true);  // �������� ����
	delete squr;
};
