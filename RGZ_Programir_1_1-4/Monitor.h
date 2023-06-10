#pragma once
#define MAX_SIZE 20

typedef struct Monik {
    int Gz;
    int coast;
    int colot_depth;
    char firm[MAX_SIZE];
} Monik;


Monik* initMionik(Monik* m, int , int , int , char* ); // ������� ��������� ��������� 

Monik* createsStrMonik(int , int , int , char* );
void Print(const Monik*); // �������������. 

// �������, ����������� �� ��������� ��� ���������� ���������(������ �������� � == �)
//1 - ��������� �����, ����� - 0
int Equals(Monik*, Monik*);


//�������, ������������ ��� ���������� ��������� (������ �������� �<�)
//1 - ������ �������� < ������ ���������
//2 - ������ �������� > ������ ���������
//0 - ������ �������� == ������ ��������� ��� �� ������ ��������
int Less(Monik*, Monik*);







