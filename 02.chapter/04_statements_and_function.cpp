//============== STATEMENTS =================//
/*
1-> A statement is a basic unit of computation in a c++ program.
2-> Every c++ program is a collection of statements.
2-> Statements end with a semicolon in c++.
*/

// Here this is the basic code for addition of two numbers. //
/*
#include <iostream>
using namespace std;

int main()
{
    int firsNumber = 12;
    int secondNumber = 9;

    int sum = firsNumber + secondNumber;
    cout << "The sum of two numbers is : " << sum << endl;
    return 0;
}
*/

// Here this is the code of addition of two numbers with the help of functions. //
#include <iostream>
using namespace std;

int addNumbers(int firstNumber, int secondNumber)
{
    int sum = firstNumber + secondNumber;
    return sum;
}

int main()
{
    int firstNumber = 12;
    int secondNumber = 9;

    int sum = firstNumber + secondNumber;
    cout << "The sum of two numbers is :" << sum << endl;

    sum = addNumbers(12, 9);
    cout << "The sum of two numbers is : " << sum << endl;
    cout << "The sum of two numbers is : " << addNumbers(12, 9) << endl;

    return 0;
}
