#pragma once
#include "stdafx.h"
#include<iostream>
#include<string>

using namespace std;

namespace pers 
{
	struct Person
	{
		std::string fname;
		std::string lname;
	};
	void getPerson(Person &);
	void showPerson(const Person &);
	Person fuck(char , int);
}

namespace debts 
{
	using namespace pers;
	struct Debt 
	{
		Person name;
		double amount;
	};
	void getDebt(Debt &);
	void showDebt(const Debt &);
	double sumDebts(const Debt ar[], int n);
}