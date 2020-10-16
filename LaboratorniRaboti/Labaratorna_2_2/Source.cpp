/*
Робот може переміщатися в чотирьох напрямках ( «N» - північ, «W» - захід, «S» - південь, «E» - схід)
і приймати три цифрові команди: 0 - продовжувати рух, 1 - поворот наліво, - 2- поворот направо. Дано символ C - вихідний
напрямок робота і ціле число N - послана йому команда. Вивести напрямок робота після виконання отриманої команди.
*/
#include <iostream>
#include <string>
#include "windows.h"
#include <cmath>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    char S;
    int N;
    cout << "Введите символ направления («С» — север, «З» — запад, «Ю» — юг, «В» — восток): ";
    cin >> S;
    cout << "Введите цифровую команду для робота (0 — продолжать движение, 1 — поворот налево, -1 — поворот направо): ";
    cin >> N;
    cout << "Направление - ";
    switch (N) {
    case 1: switch (S) {
    case 'С': cout << "З"; break;
    case 'Ю': cout << "В"; break;
    case 'З': cout << "Ю"; break;
    case 'В': cout << "С"; break;
    } break;
    case -1: switch (S) {
    case 'С': cout << "В"; break;
    case 'Ю': cout << "З"; break;
    case 'З': cout << "С"; break;
    case 'В': cout << "Ю"; break;
    } break;
    case 0: switch (S) {
    case 'С': cout << "С"; break;
    case 'Ю': cout << "Ю"; break;
    case 'З': cout << "З"; break;
    case 'В': cout << "В"; break;
    } break;
    }

    cout << endl;

	system("pause");
	return 0;
}