#include <iostream>
#include <string>
#include "Source.h"

using namespace std;

int main()
{
	int a = 0;
	cout << "Enter your number: ";
	cin >> a;
	cout << SumOfNumber(a) << endl;
	system("pause");
	return 0;
}