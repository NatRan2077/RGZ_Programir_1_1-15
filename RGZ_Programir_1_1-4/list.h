#pragma once
#include "Monitor.h"


typedef struct List {
    Monik* m;
    struct List* next;
} List;



//void add_node(Monik** head);
//�������, ��� ���������� �������� � ������ ������
List* push(Monik, List*);
void addObject(struct Monik** lst, int* size);
//�������, ��� �������� �������� � ������ ������
List* pop(List*);

//�������, ��� �������� ������
List* deleteList(List*);

//�������, ��� ������ ���� ��������� ������
void PrintList(List*);

//������� ��� ���������� �������� � ������������� ������.
List* Insert_Sort(Monik, List*);

//������� ��� �������� ��������� �������� �� ������.
List* Delete_Item(List*, int);

int getListLength(List* head);

Monik* get_list_node_value(List* head, int index);