#include<iostream>
using namespace std;

// All the functions for different arithmetic operations
void addition(int n1, int n2, int* ans) {
	*ans = n1 + n2;
}
void difference(int n1, int n2, int* ans) {
	*ans = n1 - n2;
}
void multiply(int n1, int n2, int* ans) {
	*ans = n1 * n2;
}
void divide(int n1, int n2, int* ans) {
	*ans = n1 / n2;
}
void remainder(int n1, int n2, int* ans) {
	*ans = n1 % n2;
}

// Function caller, it will decide which function to call
// according to the input
void func_caller(char operation_f, int n1, int n2, int* ans) {
	if (operation_f == '+') {
		addition(n1, n2, ans);
	}
	if (operation_f == '-') {
		difference(n1, n2, ans);
	}
	if (operation_f == '*') {
		multiply(n1, n2, ans);
	}
	if (operation_f == '/') {
		divide(n1, n2, ans);
	}
	if (operation_f == '%') {
		remainder(n1, n2, ans);
	}
}
int main()
{
	int num1, num2, answer;
	char operation;

	// Taking input from the user
	cout << "Enter 1st Number: ";
	cin >> num1;
	cout << "Enter 2nd Number: ";
	cin >> num2;
	cout << "Enter Operation(+ , - , * , / , % ): ";
	cin >> operation;

	// Calling function to do the operaton according to input

	func_caller(operation, num1, num2, &answer);

	// Printing the results
	cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << answer << endl;

	return 0;
}
