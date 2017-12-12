// Assign05-HousingTaxCredit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	const double INCOME_LIMIT_MO = 37750;
	const double INCOME_LIMIT_KS = 34500;
	const double CREDIT_RATE = 0.0975;

	char homeowner;
	string state;
	double income;
	double creditAmount;

	cout << fixed << setprecision(0);

	cout << endl << "Are you a homeowner [Y/N]?  ";
	cin >> homeowner;

	while (homeowner != 'Y' && homeowner != 'y' && homeowner != 'N' && homeowner != 'n')
	{
		cout << endl << "Invalid entry  " << homeowner << endl;
		cout << endl << "Are you a homeowner [Y/N]?  ";
		cin >> homeowner;
	}

	if (homeowner == 'Y' || homeowner == 'y')
	{
		cout << endl << "Resident State [MO or KS]:  ";
		cin >> state;
		if (state == "MO" || state == "Mo" || state == "mo")
		{
			cout << endl << "  Amount of annual income:  ";
			cin >> income;
			if (income <= INCOME_LIMIT_MO)
			{
				creditAmount = income * CREDIT_RATE;
				cout << endl << " Allowed amount of credit:  $ " << creditAmount << endl;
			}
			else
			{
				cout << endl << "Applicant ineligible. Income too high." << endl;
			}
		}
		else if (state == "KS" || state == "Ks" || state == "ks")
		{
			cout << endl << "  Amount of annual income:  ";
			cin >> income;
			if (income <= INCOME_LIMIT_KS)
			{
				creditAmount = income * CREDIT_RATE;
				cout << endl << " Allowed amount of credit:  $ " << creditAmount << endl;
			}
			else
			{
				cout << endl << "Applicant ineligible. Income too high." << endl;
			}
		}
		else
		{
			cout << endl << "Applicant ineligible. Not Missouri or Kansas resident." << endl;
		}

	}
	else
	{
		cout << endl << "Applicant ineligible.  Not a homeowner." << endl;
	}

	cout << endl;
	system("pause");
	return 0;
}

