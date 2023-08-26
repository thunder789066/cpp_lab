// Christina Gerstner
// clgdtf@mail.umkc.edu
// 9/10/2019
// CS201L Lab 04

#include <iostream>
#include <string>
#include "checkingmodule.h"
using namespace std;



int main() {
	float accountValue = 0.0f;
	float amount = 0.0f;
	float loanAmount = 0.0f;

	char choice = ' ';
	bool menuCheck = true;

	while (menuCheck) {
		choice = mainMenu();
		if (choice == 'q') {
			menuCheck = false;
		}
		else if (choice == 'd') {
			string message = "How much do you want to deposit? ==> ";
			accountValue += getValue(message);
			cout << "\nSummary of Account\n\tAmount $" << accountValue << endl;
		}
		else if (choice == 'w') {
			string message = "How much do you want to withdraw? ==> ";
			amount = getValue(message, accountValue);
			withdraw(accountValue, amount);
		}
		else if (choice == 'l') {
			float rate = getInterestRate(getCreditRating());
			int months = getLoanMonths();

			int principle = 0;
			cout << "How much do you want to borrow?\t";
			cin >> principle;

			loanAmount += calculateLoanAmount(principle, rate, months);
			outputAccount(loanAmount, principle, rate, months);
		}
	}
	

	return 0;
}