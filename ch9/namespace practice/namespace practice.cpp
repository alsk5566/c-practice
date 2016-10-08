// namespace practice.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include "namesp.h"
using namespace std;
void other(void);
void another(void);


int main(void)
{
	using debts::Debt;
	using debts::showDebt;
	Debt golf = { {"A","B"},120.0 };
	showDebt(golf);
	other();
	another();
    return 0;
}

void other(void) 
{
	using namespace debts;
	Person dg = {"C","D"};
	showPerson(dg);
	cout << endl;
	Debt zippy[3];
	for (int i = 0; i < 3; i++) 
	{
		getDebt(zippy[i]);
		showDebt(zippy[i]);
	}
	cout << "Total debt: " << sumDebts(zippy, 3) << endl;

	return;
}

void another(void) 
{
	using pers::Person;
	Person collector = {"fuck"," you"};
	pers::showPerson(collector);
	cout << endl;
}

