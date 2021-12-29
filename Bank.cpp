#include "Bank.h"

Bank::Bank()
{
	name = new char[100];
	strcpy_s(name, 99, "Pivnichny");
	money_branch_1 = 100000;
	money_branch_2 = 56000;
	money_branch_3 = 97500;
	count_of_deposit = 0;
	count_of_credits = 0;
}

Bank::Bank(const char* name, int money_branch_1, int money_branch_2, int money_branch_3, int count_of_deposit,
	int count_of_credits)
{
	this->name = new char[100];
	strcpy_s(this->name, 99, name);
	this->money_branch_1 = money_branch_1;
	this->money_branch_2 = money_branch_2;
	this->money_branch_3 = money_branch_3;
	this->count_of_deposit = count_of_deposit;
	this->count_of_credits = count_of_credits;
}

Bank::Bank(const Bank& original)
{
	name = new char[100];
	strcpy_s(name, 99, original.name);
	money_branch_1 = original.money_branch_1;
	money_branch_2 = original.money_branch_2;
	money_branch_3 = original.money_branch_3;
	count_of_deposit = original.count_of_deposit;
	count_of_credits = original.count_of_credits;
}

Bank:: ~Bank()
{
	if (name != nullptr)
	{
		delete[] name;
	}
}

void Bank::Set_name(const char* name)
{
	this->name = new char[100];
	strcpy_s(this->name, 99, name);
}

char Bank::Get_name() const
{
	return *name;
}

void Bank::Set_money_branch_1(int money_branch_1)
{
	this->money_branch_1 = money_branch_1;
}

int Bank::Get_money_branch_1() const
{
	return money_branch_1;
}

void Bank::Set_money_branch_2(int money_branch_2)
{
	this->money_branch_2 = money_branch_2;
}

int Bank::Get_money_branch_2() const
{
	return money_branch_2;
}

void Bank::Set_money_branch_3(int money_branch_3)
{
	this->money_branch_3 = money_branch_3;
}

int Bank::Get_money_branch_3() const
{
	return money_branch_3;
}

void Bank::Set_count_of_deposit(int count_of_deposit)
{
	this->count_of_deposit = count_of_deposit;
}

int Bank::Get_count_of_deposit() const
{
	return count_of_deposit;
}

void Bank::Set_count_of_credits(int count_of_credits)
{
	this->count_of_credits = count_of_credits;
}

int Bank::Get_count_of_credits() const
{
	return count_of_credits;
}

void Bank::Show_all_bank()
{
	cout << "-------------------------" << endl;
	cout << "���������� � ����� " << name << endl;
	cout << "���������� ����� � 1-�� �������: " << Bank::Get_money_branch_1() << endl;
	cout << "���������� ����� � 2-�� �������: " << Bank::Get_money_branch_2() << endl;
	cout << "���������� ����� � 3-e� �������: " << Bank::Get_money_branch_3() << endl;
	cout << "����� ���������� ����� � ����� " << name << ": " << Bank::Get_money_branch_1() + 
		Bank::Get_money_branch_2() + Bank::Get_money_branch_3() << endl;
	cout << "���������� �������� ���������: " << Bank::Get_count_of_deposit() << endl;
	cout << "���������� �������� ��������: " << Bank::Get_count_of_credits() << endl;

}

void Bank::Show_branch_1()
{
	cout << "-------------------------" << endl;
	cout << "���������� � ������ ������� ����� " << name << endl;
	cout << "���������� �����: " << Bank::Get_money_branch_1() << endl;
}

void Bank::Show_branch_2()
{
	cout << "-------------------------" << endl;
	cout << "���������� � ������ ������� ����� " << name << endl;
	cout << "���������� �����: " << Bank::Get_money_branch_2() << endl;
}

void Bank::Show_branch_3()
{
	cout << "-------------------------" << endl;
	cout << "���������� � ������� ������� ����� " << name << endl;
	cout << "���������� �����: " << Bank::Get_money_branch_3() << endl;
}

