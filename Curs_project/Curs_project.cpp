// Curs_project.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "rhombus.h"
#include "Figure_list.h"

#include <conio.h>

using namespace std;

const int NotUsed = system("color F0");

//������� �������� �������
void ob_del(Figure **);

int main()
{
	SetConsoleTitle((LPCWSTR)L"19VP2_16_Figures");
	setlocale(LC_ALL, "");
	
	Figure *fig = new rhombus(300, 300, 300, RGB(200, 100, 200)), //������� �� ������� ���� � �������� ����������
		*fig2 = new rhombus(400, 200, 100, RGB(100, 200, 200)),
		*fig3 = new rhombus(400, 400, 50, RGB(255, 0, 0)),
		*fig4 = new rhombus(5000, 5000, 50, RGB(255, 100, 255));

	Stack *LIST = new Stack;

	LIST->newelem(fig);
	LIST->newelem(fig4);
	LIST->newelem(fig2);
	LIST->newelem(fig3);
	int choise;
	LIST->show_list();

	cout << "�������� ������������ ��������, ������� �����" << endl;
	
	cin >> choise;
	LIST->del_target(choise);

	LIST->show_list();
	
	try
	{

	cout << "����������� ����������� ������ �� �����, �������� ����� ������" << endl;
	cin >> choise;
	LIST->show_target(choise);
	}
	catch (Figure::Border)
	{
		cout << "������: ����� ������ �� ������� ���� �����������" << endl;
	}

	_getch();

	cout << "������� ����������� ������, ������� ����� ������" << endl;
	cin >> choise;
	LIST->hide_target(choise);

	LIST->delete_list();

	ob_del(&fig);
	ob_del(&fig2);
	ob_del(&fig3);
	ob_del(&fig4);
	
	_getch();

    return 0;
}

void ob_del(Figure **del)
{
	if (!*del)
	{
		cout << "������� �� ����������!" << endl;
	}
	else
	{
		delete *del;
		*del = NULL;
	}
	return;
}