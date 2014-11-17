/*
 * Main.cpp
 *
 *  Created on:  Nov 17, 2014
 *      Author:  explicitname
 *      purpose: To calculate simple arithmetic.
 */
#include <iostream>
using namespace std;

// Defining Arithmetic Functions

float add (float num1, float num2)
	{
		return num1 + num2;
	}

float sub (float num1, float num2)
	{
		return num1 - num2;
	}

float mul (float num1, float num2)
	{
		return num1 * num2;
	}

float div (float num1, float num2)
	{
		return num1 / num2;
	}


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


		if (!num1 || !num2) {
			cout << "Error! You must use numbers!" << endl;
			return 0;
		}

		else if (oper == '+') {
			sum = add (num1,num2);
			cout << "The sum is: " << sum << endl;
		}

		else if (oper == '-') {
			sum = sub (num1,num2);
			cout << "The difference is: " << sum << endl;
		}
		else if (oper == '/') {
			sum = mul (num1,num2);
			cout << "The quotient is: " << sum << endl;
		}

		else if (oper == '*') {
			sum = div (num1,num2);
			cout << "The product is: " << sum << endl;
		}

		else {
			cont = 'n';
		}
		cout << "Would you like to continue? " << endl;
		cout << "Enter y to continue or n to stop: ";
		cin >> cont;


	}	while (cont == 'y' || cont == 'Y');




	return 0;
}