void Bank::Accept_deposit()
{
	cout << "-------------------------" << endl;
	cout << "� ����� ������ ������� 25000 (1 - � ������ ������, 2 - �� ������, 3 - � ������):  ";
	int number;
	while (true)
	{
		cin >> number;
		if (number == 1)
		{
			Set_money_branch_1(Get_money_branch_1() + 25000);
			cout << "-------------------------" << endl;
			cout << "�� ������� ������ � ������ ������" << endl;
			cout << "������ ����� ������� ������� - " << Get_money_branch_1()<< endl;
			Set_count_of_deposit(Get_count_of_deposit()+1);
			break;
		}
		else if (number == 2)
		{
			Set_money_branch_2(Get_money_branch_2() + 25000);
			cout << "-------------------------" << endl;
			cout << "�� ������� ������ �� ������ ������" << endl;
			cout << "������ ����� ������� ������� - " << Get_money_branch_2()<< endl;
			Set_count_of_deposit(Get_count_of_deposit() + 1);
			break;
		}
		else if (number == 3)
		{
			Set_money_branch_3(Get_money_branch_3() + 25000);
			cout << "-------------------------" << endl;
			cout << "�� ������� ������ � ������ ������" << endl;
			cout << "������ ����� �������� ������� - " << Get_money_branch_3()<< endl;
			Set_count_of_deposit(Get_count_of_deposit() + 1);
			break;
		}
		else
		{
			cout << "-------------------------" << endl;
			cout << "��� ������ �������, �������� ������." << endl;
		}
	}
}

void Bank::Give_deposit_back()
{
	if (Get_count_of_deposit() > 0)
	{
		cout << "-------------------------" << endl;
		cout << "�� ������ ������� ������� �������? : ";
		int number;
		while (true)
		{
			cin >> number;
			if (number == 1)
			{
				if (Get_money_branch_1() >= (25000 * 1.05))
				{
					Set_money_branch_1(Get_money_branch_1() - 25000 * 1.05);
					cout << "-------------------------" << endl;
					cout << "�� ������� ������ �� ������� �������" << endl;
					cout << "���������� ����� �� ������ �������: " << Get_money_branch_1() << endl;
					Set_count_of_deposit(Get_count_of_deposit() - 1);
					break;
				}
				else
				{
					cout << "-------------------------" << endl;
					cout << "� ��������� � ���� ������� ��� �������, �������� ������ ������: ";
				}
				
			}
			else if (number == 2)
			{
				if (Get_money_branch_2() >= (25000 * 1.05))
				{
					Set_money_branch_2(Get_money_branch_2() - 25000 * 1.05);
					cout << "-------------------------" << endl;
					cout << "�� ������� ������ �� ������� �������" << endl;
					cout << "���������� ����� �� ������ �������: " << Get_money_branch_2() << endl;
					Set_count_of_deposit(Get_count_of_deposit() - 1);
					break;
				}
				else
				{
					cout << "-------------------------" << endl;
					cout << "� ��������� � ���� ������� ��� �������, �������� ������ ������: ";
				}
			}
			else if (number == 3)
			{
				if (Get_money_branch_3() >= (25000 * 1.05))
				{
					Set_money_branch_3(Get_money_branch_3() - 25000 * 1.05);
					cout << "-------------------------" << endl;
					cout << "�� ������� ������ �� �������� �������" << endl;
					cout << "���������� ����� �� ������� �������: " << Get_money_branch_3() << endl;
					Set_count_of_deposit(Get_count_of_deposit() - 1);
					break;
				}
				else
				{
					cout << "-------------------------" << endl;
					cout << "� ��������� � ���� ������� ��� �������, �������� ������ ������: ";
				}
			}
			else
			{
				cout << "-------------------------" << endl;
				cout << "��� ������ �������, �������� ������." << endl;
			}

		}
	}
	else
	{
		cout << "-------------------------" << endl;
		cout << "� ����� ��� ���������, ���� �� ��������!" << endl;
	}
}

