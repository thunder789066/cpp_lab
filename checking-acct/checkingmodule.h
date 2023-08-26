#pragma once

#include <iostream>
#include <string>
using namespace std;

char mainMenu(); // returns user choice

float getValue(string message); // gets deposit amt
float getValue(string message, float upperlimit); // gets withdraw amt
float getInterestRate(int creditscore);
int getCreditRating();
void withdraw(float accountAmt, float amount);
int getLoanMonths();
float calculateLoanAmount(float principal, float rate, int months);
void outputAccount(float amount, float principal, float rate, int months);

void deposit(float& account, float amount);
