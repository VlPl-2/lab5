#include "stdafx.h"
#include "Figure_list.h"


//�����������
Stack::Stack() { this->start = NULL; }
//����������
Stack::~Stack()
{
	f_list *temp = start, *p;
	while (temp)
	{
		p = temp;
		temp = temp->next;
		delete p;
	}
	start = NULL;
}

//�������, �����������, ���� �� ������ � ��������� ��������������� �������
void Stack::isempty()
{
	if (!start)
	{
		cout << "���� ����!" << endl;
		return;
	}
	else
	{
		cout << "���� �� ����!" << endl;
		return;
	}
}

//�������, ����������� ����� ������� � ����
void Stack::newelem(Figure *n_fig)
{
	struct f_list *p = new f_list;
	if (!start)
	{
		p->this_fig = n_fig;
		p->next = NULL;
		start = p;
		return;
	}
	p->this_fig = n_fig;	// ��������� ������ � ����� ����
	p->next = start;		// ������������� ����� ���� � ������ ������ 
	start = p;
	return;					
}

//������, ��������� �� ����� ���� �����
void Stack::show_list()
{
	if (!start)
	{
		cout << "���� ����";
		return;
	}

	cout << "����� ����� �����" << endl;
	f_list *temp = start;
	int i = 1;
	while (temp)
	{
		cout << "������ ����� " << i << endl;
		cout << *(temp->this_fig) << endl;
		temp = temp->next;
		i++;
	}
}

//�������, ��������� ����������� ������� �����
void Stack::del_target(int num_f)
{
	if (!start)
	{
		cout << "���� ����";
		return;
	}

	if (num_f == 1)
	{
		f_list *del = start;
		start = start->next;
		delete del->this_fig;
		delete del;
		return;
	}
	else
	{
		f_list *tem,
			*del = start,		
			*prev = NULL;	
		int count = 1;
		while (count <= (num_f - 1)) {	
			prev = del;			
			del = del->next;	
			count++;
			if (!del) {
				cout << "�������� ��� ����� ������� �� ����������" << endl;
				return;
			}
		}
		tem = del->next;
		delete del;			
		prev->next = tem;	
	}
	cout << "����� " << num_f << " �������." << endl;
	return;
}

//�������, ������������ ����������� �������
void Stack::move_target(int num_f)
{
	if (!start)
	{
		cout << "���� ����";
		return;
	}

	f_list *temp = NULL;
	temp = choise_fig(start, num_f);
	cout << "����������� ��������, ������� ����� Ox � Oy:" << endl;

	int x, y;
	cout << "������� ����� �������� ��" << endl;
	cin >> x;
	cout << "������� ����� �������� �y" << endl;
	cin >> y;
	temp->this_fig->moveTo(x, y);
	cout << *(temp->this_fig) << endl;
	return;
}

//�������, ������������ ����������� �������
void Stack::show_target(int num_f)
{
	if (!start)
	{
		cout << "���� ����";
		return;
	}

	f_list *temp = NULL;
	temp = choise_fig(start, num_f);
	cout << "����������� ������ ����� " << num_f << endl;
	temp->this_fig->showfig();
	return;
}

//�������, ���������� ����������� �������
void Stack::hide_target(int num_f)
{
	if (!start)
	{
		cout << "���� ����";
		return;
	}
	f_list *temp = NULL;
	temp = choise_fig(start, num_f);
	cout << "������� ������ ����� " << num_f << endl;
	temp->this_fig->hidefig();
	return;
}

f_list* Stack::choise_fig(f_list *start, int num_f)
{
	f_list *temp = start;
	if (num_f <= 0)
	{
		cout << "�������� ��� ����� ������� �� ����������" << endl;
		f_list *nul = NULL;
		return nul;
	}
	int i = 1;
	while (i != num_f) {
		temp = temp->next;
		i++;
		if (!temp) {
			cout << "�������� ��� ����� ������� �� ����������" << endl;
			f_list *nul = NULL;
			return nul;
		}
	}
	return temp;
}

//�������, ��������� ����
void Stack::delete_list()
{
	f_list *temp = start, *p;
	while (temp)
	{
		p = temp;
		temp = temp->next;
		delete p;
	}
	start = NULL;
	cout << "���� �����" << endl;
	return;
}