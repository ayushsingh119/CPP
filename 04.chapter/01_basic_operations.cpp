#include <iostream>
using namespace std;

int main()
{
    //========== ADDITION ==========//
    int number1{2};
    int number2{7};

    int result = number1 + number2;
    cout << "result : " << result << endl;

    //========== SUBTRACTION ============//
    result = number2 - number1;
    cout << "result : " << result << endl;

    result = number1 - number2;
    cout << "result : " << result << endl;

    //========== MULTIPLICATION ==========//
    result = number1 * number2;
    cout << "result : " << result << endl;

    //========== DIVISION ===============//
    result = number2 / number1;
    cout << "result : " << result << endl;

    //============ MODULUS =============//
    result = number2 % number1;
    cout << "result : " << result << endl;

    result = 31 % 10;
    cout << "result : " << result << endl;
    return 0;
}
