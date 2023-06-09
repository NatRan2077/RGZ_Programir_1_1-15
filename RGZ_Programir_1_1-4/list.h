#pragma once
#include "Monitor.h"


typedef struct List {
    Monik* m;
    struct List* next;
} List;



//void add_node(Monik** head);
//�������, ��� ���������� �������� � ������ ������
List* push(Monik, List*);

Monik* createwMonik();
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

List* InsertSortMonik(Monik* newValue, List* head);
//���������� ����

int writelisttofile(char* filename, List* head);
//��������� ����
List* loadlistfromfile(char* filename);
