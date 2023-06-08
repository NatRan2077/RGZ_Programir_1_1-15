#pragma once
#include "Monitor.h"


typedef struct List {
    Monik* m;
    struct List* next;
} List;



//void add_node(Monik** head);
//Функция, для добавления элемента в начало списка
List* push(Monik, List*);
void addObject(struct Monik** lst, int* size);
//Функция, для удаления элемента в начале списка
List* pop(List*);

//Функция, для удаления списка
List* deleteList(List*);

//Функция, для печати всех элементов списка
void PrintList(List*);

//Функцию для добавления элемента в упорядоченный список.
List* Insert_Sort(Monik, List*);

//Функцию для удаления заданного элемента из списка.
List* Delete_Item(List*, int);

int getListLength(List* head);

Monik* get_list_node_value(List* head, int index);