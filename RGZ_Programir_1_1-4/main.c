#define _CRT_SECURE_NO_WARNINGS
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "Monitor.h"
#include <stdio.h>
#include <locale.h>
#include "list.h"

int main() {
	setlocale(LC_ALL, "Rus");

//	Monik m1, m2, m3, m4;
//
//	initMonik(&m1, "Samsung", 60, 3500, 10);
//	initMonik(&m2, "Acer", 120, 70000, 5);
//	initMonik(&m3, "Logitech", 244, 10000, 15);
//
//
///*	Print(&m1);
//	Print(&m2);
//	Print(&m3);
//
//
//	Equals(&m1, &m2);
//	Less(&m2, &m3);
//	*/
//	//Cоздаем список объектов
//	List* head = NULL;
//	head = push(m1, head);
//	head = push(m2, head);
//	head = push(m3, head);
//	PrintList(head);
//	printf("%d\n", getListLength(head));
//
//	Delete_Item(head, 2);
//
//	PrintList(head);
//
//
//	Print(get_list_node_value(head, 1));
	List* head = loadlistfromfile("MonikF.bin");

	struct Monik* objList = NULL;
	//writelisttofile("MonikF.bin", head);
	int size = 0;
	int choice = 0;
	int h = 0;
	int close = 0;
	scanf("%d", &choice);
	while (1)
	{
		system("cls");

		int choice = 0;

		puts("-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-");
		printf("В списке %d элементов.\n", getListLength(head));
		puts("1. Добавить элемент");
		puts("2. Вывести сведения об объектах");
		puts("3. Удалить элемент по номеру");
		puts("4. Завершить работу");
		puts("5.обновить значение в списке ");

		puts("-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-");

		printf("Код команды: ");
		scanf_s("%d", &choice);

		system("cls");

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

			system("pause");
			break;
		case 4:
			deleteList(head);
			system("pause");
			break;

		case 5:
			getListLength(head);
			puts(getListLength(head));
			break;
		default:
			puts("\nНекорректное значение! Повтор запроса...\n");
			break;
		}
	}while(!close)

	writelisttofile("MonikF.bin", head);

	for (int i = getListLength(head); i > 0; i--) {
		head = Delete_Item(1, head);
	}
	return 0;



}