/*
���� ���� ����� N (> 0). �� ��������� �������� ������ ��� ������ � ������ �������
�� ������ ���������, �� � � ������ ����� N ����� �2�. ���� �, �� ������� true, ���� ���� - ������� false.
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num, count = 0;
    cout << "Enter a number: ";
    do
    {
        cin >> num;
    } while (num < 0);
    while (num)
    {

        if ((num % 10) == 2)
            count++;
        num = num / 10;

    }
    if (count != 0)
        cout << "True" << endl;
    else
        cout << "False" << endl;
	system("pause");
	return 0;
}