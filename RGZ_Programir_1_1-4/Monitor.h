#pragma once
#define MAX_LEN 20

typedef struct Monik {
    char firm[MAX_LEN];
    int Gz;
    int coast;
    int colot_depth;
} Monik;


void initMonik(Monik* Monik, char*, int, int, int); // создает экземпл€р структуры 


void Print(const Monik*); // инициализаци€. 

// ‘ункци€, провер€ющу€ на равенство два экземпл€ра структуры(аналог операции Ђ == ї)
//1 - экзепл€ры равны, иначе - 0
int Equals(Monik*, Monik*);


//‘ункци€, сравнивающу€ два экземпл€ра структуры (аналог операции Ђ<ї)
//1 - первый экзепл€р < второй экземпл€р
//2 - первый экзепл€р > второй экземпл€р
//0 - первый экзепл€р == второй экземпл€р или их нельз€ сравнить
int Less(Monik*, Monik*);







