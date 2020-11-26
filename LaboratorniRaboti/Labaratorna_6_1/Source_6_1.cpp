/*
1.	Створіть об'єкт цілого типу в стеку. Створіть посилання і вказівник на нього.
Введіть значення з консолі.
Збільшіть значення на 5 за допомогою посилання.
Виведіть значення цього об'єкта за допомогою вказівника та посилання.
*/

#include<iostream>
#include<Windows.h>

using namespace std;

int main() {

	int Value = 0;
	int* pValue = &Value;
	int& ppValue = *pValue;

	cout << "Enter a number: ";
	cin >> Value;

	ppValue += 5;

	cout << "Reference: " << ppValue << endl;
	cout << "Vkazivka: " << *pValue << endl;

	system("pause");
	return 0;
}