/*
	Console calculator program in C++
*/

#include <iostream>
using namespace std;

int main()
{
	double x, y;
	char op;
	cout << "Enter two numbers: " << endl;
	cin >> x >> y;

	cout << "Please select an operation to perform: " << endl;
	cin >> op;

	switch (op) {
		case '+':
			cout << "The sum of " << x << " and " << y << " is: " << x + y << endl;
			break;
		case '-':
			cout << "The subtraction of " << x << " and " << y << " is: " << x - y << endl;
			break;
		case '*':
			cout << "The multiplication of " << x << " and " << y << " is: " << x * y << endl;
			break;
		case '/':
			cout << "The division of " << x << " and " << y << " is: " << x / y << endl;
			break;
		/*case '%':
			cout << "The modulo of " << x << " and " << y << " is: " << x % y << endl;
			break; */
		default:
			cout << "PLEASE ENTER A SUITABLE OPERTAION ( +, -, *, /, %)" << endl;
	}

	
	
	
	
	
	return 0;
}
