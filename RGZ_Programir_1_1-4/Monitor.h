#pragma once
#define MAX_LEN 20

typedef struct Monik {
    char firm[MAX_LEN];
    int Gz;
    int coast;
    int colot_depth;
} Monik;


void initMonik(Monik* Monik, char*, int, int, int); // ������� ��������� ��������� 


void Print(const Monik*); // �������������. 

// �������, ����������� �� ��������� ��� ���������� ���������(������ �������� � == �)
//1 - ��������� �����, ����� - 0
int Equals(Monik*, Monik*);


//�������, ������������ ��� ���������� ��������� (������ �������� �<�)
//1 - ������ �������� < ������ ���������
//2 - ������ �������� > ������ ���������
//0 - ������ �������� == ������ ��������� ��� �� ������ ��������
int Less(Monik*, Monik*);







