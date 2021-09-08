/*
* 5.	Дано тризначне число. Знайти суму і добуток його цифр.
*/


#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int sum = 0;
    int dobytok = 1;

    cout << "Enter n = ";
    cin >> n;

    while (n != 0)
    {
        sum += n % 10;
        dobytok *= n % 10;
        n /= 10;
    }

    cout << "Sum = " << sum << endl;
    cout << "Dobytok = " << dobytok << endl;

    return 0;
}