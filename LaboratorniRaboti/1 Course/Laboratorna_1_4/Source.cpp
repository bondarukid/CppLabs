/*
* 9.	Дано ненульові числа x , y . Перевірити істинність висловлювання: «Точка з координатами ( x , y ) лежить в першій або третій координатній чверті».   
*/
#include <iostream>

using namespace std;

int main()
{
	double x, y = 0;

	cout << "Enter X: ";
	cin >> x;
	cout << "Enter Y: ";
	cin >> y;
	bool result;

	if (x < 0)
	{
		if (y < 0)
		{
			result = true;
			cout << "Result: " << boolalpha << result << endl;
		}
		else if (y > 0)
		{
			result = false;
			cout << "Result: " << boolalpha << result << endl;
		}
	}
	else if (x > 0)
	{
		if (y < 0)
		{
			result = false;
			cout << "Result: " << boolalpha << result << endl;
		}
		else if (y > 0)
		{
			result = true;
			cout << "Result: " << boolalpha << result << endl;
		}
	}

	system("pause");
	return 0;
}