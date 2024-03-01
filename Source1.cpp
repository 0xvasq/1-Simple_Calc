#include <iostream>

using namespace std;


void askUserDisplay(double, double, char);
double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);
void operationSelection(double, double, char);

int main() {
	double number1 = 0;
	double number2 = 0;
	char operation = 'x';

	askUserDisplay(number1, number2, operation);
}



void askUserDisplay(double userNum1, double userNum2, char oper) {

	cout << "Which operation would you like to perform?" << endl;
	cin >> oper;
	cout << "Please enter the first number" << endl;
	cin >> userNum1;
	cout << "Please enter the second number" << endl;
	cin >> userNum2;

	operationSelection(userNum1, userNum2, oper);

}


void operationSelection(double a, double b, char select) {


	switch (select) {
	case '+':
		cout << "Result: " << add(a, b) << endl;
		break;
	case '-':
		cout << "Result: " << subtract(a, b) << endl;
		break;
	case '*':
		cout << "Result: " << multiply(a, b) << endl;
		break;
	case '/':
		cout << "Result: " << divide(a, b) << endl;
		break;
	default:
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
	if (b == 0) {
		cout << "Cannot divide by zero" << endl;
		return 0;
	}
	else {
		return a / b;
	}
}

