#define _CRT_SECURE_NO_WARNINGS
#include "Monitor.h"
#include <stdio.h>
#include <locale.h>
#include "list.h"

int main() {
	setlocale(LC_ALL, "Rus");

	Monik m1, m2, m3, m4;

	initMonik(&m1, "Samsung", 60, 3500, 10);
	initMonik(&m2, "Acer", 120, 70000, 5);
	initMonik(&m3, "Logitech", 244, 10000, 15);


	Print(&m1);
	Print(&m2);
	Print(&m3);


	Equals(&m1, &m2);
	Less(&m2, &m3);

	//Cоздаем список объектов
	List* head = NULL;
	head = push(m1, head);
	head = push(m2, head);
	head = push(m3, head);
	PrintList(head);
	printf("%d\n", getListLength(head));

	Delete_Item(head, 2);

	PrintList(head);


	Print(get_list_node_value(head, 1));



	struct Monik* objList = NULL;
	int size = 0;
	int choice = 0;
	int h = 0;
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		addObject(&objList, &size);
		break;

	case 2:
		PrintList(head);
		break;
	case 3:
		scanf("%d", h);
		Delete_Item(head, &h);
		break;
	}
}