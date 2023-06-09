#define _CRT_SECURE_NO_WARNINGS
#include <fcntl.h>
#include <io.h>
#include <windows.h>
#include <stdlib.h>
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
//	//C������ ������ ��������
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
	List* head = loadlistfromfile("WiFirouter");
	int n = 0, close = 0,
		delnum = 0, printnum = 0;
	do {
		printf("� ������ %d ���������.\n", getListLength(head));
		printf("\t�������� ��������:\n");
		printf("1 - �������� �������\n");
		printf("2 - ������� �������\n");
		printf("3 - ������� �������\n");
		printf("4 - ���������� ������\n");
		printf("0 - �����\n");
		printf("�������: ");
		scanf("%d", &n);


		if (n == 1) {
			system("cls");
			
			Monik* m = createwMonik();
			head = InsertSortMonik(m, head);
		}
		if (n == 2) {
			puts("������� ����� �������� ��� �������");
			scanf("%d", &delnum);
			system("cls");
			head = Delete_Item(head, delnum);
		}
		if (n == 3) {
			puts("������� ����� �������� ��� ������");
			scanf("%d", &printnum);
			system("cls");
			get_list_node_value(head,printnum);// � ����
		}
		if (n == 4) {
			system("cls");
			puts("------������------");
			PrintList(head);
		}
		if (n == 0) {
			close = 1;
		}

	} while (!close);

	writelisttofile("WiFirouter", head);

	for (int i = getListLength(head); i > 0; i--) {
		head = Delete_Item(head, 1);
	}
	return 0;

};