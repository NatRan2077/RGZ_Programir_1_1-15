#define _CRT_SECURE_NO_WARNINGS
#include "list.h"
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include "Monitor.h"



Monik* createwMonik() {
	Monik* w = NULL;
	char firm = 0;
	int Gz = 0, coast = 0;
	int colot_depth;
	puts("Введите Фирма");
	scanf("%s", &firm); // 
	puts("Введите количество  герц");
	scanf("%d", &Gz);
	puts("Введите цену");
	scanf("%d", &coast);
	puts("Введите глубину цвета от 8 до 21");
	scanf("%d", &colot_depth);
	system("cls");
	initMonik(w, firm,  Gz,  coast,  colot_depth);
	return w;
}
List* InsertSortMonik(Monik* newValue, List* head) {
	List* item = malloc(sizeof(List));
	item->m = newValue;
	item->next = NULL;
	List* tmp = head;
	if (head == NULL) return item;
	if (newValue->coast < head->m->coast) {
		item->next = head;
		return item;
	}
	while (tmp->next != NULL) {
		if (newValue->coast < tmp->next->m->coast) {
			item->next = tmp->next;
			tmp->next = item;
			break;
		}
		else tmp = tmp->next;
	}
	tmp->next = item;
	return head;
}
//Функция, для удаления списка
List* deleteList(List* head)
{
	List* p;
	while (head != NULL) {
		p = head;
		head = head->next;
		free(p);
	}
	return NULL;
}




List* push(Monik* m, List* head)
{
	List* newItem = malloc(sizeof(List));
	newItem->m = m;
	newItem->next = head;
	return newItem;
}

// Для подсчета 
int getListLength(List* head) {
    int count = 0;
    List* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }

    return count;
}
List* pop(List* head)
{
	List* item = head;
	if (item->next == NULL)puts("Список пуст!");
	else {
		head = head->next;
		free(item);
	}
	return head;
}

//Функцию для удаления заданного элемента из списка.
List* Delete_Item(List* head, int id)
{
	List* p = head, * t = malloc(sizeof(List));
	int i = 1;
	if (head == NULL) { puts("Список пуст!"); return NULL; }
	if (id == i) // Удаление элемента из начала списка
		return pop(head);

	while (p->next != NULL) {
		i++;
		if (id == i) // Удаление элемента из середины списка
		{
			t = p->next;
			p->next = p->next->next;
			free(t);
			return head;
		}
		p = p->next;
	}
	puts("Такого номера в списке нет!"); // Такого номера в списке нет
	return head;
}

Monik* get_list_node_value(List* head, int index) {
	int count = 0;
	const List* current = head;
	while (current != NULL) {
		if (count == index) {
			return current->m;
		}
		count++;
		current = current->next;
	}
	return -1;
}

// Функция, для печати всех элементов списка
void PrintList(List* head)
{
	int i = 1;
	for (List* item = head; item != NULL; item = head) {
		head = head->next;
		printf("%d: ", i);
		Print(item->m);
		i++;
	}
}
