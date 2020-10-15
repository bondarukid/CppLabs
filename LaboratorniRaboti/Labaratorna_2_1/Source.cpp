// Дано три числа. Знайти найменше з них.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b, c = 0;

    cout << "Enter a, b, c: ";
    cin >> a, b, c;

    if (a > b)
    {
        if (b > c)
            cout << c;
        else
            cout << b;
    }
    else
    {
        if (a < b && a < c)
            cout << a;
    }
	system("pause");
	return 0;
}