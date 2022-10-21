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
	//Вспомогательная функция, выбирающая определённую фигуру из списка и возвращающая её указатель
	f_list*choise_fig(f_list *start, int num_f);
public:

	Stack();

	~Stack();

	//Функция, проверяющая, пуст ли стек, после чего выводящая соответствующую надпись
	void isempty();

	//Функция, добавляющая новый элемент в стек
	void newelem(Figure *n_fig);

	//Функия, выводящая на экран стек фигур
	void show_list();

	//Функция, удаляющая определённый элемент стек
	void del_target( int num_f);

	//Функция, перемещающая определённый элемент
	void move_target(int num_f);

	//Функция, отображающая определённый элемент
	void show_target(int num_f);

	//Функция, скрывающая определённый элемент
	void hide_target(int num_f);

	//Функция, удаляющая стек
	void delete_list();
};

