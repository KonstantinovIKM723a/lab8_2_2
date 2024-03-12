#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int N = 6;
    int a[N] = { 0, 0, 0, 0, 0, 0 };
    int A = 1000000;
    int i = 0;

    //Ввод числа 0 <= A <= 999999
    while (A < 0 || A > 999999) cin >> A;

    //Заповнення масиву цифрами числа А, починаючи з останньої цифри числа
    while (A > 0) {
        a[i] = A % 10;
        A = A / 10;
        i++;
    }

    //Виведення елементів масива
    cout << "Елементи масиву: ";
    for (int i = 0; i < N; i++) cout << a[i] << " ";
}
