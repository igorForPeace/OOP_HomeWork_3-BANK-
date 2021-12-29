#include "ALL_libraries.h"

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	Bank bank_1;
	int type_of_action;
	while (true)
	{
		cout << "-------------------------" << endl;
		cout << "¬ыберете действие: " << endl;
		cout << "1 - просмотреть информацию о банке." << endl;
		cout << "2 - просмотреть информацию о первом филиале." << endl;
		cout << "3 - просмотреть информацию о втором филиале." << endl;
		cout << "4 - просмотреть информацию о третьем филиале." << endl;
		cout << "5 - вложить депозит в определенный филиал." << endl;
		cout << "6 - забрать депозит с 5%. " << endl;
		cout << "7 - вз€ть кредит в размере 20000 под 20%." << endl;
		cout << "8 - отдать кредит." << endl;

		cin >> type_of_action;
		switch (type_of_action)
		{
		case 1:
			bank_1.Show_all_bank();
			break;
		case 2:
			bank_1.Show_branch_1();
			break;
		case 3:
			bank_1.Show_branch_2();
			break;
		case 4:
			bank_1.Show_branch_3();
			break;
		case 5:
			bank_1.Accept_deposit();
			break;
		case 6:
			bank_1.Give_deposit_back();
			break;
		case 7:
			bank_1.Accept_credits();
			break;
		case 8:
			bank_1.Take_credits_back();
			break;
		default:
			cout << "Ќе правильно выбраное действие!" << endl;
				
		}
	}
	return 0;
}
