/*
2.	Напишіть програму, в якій оголошуються беззнакове коротке ціле Num і вказівник на нього  pNum. Задайте адресу цілого вказівнику.
Виведіть на екран значення змінних і адреси кожної змінної у шістнадцятиричній і десятковій системі числення.
Порівняйте отримані результати. Зробіть висновки.
*/

#include<iostream>
#include<Windows.h>

using namespace std;

int main() {

	unsigned int Num = 653;
	unsigned int* pNum = &Num;

	cout << "Num = " << Num << endl;
	cout << "pNum = " << *pNum << endl << endl;

	cout << "Num = " << &Num << endl;
	cout << "pNum = " << pNum << endl << endl;

	cout << "Num = " << (unsigned long)Num << endl;
	cout << "pNum = " << (unsigned long)*pNum << endl;

	cout << "Num = " << (unsigned long)&Num << endl;
	cout << "pNum = " << (unsigned long)pNum << endl << endl;

	system("pause");
	return 0;
}