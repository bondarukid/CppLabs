/*
1. ��������� �� ���������� ��������� ������� ����� � ������ ������� ������� (����� ������ ������� ������ �������� � ������ �������):
	1) ��������� ��� � �����;
	2) �������� ��� � ����;
	3) ����� �������� � ����;
4) ��������� �������� � �����;
5) ���������� ������� �������� � ����.
���������������� ������ ��������� ������� ��� �������� �������� � ���������� �������.

1.	���� ����, � ������� ����� ����� ������ ������ ���������� �����. ���� �����, ���� ������ ������ ���������� ����� � ����� ����������.
�������� ����� ����, � ���� ���������� �� ������ ���������� �����, �� ���������� �� ���� ����������. ������� ������� ����� ��������� �����.
*/
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

vector<string> mails;
vector<string> MicrosoftMails;
vector<string> AmazonMails;

string value;
string Company;

ifstream file;

void PrintArrays()
{
	for (int i = mails.size(); i--;)
	{
		cout << "Email - " << mails[i] << endl;
	}

	for (int i = MicrosoftMails.size(); i--;)
	{
		cout << "Microsoft Email - " << MicrosoftMails[i] << endl;
	}

	for (int i = AmazonMails.size(); i--;)
	{
		cout << "Amazon Email - " << AmazonMails[i] << endl;
	}
}

void OpenFile()
{
	file.open("C://mails.txt");

	if (!file)
	{
		cout << "Open file error!" << endl;
	}
}

void CloseFile()
{
	file.close();
}

void Read()
{
	while (file >> value)
	{
		if (value == "Microsoft")
		{
			Company = value;
		}
		else if (value == "Amazon")
		{
			Company = value;
		}
		else
		{
			if (Company == "Microsoft")
			{
				MicrosoftMails.push_back(value);
				mails.push_back(value);
			}
			else
			{
				AmazonMails.push_back(value);
				mails.push_back(value);
			}
		}
	}
}

void Search(string key)
{
	for (int i = MicrosoftMails.size(); i--;)
	{
		if (key == MicrosoftMails[i])
		{
			cout << "Email - " << key << " - Microsoft - Size of emails - " << MicrosoftMails.size() << endl;
			break;
		}
		else if (key == AmazonMails[i])
		{
			cout << "Email - " << key << " - Amazon - Size of emails - " << AmazonMails.size() << endl;
			break;
		}
	}
}

int main()
{
	OpenFile();
	Read();
	CloseFile();
	PrintArrays();

	string key;

	cout << "Enter email to search work - ";
	cin >> key;

	Search(key);

	system("pause");
	return 0;
}