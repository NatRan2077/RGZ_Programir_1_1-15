#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include "list.h" 
#include <string.h>
#include "Monitor.h"
#define MAX_SIZE 19

Monik* initMionik(Monik* m, int Gz, int coast, int colot_depth, char* firm) {
	m = createsStrMonik(Gz, coast, colot_depth, firm);
	return m;

}

Monik* createsStrMonik(int Gz, int coast, int colot_depth, char* firm) {
	Monik* newMonik = malloc(sizeof(Monik));
	if (Gz > 0) Gz = 60;
	if (coast < 0)coast = 1000;
	if (colot_depth < 0 & colot_depth >50) colot_depth = 10;
	if (firm == NULL) strncpy(newMonik->firm, "ФИРМА не указана", MAX_SIZE);

	newMonik->Gz = Gz;
	newMonik->coast = coast;
	newMonik->colot_depth = colot_depth;
	strncpy(newMonik->firm, firm, MAX_SIZE);

	return newMonik;
}


void Print(const Monik* m)
{
	printf("Monik:%s, Gz: %d, coast %d:,colot_depth  %d\n", m->firm, m->Gz, m->coast, m->colot_depth);
}

int Equals(Monik* m, Monik* m1)
{
	if (m->Gz == m1->Gz && m->coast == m1->coast && strcmp(m->firm, m1->firm) == 0) {

		return 1;
		printf("Значеня равны \n");
	}
	else {
		printf("Значеня не равны \n");
		return 0;
	}
}

int Less(Monik* m, Monik* m1)
{
	if (m->coast < m1->coast) {
		printf("Ценa у первой структуры больше \n");
		return 1;

	}
	else {
		printf("Ценa у первой структуры больше \n");
		return 0;
	}	
}

