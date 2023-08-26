// Christina Gerstner
// clgdtf@mail.umkc.edu
// 9/03/2019
// CS201L Lab 03

#include <iostream>
#include <cstring>
using namespace std;

double num_of_children = 0.0, num_of_adults = 0.0, num_of_seniors = 0.0, num_of_vip = 0.0;
double grand_total = 0;

void day_count() {
	int count = 0;
	char option = ' ';
	bool check = true;

	while (check) { // while loop continues SO LONG as option (user input) is NOT q,a,c,s,v
		cout << endl << "Enter (C)hild, (A)dult, (S)enior, (V)ip or (Q)uit >> ";
		cin >> option;
		option = toupper(option); // sets option to uppercase value

		switch (option) { // same as if statements, except using cases
		case 'C': cout << endl << "How many children? ";
			cin >> count;
			num_of_children += count;
			break;
		case 'A': cout << endl << "How many adults? ";
			cin >> count;
			num_of_adults += count;
			break;
		case 'S': cout << endl << "How many seniors? ";
			cin >> count;
			num_of_seniors += count;
			break;
		case 'V': cout << endl << "How many VIP? ";
			cin >> count;
			num_of_vip += count;
			break;
		case 'Q':
			break;
		default: cout << endl << "You must type 'C' for children, 'A' for adults, 'S' for seniors, 'V' for VIP, or 'Q' for quit menu." << endl;
		} // default serves same purpose as else statement
		if (option == 'Q') {
			break;
		}
	}
}

int main() {
	// children -> $ 10.95
	// adults	-> $ 19.99
	// seniors	-> $ 18.99
	// vip		-> $ 7.99

	cout << "Welcome to Fun Park Menu System !!" << endl;

	for (int i = 1; i <= 3; i++) {
		int day = i;
		cout << endl << "Starting day " << day << endl;
		day_count(); // this calls day_count function

		double day_total = (num_of_children * 10.95) + (num_of_adults * 19.99) + (num_of_seniors * 18.99) + (num_of_seniors * 18.99);

		cout << endl << "\tDay " << day << endl << endl;
		cout << "\tChild " << num_of_children << " @ 10.95 = \t" << (num_of_children * 10.95) << endl;
		cout << "\tAdults " << num_of_adults << " @ 19.99 = \t" << (num_of_adults * 19.99) << endl;
		cout << "\tSeniors " << num_of_seniors << " @ 18.99 = \t" << (num_of_seniors * 18.99) << endl;
		cout << "\tVIP " << num_of_vip << " @ 7.99 = \t\t" << (num_of_vip * 7.99) << endl << endl;
		cout << "\tTotal = " << day_total << endl << endl;

		// resets values to 0
		num_of_children = 0;
		num_of_adults = 0;
		num_of_seniors = 0;
		num_of_vip = 0;
		day_total = 0;

		// adds & resets total value
		grand_total += day_total;
	}

	cout << "The total for all days is " << grand_total << endl;

	return 0;
}

