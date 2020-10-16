/*
2.	��������� ������ ����������� ����� ����� 2. ����������, ������ ����� ��� ������� �����.
*/

#include <iostream>
#include <string>

using namespace std;

bool isPrime(int n)
{
    // ���� n > 2
    if (n > 2)
    {
        // � ����� ���������� ����� �� 2 �� n - 1
        for (int i = 3; i < n; i++)
            if (n % i == 0) // ���� n ������� ��� ������� �� i - ���������� false (����� �� �������)
                return false;

        // ���� ��������� ����� �� ������� ���������, �� ���������� true (����� �������) - �������� ��������
        return true;
    }
    else // ����� ���������� false (����� �� �������)
        return false;
}

int main()
{
	int sum = 0;
    int num = 0;
	bool X;

	for (int i = 0; i < 10; i++)
	{
        cout << "Enter value: ";
        cin >> num;

        if (isPrime(num) == true)
        {
            sum++;
        }
	}

    cout << "Sum: " << sum << endl;

	system("pause");
	return 0;
}