#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int n = 20;
    float a[n];

    srand(time(NULL));

    //���������� ����� ������ ����� �������� n �������� ���������� �� -10 �� 10
    for (int i = 0; i < n; i++) a[i] = float(rand() % 2001 - 1000) / 100;

    //�������� ����� �� �����
    cout << "�������� ������: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    //�) ������� � ������� ��'����� ��������
    int negative_N = 0;
    float negative_P = 1;

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            negative_N++;
            negative_P *= a[i];
        }
    }

    //�������� ��������� �� �����
    cout << "������� ��'����� ��������: " << negative_N << endl;
    if (negative_N == 0) {
        cout << "³�'����� �������� ����" << endl;
    }
    else cout << "������� ��'����� ��������: " << negative_P << endl;

    //�) ���� �������� ������, ������������ �� ������ � ������ ��������� ����������.
    int positive_N = 0;
    float positive_S = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            positive_N++;
            if (positive_N == 2) break;
        }
        else if (positive_N == 1) positive_S += a[i];
    }

    //�������� ��������� �� �����
    if (positive_N == 2) {
        cout << "���� �������� ��������, ������������ �� ������ � ������ ��������� ����������: " << positive_S;
    }
    else cout << "�������� �������� ����� ����";
}
