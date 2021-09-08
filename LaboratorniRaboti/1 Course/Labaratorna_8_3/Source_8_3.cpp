/*Напишіть оголошення і реалізацію закритого класу для роботи з датою, що складається з
трьох цілих чисел: день, місяць, рік. Додайте до складу класу конструктори, деструктори,
методи доступу, логічні методи для перевірки частин дати і визначення високосного року,
друк дати в кількох форматах ( " дд.мм.гг ", " дд / мм / рррр ", " mmm - dd - yyyy " ). */

#include<iostream>
using namespace std;

class Data
{
private:
	int day, monthe, year;
public:

	Data(int Day, int Monthe, int Year)
	{
		day = Day;
		monthe = Monthe;
		year = Year;
	}

	~Data();

	void Monthe_en();
	bool Perevirka();
	bool Vysokosnyy();
	void out_Data1();
	void out_Data2();
	void out_Data3();

};
void Data::out_Data1()
{
	day < 10 ? cout << "0" << day << "." : cout << day << ".";
	monthe < 10 ? cout << "0" << monthe << "." : cout << monthe << ".";

	if (year < 10)
	{
		cout << "0" << year << endl;
	}
	else if (year < 100)
	{
		cout << year << endl;
	}
	else 
	{
		if (year % 100 >= 10)
		{
			cout << year % 100 << endl;
		}
		else
		{
			cout << "0" << year % 100 << endl;
		}
	}

}

void Data::out_Data2()
{
	day < 10 ? cout << "0" << day << "." : cout << day << ".";
	monthe < 10 ? cout << "0" << monthe << "." : cout << monthe << ".";

	if (year < 10)
	{
		cout << "000" << year << endl;
	}
	else if (year < 100)
	{
		cout << "00" << year << endl;
	}
	else if (year < 1000)
	{
		cout << "0" << year << endl;
	}
	else cout << year << endl;
}

void Data::out_Data3()
{
	if (day < 10)
	{
		Monthe_en();
		cout << "-" << "0" << day << "-";
	}
	else
	{
		Monthe_en();
		cout << "-" << day << "-";
	}
	if (year < 10)
	{
		cout << "000" << year << endl;
	}
	else if (year < 100)
	{
		cout << "00" << year << endl;
	}
	else if (year < 1000)
	{
		cout << "0" << year << endl;
	}
	else cout << year << endl;
}

void Data::Monthe_en()
{
	switch (monthe)
	{
	case 1: cout << "Jan";
		break;
	case 2: cout << "Feb";
		break;
	case 3: cout << "Jan";
		break;
	case 4: cout << "Mar";
		break;
	case 5: cout << "Apr";
		break;
	case 6: cout << "May";
		break;
	case 7: cout << "Jun";
		break;
	case 8: cout << "Jul";
		break;
	case 9: cout << "Aug";
		break;
	case 10: cout << "Sep";
		break;
	case 11: cout << "Nov";
		break;
	case 12: cout << "Dec";
		break;
	}
}

Data::~Data()
{
	cout << "Destructor" << endl;
}

bool Data::Vysokosnyy()
{
	if (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Data::Perevirka()
{
	if ((day > 0 && day < 33) && (monthe > 0 && monthe < 13) && (year > 0 && year < 3000))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int Day, Monthe, Year;

	cout << "Please input day, monthe, year: " << endl;
	cin >> Day >> Monthe >> Year;

	Data d1 = Data(Day, Monthe, Year);

	if (d1.Perevirka() == false)
	{
		cout << "Input another day, month, year!!" << endl;
		return 0;
	}

	d1.out_Data1();
	d1.out_Data2();
	d1.out_Data3();
	d1.Vysokosnyy() == true ? cout << "It is High Year." << endl : cout << "It is not High Year." << endl;

	system("pause");
	return 0;
}