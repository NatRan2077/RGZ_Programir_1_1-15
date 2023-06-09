#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <io.h>
#include "Monitor.h"
#include "list.h" 

int writelisttofile(char* filename, List* head) {
    int file = _open(filename, _O_CREAT | _O_TRUNC | _O_WRONLY | _O_BINARY, _S_IREAD | _S_IWRITE),
        counter = 0, amount = 0;
    if (file == -1) {
        perror("Открытие файла для записи");
        return 0;
    }
    amount = getListLength(head);//cxtnxbr
    if (_write(file, &amount, sizeof(int)) == -1) {
        perror("Запись в файл число элементов в списке");
        return 0;
    }
    while (head != NULL) {
        if (_write(file, head->m, sizeof(List)) == -1) {
            perror("Запись в файл структуры TV с каким-то индексом");
            return 0;
        }

        head = head->next;
    }
    return 1;

};

List* loadlistfromfile(char* filename) {

    int file = _open(filename, _O_RDONLY | _O_BINARY),
        amount = 0;
    if (file == -1) {
        perror("Открытие файла для записи");
        return 0;
    }
    List* head = NULL;
    Monik temp;
    if (_read(file, &amount, sizeof(int)) == -1) {
        perror("Чтение количества структур");
        return NULL;
    }
    while (amount > 0) {
        if (_read(file, &temp, sizeof(Monik)) == -1) {
            perror("Чтение количества структур");
            return NULL;
        }
        initMonik(&temp, temp.firm, temp.Gz, temp.coast, temp.colot_depth);
        head = InsertSortMonik(&temp, head);
        amount--;
    }
    return head;
}
