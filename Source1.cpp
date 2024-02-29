#include <iostream>

using namespace std;


void askUserDisplay(double, double, string);
double add(double, double);
double subtract(double, double);

int main() {
	double number1 = 0;
	double number2 = 0;
	string operation;

	askUserDisplay(number1, number2, operation);



}

void askUserDisplay(double userNum1, double userNum2, string oper) {

	cout << "Please enter the first number" << endl;
	cin >> userNum1;
	cout << "Please enter the second number" << endl;
	cin >> userNum2;
	cout << "Which operation?";
	cin >> oper;

	if (oper == "+") {
		cout << add(userNum1, userNum2);
	}
	else if (oper == "-") {
		subtract(userNum1, userNum2);
	}
	else {
		cout << "try again";
	}
}

double add(double a, double b) {
	return a + b;
}

double subtract(double a, double b) {
	return a - b;
}

double multiply(double a, double b) {
	return a * b;
}

double divide(double a, double b) {
	return a / b;
}
