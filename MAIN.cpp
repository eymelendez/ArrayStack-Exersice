// MAIN.cpp

#include<iostream>
#include<cstring>
#include"ArrayStack.h"
using namespace::std;

int main() {

	StackInterface<int>* stackPtr = new ArrayStack<int>();

	int num1, num2, num3, num4, num5, operand1, operand2, result;

	cout << "This is Question #5. " << "\n\n";

	cout << "Enter a number: ";
	cin >> num1;
	stackPtr->push(num1);

	cout << "\nEnter a second number: ";
	cin >> num2;
	stackPtr->push(num2);

	operand2 = stackPtr->peek();
	stackPtr->pop();

	operand1 = stackPtr->peek();
	stackPtr->pop();

	result = operand1 - operand2;
	stackPtr->push(result);

	cout << "\nEnter a third number: ";
	cin >> num3;
	stackPtr->push(num3);

	operand2 = stackPtr->peek();
	stackPtr->pop();

	operand1 = stackPtr->peek();
	stackPtr->pop();

	result = operand1 + operand2;
	stackPtr->push(result);

	cout << "\nThe result for Question #5 is: " << result << "\n\n";

	num1 = 0, num2 = 0, num3 = 0;

	cout << "This is #11 Exercise a. " << "\n\n";
	cout << "Enter a number: ";
	cin >> num1;
	stackPtr->push(num1);

	cout << "\nEnter a second number: ";
	cin >> num2;
	stackPtr->push(num2);

	cout << "\nEnter a third number: ";
	cin >> num3;
	stackPtr->push(num3);

	operand2 = stackPtr->peek();
	stackPtr->pop();

	operand1 = stackPtr->peek();
	stackPtr->pop();

	result = operand1 + operand2;
	stackPtr->push(result);

	operand2 = stackPtr->peek();
	stackPtr->pop();

	operand1 = stackPtr->peek();
	stackPtr->pop();

	result = operand1 - operand2;
	stackPtr->push(result);

	cout << "\nThe result for #11 Exercise a. is: " << result << "\n\n";

	num1 = 0, num2 = 0, num3 = 0;

	cout << "This is #11 Exercise b. " << "\n\n";

	cout << "Enter a number: ";
	cin >> num1;
	stackPtr->push(num1);

	cout << "\nEnter a second number: ";
	cin >> num2;
	stackPtr->push(num2);

	cout << "\nEnter a third number: ";
	cin >> num3;
	stackPtr->push(num3);

	operand2 = stackPtr->peek();
	stackPtr->pop();

	operand1 = stackPtr->peek();
	stackPtr->pop();

	result = operand1 - operand2;
	stackPtr->push(result);

	cout << "\nEnter a fourth number: ";
	cin >> num4;
	stackPtr->push(num4);

	operand2 = stackPtr->peek();
	stackPtr->pop();

	operand1 = stackPtr->peek();
	stackPtr->pop();

	result = operand1 * operand2;
	stackPtr->push(result);

	operand2 = stackPtr->peek();
	stackPtr->pop();

	operand1 = stackPtr->peek();
	stackPtr->pop();

	result = operand1 + operand2;
	stackPtr->push(result);

	cout << "\nThe result for #11 Exercise b. is: " << result << "\n\n";

	num1 = 0, num2 = 0, num3 = 0, num4 = 0;

	cout << "This is #11 Exercise c. " << "\n\n";
	
	cout << "Enter a number: ";
	cin >> num1;
	stackPtr->push(num1);

	cout << "\nEnter a second number: ";
	cin >> num2;
	stackPtr->push(num2);

	operand2 = stackPtr->peek();
	stackPtr->pop();

	operand1 = stackPtr->peek();
	stackPtr->pop();

	result = operand1 + operand2;
	stackPtr->push(result);

	cout << "\nEnter a third number: ";
	cin >> num3;
	stackPtr->push(num3);

	operand2 = stackPtr->peek();
	stackPtr->pop();

	operand1 = stackPtr->peek();
	stackPtr->pop();

	result = operand1 - operand2;
	stackPtr->push(result);

	cout << "\nEnter a fourth number: ";
	cin >> num4;
	stackPtr->push(num4);

	cout << "\nEnter a fifth number: ";
	cin >> num5;
	stackPtr->push(num5);

	operand2 = stackPtr->peek();
	stackPtr->pop();

	operand1 = stackPtr->peek();
	stackPtr->pop();

	result = operand1 * operand2;
	stackPtr->push(result);

	operand2 = stackPtr->peek();
	stackPtr->pop();

	operand1 = stackPtr->peek();
	stackPtr->pop();

	result = operand1 + operand2;
	stackPtr->push(result);

	cout << "\nThe result is: " << result << endl;


	cout << "Exercise number #3: " << "\n\n\n";



	cout <<
	system("pause");

	return 0;

} // end main. 22 de agosto de 2017 - Successful!


/*Output:

This is Question #5.

Enter a number: 7

Enter a second number: 3

Enter a third number: -2

The result for Question #5 is: 2

This is #11 Exercise a.

Enter a number: 7

Enter a second number: 3

Enter a third number: 12

The result for #11 Exercise a. is: -8

Press any key to continue . . .

This is #11 Exercise b.

Enter a number: 7

Enter a second number: 3

Enter a third number: 12

Enter a fourth number: -5

The result for #11 Exercise b. is: 52

This is #11 Exercise c.

Enter a number: 7

Enter a second number: 3

Enter a third number: 12

Enter a fourth number: -5

Enter a fifth number: 1

The result is: -7

*/