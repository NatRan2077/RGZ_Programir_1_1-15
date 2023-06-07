#include "Monitor.h"
#include <stdio.h>

int main(){

	Monik m1, m2, m3;

	Init(&m1, "Samsung", 60, 3500, 10);
	Init(&m2, "Acer", 120, 70000, 5);
	Init(&m3, "Logitech", 144, 1000, 5);
	Print(&m1);
	puts("Список для пункта 10:\n");
	
	int a = Equals(&m1, &m2);
	int b = Less(&m2, &m3);
}