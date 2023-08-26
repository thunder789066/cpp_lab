// Christina Gerstner
// clgdtf@mail.umkc.edu
// 10/01/2019
// CS201L Lab 07

#include <iostream>
#include <vector>
#include <stdexcept>
#include "functions.h"
using namespace std;

vector<double> miles;
vector<double> gallons;

double get_miles() {
	bool check = true;
	double miles;
	while (check) {
		try {
			cout << "Enter the number of miles driven: ";
			cin >> miles;

			if (cin.fail()) {
				cin.clear(); // user input cleared
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "\nInvalid input, you must enter a decimal number.\n" << endl;
				continue;
			}

			if (miles < 0) {
				cin.clear(); // user input cleared
				throw runtime_error("\nMiles cannot be less than 0.\n");
			}
			else if (miles >= 0) {
				return miles;
			}
		}
		catch (runtime_error& excpt) {
			cout << excpt.what() << endl;
		}
	}
}

double get_gallons() {
	bool check = true;
	double gals;
	while (check) {
		try {
			cout << "Enter the number of gallons used during trip: ";
			cin >> gals;

			if (cin.fail()) {
				cin.clear(); // user input cleared
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "\nInvalid input, you must enter a decimal number.\n" << endl;
				continue;
			}

			if (gals < 0) {
				cin.clear(); // user input cleared
				throw runtime_error("\nMiles cannot be less than 0.\n");
			}
			else if (gals >= 0) {
				return gals;
			}
		}
		catch (runtime_error& excpt) {
			cout << excpt.what() << endl;
		}
	}
}

double get_mpg(vector<double> miles, vector<double> gallons) {
	try {
		if (miles.size() != gallons.size()) {
			throw runtime_error("No values recorded MPG is nan.");
		}
		else {
			// mpg = miles / gallons
			double mpg, total_miles = 0.0, total_gallons = 0.0;

			for (int i = 0; i < miles.size(); ++i) {
				total_miles += miles[i];	// adds all values of miles
			}
			
			for (int i = 0; i < gallons.size(); ++i) {
				total_gallons += gallons[i];	// adds all values of gallons
			}

			mpg = total_miles / total_gallons;
			return mpg;
		}
	}
	catch (runtime_error& excpt) {
		cout << excpt.what() << endl;
	}
}

void menu() {
	bool check = true;
	char redo_tank = ' ';

	while (check) {
		// gets miles from user
		double mile = get_miles();
		miles.push_back(mile);

		// gets gallons from user
		double gal = get_gallons();
		gallons.push_back(gal);

		double mpg = get_mpg(miles, gallons);

		cout << "Do you want to enter another tank or (Q)uit? ";
		cin >> redo_tank;
		if (redo_tank == 'Q' || redo_tank == 'q') {
			cout << "Your tank's mpg is " << mpg << endl;
			check = false;
		}
		else {
			continue;
		}
	}
}

int main() {
	menu();
}