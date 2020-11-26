/*
5.	Створіть у вільній пам’яті три об'єкта цілого типу, присвойте їм відповідно значення 10, 20, 30.
Замініть вказівники посиланнями і виконайте обробку цих об’єктів з використанням посилань (збільшіть значення удвічі).
Звільніть вільну пам’ять, застосовуючи вказівники.
*/

#include<iostream>
#include<Windows.h>

using namespace std;

int main() {

	int* A = new int(10);
	int* B = new int(20);
	int* C = new int(30);

	int& A1 = *A;
	int& B1 = *B;
	int& C1 = *C;

	A1 *= 2;
	B1 *= 2;
	C1 *= 2;

	cout << "A = " << A1 << endl;
	cout << "B = " << B1 << endl;
	cout << "C = " << C1 << endl;

	delete A;
	delete B;
	delete C;

	system("pause");
	return 0;
}