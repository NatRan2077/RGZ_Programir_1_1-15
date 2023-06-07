#include <stdio.h>
#include "Monitor.h"
#define MAX_SIZE 20

int check_correct(Monik m) {
	if (m.Gc <= 0 && m.colot_depth >= 1000) return 1;

	if (m.coast <= 0) return 2;

	return 0;
}

int Init(Monik* m, char* new_firm, int new_Gc, int new_coast, int new_colot_depth)
{
	strncpy(m->firm, new_firm, MAX_SIZE);
	m->Gc = new_Gc;
	m->coast = new_coast;
	m->colot_depth = new_colot_depth;

	return check_correct(*m);
}
int Init_copy(Monik* m, Monik* org_m)
{
	strncpy(m->firm, org_m->firm, MAX_SIZE);
	m->Gc = org_m->Gc;
	m->coast = org_m->coast;
	m->colot_depth = org_m-> colot_depth;
	return 0;
}

void Print(const Monik* m)
{
	printf("Monik:%s, Gz: %d, coast %d:,colot_depth  %d\n", m->firm, m->Gc, m->coast, m->colot_depth);
}

//field - поле, 1 - количество доп кнопок, 2 - цена
//если замена коректна - 1, иначе - 0
int replace_coast(Monik* m, int new_coast)
{
	int copy_mean = m->coast;
	m->coast = new_coast;

	if (check_correct(*m) == 0) return 1;
	else m->coast = copy_mean;
	return 0;
}
Monik* CreateMonik() {
	Monik* m = (Monik*)malloc(sizeof(Monik));
	Init(m, "Logitech", 60, 6000, 10);
	return m;
}
void ClearMonik(Monik* m) {
	free(m);
}


int Equals(Monik* m, Monik* m1)
{
	if (m->Gc == m1->Gc && m->coast == m1->coast && strcmp(m->firm, m1->firm) == 0)
		return 1;
	else
		return 0;
}

int Less(Monik* m, Monik* m1)
{
	if (m->coast < m1->coast) {
		printf("Цены у первой структуры больше");
		return 1;

	}
	else {
		printf("Цены у первой структуры больше");
		return 0;
	}	
}

