//============= NUMBERS SYSTEMS =============//
// 1-> BINARY
// 2-> OCTAL
// 3-> HEXADECIMAL

#include <iostream>
using namespace std;

int main()
{
    int number1 = 15;         // DECIMAL
    int number2 = 017;        // OCTAL
    int number3 = 0x0f;       // HEXADECIMAL
    int number4 = 0b00001111; // BINARY

    cout << "number1 : " << number1 << endl; // 15
    cout << "number2 : " << number2 << endl; // 15
    cout << "number3 : " << number3 << endl; // 15
    cout << "number4 : " << number4 << endl; // 15

    return 0;
}
