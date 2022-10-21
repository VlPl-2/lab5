#pragma once
#include"figure_object.h"
using namespace std;

struct f_list
{
	Figure *this_fig;
	struct f_list *next;
};

class Stack
{
private:
	f_list* start;
	//��������������� �������, ���������� ����������� ������ �� ������ � ������������ � ���������
	f_list*choise_fig(f_list *start, int num_f);
public:

	Stack();

	~Stack();

	//�������, �����������, ���� �� ����, ����� ���� ��������� ��������������� �������
	void isempty();

	//�������, ����������� ����� ������� � ����
	void newelem(Figure *n_fig);

	//������, ��������� �� ����� ���� �����
	void show_list();

	//�������, ��������� ����������� ������� ����
	void del_target( int num_f);

	//�������, ������������ ����������� �������
	void move_target(int num_f);

	//�������, ������������ ����������� �������
	void show_target(int num_f);

	//�������, ���������� ����������� �������
	void hide_target(int num_f);

	//�������, ��������� ����
	void delete_list();
};

