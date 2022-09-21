// Lab4_2022.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;

void printMenu() {
	cout << "Please Select which operation to perform: " << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "\nYour Selection: ";
}

void factorial() {
	int n;
	long factorial = 1;

	cout << "\nFactorial";
	cout << "\nEnter a positive number: ";
	cin >> n;

	if (n < 0)
		cout << "Error! Only POSITIVE numbers please! Absolutely NO negatives.";
	else {
		for (int i = 1; i <= n; i++) {
			factorial *= i;
		}
		cout << n << "! = "; //?? << " = " << factorial; ///still need to fix to display equation
	}
}

void arithmetic() {
	int A;
	int B;
	int C;

	cout << "\nArithmetic";
	cout << "\nEnter a number: ";
	cin >> A;

	cout << "Enter a number to add each time: ";
	cin >> B;

	cout << "Enter the number of elements in the series: ";
	cin >> C;

	cout << A << " + " << A+B << endl; //how to display the code
}

void geometric() {
	int A;
	int B;
	int C;

	cout << "\nGeometric";
	cout << "\nEnter a number to start at: ";
	cin >> A;

	cout << "\Enter a number to multiply by each time: ";
	cin >> B;

	cout << "\Enter the number of elements in the series: ";
	cin >> C;

	//cout display equation here
}

int main() {
	int choice;
	char again;

	do {
		printMenu();
		cin >> choice;

		if (choice > 3 || choice < 1) {
			return 0;
		}

		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}

		cout << "\nGo Again? [Y/N] ";
		cin >> again;

	} while (again == 'y' || again == 'Y');
}