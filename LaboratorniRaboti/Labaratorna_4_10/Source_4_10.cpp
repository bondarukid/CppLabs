/*
10.	������� ���������� ������� IsPowerN (K,N) �������� ����, ��� ������� True, ���� ����� �������� K (> 0) � �������� ����� N
(���������� �����), � False � ������ �������. � �� ��������� ������ ������� ������� ����� N � ����� � 10 ����� ���������� �����.
*/

#include<iostream>
#include<Windows.h>

using namespace std;

bool IsPowerN(int K, int N)
{
    while (!(K % N)) K /= N;
    return (K == 1);
}

int main() {

	int N = 0, K = 0;

	cout << "Enter N: ";
	cin >> N;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter K: ";
		cin >> K;
		cout << "Result: " << boolalpha << IsPowerN(K, N) << endl;
	}

	system("pause");
	return 0;
}