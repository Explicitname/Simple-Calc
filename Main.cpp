/*
 * Main.cpp
 *
 *  Created on: Nov 17, 2014
 *      Author: explicitname
 */
#include <iostream>
using namespace std;

int main()

{

	float num1;
	float num2;
	float sum;
	char oper;

	cout << "Josh's Simple Calculator" << endl;
	cout << "Sample Format: 1 + 1 or 2 - 2" << endl;
	cout << "Please Enter Statement: " << endl;
	cin >> num1 >> oper >> num2;

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
						}






	return 0;
}


