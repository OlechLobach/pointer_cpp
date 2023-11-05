#include<iostream>
using namespace ::std;
int main()
{
	double num1, num2, result;
	char operation;
	cout << "Enter the first number:";
	cin >> num1;
	cout << "Enter the operation (+, -, *, /):";
	cin >> operation;
	cout << "Enter the second number:";
	cin >> num2;

	double* ptr1 = &num1;
	double* ptr2 = &num2;

	if (operation == '+') {
		result = *ptr1 + *ptr2;
	}
	else if (operation == '-') {
		result = *ptr1 - *ptr2;
	}
	else if (operation == '*') {
		result = *ptr1 * *ptr2;
	}
	else if (operation == '/') {
		if (*ptr2 != 0) {
			result = *ptr1 / *ptr2;
		}
		else {
			cout << "division by zero error " << endl;
			return 1;
		}
	}
	else {
		cout << "unknown operation." << endl;
	}
	cout << "result:" << *ptr1 << "" << operation << "" << *ptr2 << "=" << result << endl;
	return 0;
}