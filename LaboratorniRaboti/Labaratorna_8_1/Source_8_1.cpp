/*1.�������� ��� ��� ���������� ����� "�������" � ������ ��������� �������-������: ��,
�����, ��������. �������� ��������, � ��� ����������� ��� ��'���� ���� "�������" .
��������� �� ��, ����� � ��������. ����������� �������� �����-����� ��'���� �� �����.*/

#include <iostream>
using namespace std;

class Student
{
public:
	int Age;
	char Gender;
	float Grant;

};

int main()
{
	Student S1;
	Student S2;

	S1.Age = 18;
	S2.Age = 21;

	S1.Gender = 'M';
	S2.Gender = 'F';

	S1.Grant = 1800;
	S2.Grant = 1600;

	cout << "Student1 :" << endl << "Age:" << S1.Age << endl << "Gender: " << S1.gender << endl << "Grant: " << S1.Grant << endl;
	cout << "Student2 :" << endl << "Age:" << S2.Age << endl << "Gender: " << S2.Gender << endl << "Grant: " << S2.Grant << endl;

	system("pause");
	return 0;
}