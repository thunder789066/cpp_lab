#include <iostream>
#include <string>
#include "checkingmodule.h"
using namespace std;

char mainMenu() {
	bool check = true;
	char choice = ' ';

	while (check) {
		cout << "Main Menu (Enter one of the following )" << endl;
		cout << "\t(D)eposit, (W)ithdraw, (L)oan (Q)uit" << endl;
		cin >> choice;
		choice = tolower(choice);

		switch (choice)	{
		case 'd': //deposit
			break;
		case 'w': //withdraw
			break;
		case 'l': //loan
			break;
		case 'q': //quit
			break;
		default:
			cout << "\tInvalid choice." << endl;
			break;
		}
		if (choice == 'd' || choice == 'w' || choice == 'l' || choice == 'q') {
			check = false;
		}
	}

	return choice;
}

void deposit(float& account, float amount) {	// move this down to a better spot
	account += amount;
	cout << account;
}

float getValue(string message) { // gets deposit amt
	float amount = 0.0;
	bool check = true;

	while (check) {
		cout << message;
		cin >> amount;
		if (amount > 0) {
			check = false;
		}
		else {
			cout << "\nYou must enter an amount greater than 0" << endl;
			continue;
		}
	}

	return amount;
}

float getValue(string message, float upperlimit) {	// gets withdrawn amt
	float amount = 0.0;
	bool check = true;

	while (check) {
		cout << message;
		cin >> amount;
		if (amount > 0 && amount <= upperlimit) {
			check = false;
		}
		else {
			cout << "\nYou must enter an amount between 0-" << upperlimit << endl;
			continue;
		}
	}

	return amount;
}

float getInterestRate(int creditscore) { // credit rating passed through as creditscore
	float chargeAmt = 0.0;

	if (creditscore <= 500) {
		chargeAmt = 0.05;
	}
	else if (creditscore > 500 && creditscore <= 700) {
		chargeAmt = 0.03;
	}
	else if (creditscore > 700) {
		chargeAmt = 0.01;
	}
	return chargeAmt;
}

int getCreditRating() {
	int creditAmt = 0;
	bool check = true;

	while (check) {
		cout << "What is your credit rating? [300,850] ==> ";
		cin >> creditAmt;

		if (creditAmt >= 300 && creditAmt <= 850) {
			break;
		}
		else {
			cout << "\nYou must choose a value from 300 - 850 inclusive." << endl;
			continue;
		}
	}
	return creditAmt;
}

void withdraw(float accountAmt, float amount) { // withdraws amt from account
	accountAmt -= amount;
}

int getLoanMonths() {
	int months = 0;
	bool check = true;

	while (check) {
		cout << "How many months for the loan? 12, 24, 36 or 60 ==> ";
		cin >> months;

		switch (months) {
		case 12:
			break;
		case 24:
			break;
		case 36:
			break;
		case 60:
			break;
		default:
			cout << "You must enter 12, 24, 36 or 60 only" << endl;
			break;
		}
		if (months == 12 || months == 24 || months == 36 || months == 60) {
			check = false;
		}
	}
	return months;
}

float calculateLoanAmount(float principal, float rate, int months) {
	float amount = pow((principal * (1 + (rate / 12))), (months / 12));
	return amount;
}

void outputAccount(float amount, float principal, float rate, int months) {
	cout << "Interest Rate: " << rate << endl;
	cout << "Principal: " << principal << endl;
	cout << "Months: " << months << endl;
	cout << "Your total loan amount is " << amount << endl;
}
