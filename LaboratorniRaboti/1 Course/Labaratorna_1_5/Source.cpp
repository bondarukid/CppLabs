/*
* 1.	Дано цілі числа a , b , c , що є сторонами деякого трикутника.
Перевірити істинність висловлювання: «Трикутник зі сторонами a , b , c є рівностороннім».       
*/

#include <iostream>

using namespace std;

int main()
{
	double a, b, c = 0.0;
	bool result;

	cout << "Enter a: ";
	cin >> a;

	cout << "Enter b: ";
	cin >> b;

	cout << "Enter c: ";
	cin >> c;

    if (a == b & a == c & c == b)
    {
		result = true;
		cout << "Result: " << boolalpha << result << endl;
    }
	else
	{
		result = false;
		cout << "Result: " << boolalpha << result << endl;
	}

	system("pause");
	return 0;
}