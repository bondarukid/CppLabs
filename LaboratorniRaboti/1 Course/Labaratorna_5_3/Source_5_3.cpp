/*
3.	Напишіть програму, в якій створюються три об'єкти дійсного типу середній бал студента у вільній пам'яті; введіть їх значення з консолі;
знайдіть об’єм виділеної пам’яті; роздрукуйте значення середнього балу кожного студента.
Увага! Після виведення обов’язково звільніть пам’ять від об’єктів.
*/
#include<iostream>
#include<Windows.h>
#include <vector>
using namespace std;

int main() {

	int *stud = new int[3];
	int summ = 0;

	for (int i = 0; i < 3; i++)
	{
		cout << "Student mark " << i + 1 << " - ";
		cin >> stud[i];
	}

	for (int i = 0; i < 3; i++)
	{
		int* p = &stud[i];
		cout << "Mark: " << stud[i] << " Memory: " << sizeof(p) << endl;
		summ += sizeof(p);
	}
	delete stud;
	stud = nullptr;

	system("pause");
	return 0;
}