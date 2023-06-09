#include <stdio.h>
#include "Monitor.h"
#define MAX_SIZE 20

void initMonik(Monik* Monik, char* firm, int Gz, int coast, int colot_depth) {
	if (Monik == NULL) {
		printf("Error: null pointer\n");
		return;
	}
	if (firm != NULL) {
		strcpy(Monik->firm, firm);
	}
	else {
		strcpy(Monik->firm, "Unknown");
	}
	Monik->Gz = (Gz > 0 && Gz < 500) ? Gz : 60;
	Monik->coast = (coast > 0 && coast < 1000000) ? coast : 17000;
	Monik->colot_depth = (colot_depth > 0 && colot_depth < 20) ? colot_depth : 10;
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

