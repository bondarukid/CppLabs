/*
1.	Напишіть програму, в якій оголошуються ціле Age і вказівник на ціле pAge.
Задайте адресу цілого вказівнику. За допомогою вказівника встановіть значення цілої змінної 25.
Виведіть значення змінної Age двома способами.
*/

#include<iostream>
#include<Windows.h>

using namespace std;

int main() {

	int Age = 5;
	int* pAge = &Age;

	cout << "Age: " << Age << endl;
	cout << "pAge: " <<*pAge << endl << endl;

	*pAge = 25;

	cout << "Age: " << Age << endl;
	cout << "pAge: " << *pAge << endl << endl;

	system("pause");
	return 0;
}