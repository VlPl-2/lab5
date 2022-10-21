#include "stdafx.h"
#include "Figure_list.h"


//Конструктор
Stack::Stack() { this->start = NULL; }
//Деструктор
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

//Функция, проверяющая, пуст ли список и выводящая соответствующую надпись
void Stack::isempty()
{
	if (!start)
	{
		cout << "Стек пуст!" << endl;
		return;
	}
	else
	{
		cout << "Стек не пуст!" << endl;
		return;
	}
}

//Функция, добавляющая новый элемент в стек
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
	p->this_fig = n_fig;	// вставляем данные в новый узел
	p->next = start;		// устанавливаем новый узел в начало списка 
	start = p;
	return;					
}

//Функия, выводящая на экран стек фигур
void Stack::show_list()
{
	if (!start)
	{
		cout << "Стек пуст";
		return;
	}

	cout << "Вывод стека фигур" << endl;
	f_list *temp = start;
	int i = 1;
	while (temp)
	{
		cout << "Фигура номер " << i << endl;
		cout << *(temp->this_fig) << endl;
		temp = temp->next;
		i++;
	}
}

//Функция, удаляющая определённый элемент стека
void Stack::del_target(int num_f)
{
	if (!start)
	{
		cout << "Стек пуст";
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
				cout << "Элемента под таким номером не существует" << endl;
				return;
			}
		}
		tem = del->next;
		delete del;			
		prev->next = tem;	
	}
	cout << "Удалён " << num_f << " элемент." << endl;
	return;
}

//Функция, перемещающая определённый элемент
void Stack::move_target(int num_f)
{
	if (!start)
	{
		cout << "стек пуст";
		return;
	}

	f_list *temp = NULL;
	temp = choise_fig(start, num_f);
	cout << "Перемещение элемента, введите новые Ox и Oy:" << endl;

	int x, y;
	cout << "Введите новое значение Ох" << endl;
	cin >> x;
	cout << "Введите новое значение Оy" << endl;
	cin >> y;
	temp->this_fig->moveTo(x, y);
	cout << *(temp->this_fig) << endl;
	return;
}

//Функция, отображающая определённый элемент
void Stack::show_target(int num_f)
{
	if (!start)
	{
		cout << "Стек пуст";
		return;
	}

	f_list *temp = NULL;
	temp = choise_fig(start, num_f);
	cout << "Отображение фигуры номер " << num_f << endl;
	temp->this_fig->showfig();
	return;
}

//Функция, скрывающая определённый элемент
void Stack::hide_target(int num_f)
{
	if (!start)
	{
		cout << "Стек пуст";
		return;
	}
	f_list *temp = NULL;
	temp = choise_fig(start, num_f);
	cout << "Скрытие фигуры номер " << num_f << endl;
	temp->this_fig->hidefig();
	return;
}

f_list* Stack::choise_fig(f_list *start, int num_f)
{
	f_list *temp = start;
	if (num_f <= 0)
	{
		cout << "Элемента под таким номером не существует" << endl;
		f_list *nul = NULL;
		return nul;
	}
	int i = 1;
	while (i != num_f) {
		temp = temp->next;
		i++;
		if (!temp) {
			cout << "Элемента под таким номером не существует" << endl;
			f_list *nul = NULL;
			return nul;
		}
	}
	return temp;
}

//Функция, удаляющая стек
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
	cout << "Стек удалён" << endl;
	return;
}