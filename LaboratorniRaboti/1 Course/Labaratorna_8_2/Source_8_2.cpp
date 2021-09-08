/*Розробіть методи класу, що дозволяють виконувати введення / виведення всіх членів-даних
класу "Студент" та перевірте їх в головній програмі. Напишіть кілька конструкторів і
деструктор для класу "Студент". Змініть код для оголошення класу "Студент",
закривши в ньому члени-дані. Напишіть методи доступу до полів класу "Студент".
Напишіть програму, в якій створюються два об'єкти типу "Студент".
Встановіть їх вік, стать і стипендію за допомогою методів доступу.
Роздрукуйте значення окремих членів-даних об'єктів на екрані, використовуючи методи доступу.
Визначте і роздрукуйте середній вік і сумарну стипендію цих двох студентів*/

#include <iostream>
using namespace std;

class Student
{
private:
	string name;
	int age;
	char gender;
	float grant;
public:
	~Student();
	void out_st();

	int Age()
	{
		int* Age = &age;
		return *Age;
	}
	float Grant()
	{
		float* Grant = &grant;
		return *Grant;
	}
	Student()
	{
		name = " ";
		age = 0;
		gender = ' ';
		grant = 0;
	}
	Student(string Name, int Age, char Gender, int Grant)
	{
		name = Name;
		age = Age;
		gender = Gender;
		grant = Grant;
	}
};

void Student::out_st()
{
	cout << "Student name: " << name << endl;
	cout << "Student age = " << age << endl;
	cout << "Student gender: " << gender << endl;
	cout << "Student grant = " << grant << endl;
}

Student::~Student()
{
	cout << "Destructor" << name << endl;
}

int main()
{
	int Age;
	float Grant, avg_age, avg_grant;
	string Name;
	char Gender;

	Student S1 = Student("David", 20, 'M', 1600);

	S1.out_st();

	cout << "Enter name: " << endl;
	cin >> Name;
	cout << "Enter age: " << endl;
	cin >> Age;
	cout << "Enter gender(F/M): " << endl;
	cin >> Gender;
	cout << "Enter grant: " << endl;
	cin >> Grant;

	Student S2 = Student(Name, Age, Gender, Grant);

	S2.out_st();

	avg_age = (float)(S1.Age() + S2.Age()) / 2;
	cout << "Average age: " << avg_age << endl;

	avg_grant = (float)(S1.Grant() + S2.Grant()) / 2;
	cout << "Average grant: " << avg_grant << endl;

	system("pause");
	return 0;
}