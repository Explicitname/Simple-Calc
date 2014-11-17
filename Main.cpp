/*
 * Main.cpp
 *
 *  Created on:  Nov 17, 2014
 *      Author:  explicitname
 *      purpose: To calculate simple arithmetic.
 */
#include <iostream>
using namespace std;

int main()

{

// Variable Declaration

	float num1, num2, sum;
	char oper;
	char cont = 'y';

// Flow Control - Continues until variable cont is not equal to 'y'
	do {
		cout << "Josh's Simple Calculator" << endl;
		cout << "Sample Format: 1 + 1 or 2 - 2" << endl;
		cout << "Please Enter Statement: " << endl;
		cin >> num1 >> oper >> num2;


		if (num1 || num2 == char) {
			cout << "Error! You must use numbers!" << endl;
		}

		if (oper == '+') {
			sum = num1 + num2;
			cout << sum << endl;

		}

		else if (oper == '-') {
			sum = num1 - num2;
			cout << sum << endl;
		}
		else if (oper == '/') {
			sum = num1 / num2;
			cout << sum << endl;
		}

		else if (oper == '*') {
			sum = num1 * num2;
			cout << sum << endl;

		}

		else {
			cout << "Error!" << endl;
			cont = 'n';
		}
		cout << "Would you like to continue? " << endl;
		cout << "Enter y to continue or n to stop: ";
		cin >> cont;


	}	while (cont == 'y');




	return 0;
}


