#pragma once
#include "ALL_libraries.h"
class Bank
{
private:
	char* name;
	unsigned int money_branch_1;
	unsigned int money_branch_2;
	unsigned int money_branch_3;
	unsigned int count_of_deposit;
	unsigned int count_of_credits;
public:
	Bank();
	Bank(const char* name, int money_branch_1, int money_branch_2, int money_branch_3, int count_of_deposit,
		int count_of_credits);
	Bank(const Bank& original);
	~Bank();

	void Set_name(const char* name);
	char Get_name() const;

	void Set_money_branch_1(int money_branch_1);
	int Get_money_branch_1() const;

	void Set_money_branch_2(int money_branch_2);
	int Get_money_branch_2() const;

	void Set_money_branch_3(int money_branch_3);
	int Get_money_branch_3() const;

	void Set_count_of_deposit(int count_of_deposit);
	int Get_count_of_deposit() const;

	void Set_count_of_credits(int count_of_credits);
	int Get_count_of_credits() const;

	void Show_all_bank();
	void Show_branch_1();
	void Show_branch_2();
	void Show_branch_3();

	void Accept_deposit();
	void Give_deposit_back();

	void Accept_credits();
	void Take_credits_back();
};

