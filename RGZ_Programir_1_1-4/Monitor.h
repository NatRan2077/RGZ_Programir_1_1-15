#pragma once
#define MAX_LEN 20

typedef struct Monik {
    char firm[MAX_LEN];
    int Gc;
    int coast;
    int colot_depth;
} Monik;
int check_correct(Mouse); // ����������� ������������  ������(���� � ���������� ������).

int Init(Monik*, char*, int, int, int); // ������� ��������� ��������� 

int Init_copy(Monik*, Monik*); //������� ����������� ������������ �������� ����� ���������.

void Print(const Monik*); // �������������. 

int replace_coast(Monik*, int); // �������� ������������ ������. 


void ClearMouse(Monik*); // ������� ������.

// �������, ����������� �� ��������� ��� ���������� ���������(������ �������� � == �)
//1 - ��������� �����, ����� - 0
int Equals(Monik*, Monik*);


//�������, ������������ ��� ���������� ��������� (������ �������� �<�)
//1 - ������ �������� < ������ ���������
//2 - ������ �������� > ������ ���������
//0 - ������ �������� == ������ ��������� ��� �� ������ ��������
int Less(Monik*, Monik*);







