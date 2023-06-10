#pragma once
#define MAX_SIZE 20

typedef struct Monik {
    int Gz;
    int coast;
    int colot_depth;
    char firm[MAX_SIZE];
} Monik;


Monik* initMionik(Monik* m, int , int , int , char* ); // создает экземпл€р структуры 

Monik* createsStrMonik(int , int , int , char* );
void Print(const Monik*); // инициализаци€. 

// ‘ункци€, провер€ющу€ на равенство два экземпл€ра структуры(аналог операции Ђ == ї)
//1 - экзепл€ры равны, иначе - 0
int Equals(Monik*, Monik*);


//‘ункци€, сравнивающу€ два экземпл€ра структуры (аналог операции Ђ<ї)
//1 - первый экзепл€р < второй экземпл€р
//2 - первый экзепл€р > второй экземпл€р
//0 - первый экзепл€р == второй экземпл€р или их нельз€ сравнить
int Less(Monik*, Monik*);







