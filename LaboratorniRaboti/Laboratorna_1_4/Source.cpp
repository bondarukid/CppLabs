/*
* 9.	���� �������� ����� x , y . ��������� ��������� �������������: ������ � ������������ ( x , y ) ������ � ������ ��� ����� ����������� �����.   
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

	if (x < 0)
	{
		if (y < 0)
		{
			cout << "Result: TRUE" << endl;
		}
		else if (y > 0)
		{
			cout << "Result: FALSE" << endl;
		}
	}
	else if (x > 0)
	{
		if (y < 0)
		{
			cout << "Result: False" << endl;
		}
		else if (y > 0)
		{
			cout << "Result: TRUE" << endl;
		}
	}

	system("pause");
	return 0;
}