void Bank::Accept_credits()
{
	cout << "-------------------------" << endl;
	cout << "� ����� ��������� ����� �� ������� ����� ������: ";
	int number;
	while (true)
	{
		cin >> number;
		if (number == 1)
		{
			if (Get_money_branch_1() >= 20000)
			{
				Set_money_branch_1(Get_money_branch_1() - 20000);
				cout << "-------------------------" << endl;
				cout << "�� ����� ������ � ������ ������� � ������� 20000 ��� 20%." << endl;
				cout << "���������� ����� � ������ �������: " << Get_money_branch_1() << endl;
				Set_count_of_credits(Get_count_of_credits() + 1);
				break;
			}
			else
			{
				cout << "-------------------------" << endl;
				cout << "� ������ ������� ������������ �������, �������� ������ ������: ";
			}
		}
		else if (number == 2)
		{
			if (Get_money_branch_2() >= 20000)
			{
				Set_money_branch_2(Get_money_branch_2() - 20000);
				cout << "-------------------------" << endl;
				cout << "�� ����� ������ � ������ ������� � ������� 20000 ��� 20%." << endl;
				cout << "���������� ����� � ������ �������: " << Get_money_branch_2() << endl;
				Set_count_of_credits(Get_count_of_credits() + 1);
				break;
			}
			else
			{
				cout << "-------------------------" << endl;
				cout << "� ������ ������� ������������ �������, �������� ������ ������: ";
			}
		}
		else if (number == 3)
		{
			if (Get_money_branch_3() >= 20000)
			{
				Set_money_branch_3(Get_money_branch_3() - 20000);
				cout << "-------------------------" << endl;
				cout << "�� ����� ������ � ������ ������� � ������� 20000 ��� 20%." << endl;
				cout << "���������� ����� � ������ �������: " << Get_money_branch_3() << endl;
				Set_count_of_credits(Get_count_of_credits() + 1);
				break;
			}
			else
			{
				cout << "-------------------------" << endl;
				cout << "� ������ ������� ������������ �������, �������� ������ ������: ";
			}
		}
		else
		{
			cout << "-------------------------" << endl;
			cout << "��� ������ �������, �������� ������." << endl;
		}
	}
}

void Bank::Take_credits_back()
{
	if (Get_count_of_credits() > 0)
	{
		cout << "-------------------------" << endl;
		cout << "� �a��� ��������� ����� �� ������� ������ ������: ";
		int number;
		while (true)
		{
			cin >> number;
			if (number == 1)
			{
				Set_money_branch_1(Get_money_branch_1() + 20000 * 1.2);
				cout << "-------------------------" << endl;
				cout << "�� ����������� ������ � ������ ������." << endl;
				cout << "������ ������� ������� ����������: " << Get_money_branch_1() << endl;
				Set_count_of_credits(Get_count_of_credits() - 1);
				break;
			}
			else if (number == 2)
			{
				Set_money_branch_2(Get_money_branch_2() + 20000 * 1.2);
				cout << "-------------------------" << endl;
				cout << "�� ����������� ������ �� ������ ������." << endl;
				cout << "������ ������� ������� ����������: " << Get_money_branch_2() << endl;
				Set_count_of_credits(Get_count_of_credits() - 1);
				break;
			}
			else if (number == 3)
			{
				Set_money_branch_3(Get_money_branch_3() + 20000 * 1.2);
				cout << "-------------------------" << endl;
				cout << "�� ����������� ������ � ������ ������." << endl;
				cout << "������ �������� ������� ����������: " << Get_money_branch_3() << endl;
				Set_count_of_credits(Get_count_of_credits() - 1);
				break;
			}
			else
			{
				cout << "-------------------------" << endl;
				cout << "��� ������ �������, �������� ������:" << endl;
			}
		}
	}
	else
	{
		cout << "-------------------------" << endl;
		cout << "��� ���� �� ������� ������ �������." << endl;
	}
}

