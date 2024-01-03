//=========== FRACTIONAL NUMBERS ============//
// 1-> FLOAT
// 2-> DOUBLE
// 3-> LONG DOUBLE

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float number1{1.12345678901234567890f};       // precision of 7 digits only.
    double number2{1.12345678901234567890};       // precision of 15 only.
    long double number3{1.12345678901234567890l}; // precision of more than double variable

    cout << "sizeof float :" << sizeof(float) << endl;
    cout << "sizeof double :" << sizeof(double) << endl;
    cout << "sizeof long double :" << sizeof(long double) << endl;

    //========= PRECISION ==========//
    cout << setprecision(20); // it help to print exact number of digits you want.
    cout << "number1 is : " << number1 << endl;
    cout << "number2 is : " << number2 << endl;
    cout << "number3 is : " << number3 << endl;
    cout << "-------------------------------------" << endl;
    //========== SCIENTIFIC NOTATION ===========//
    /*
    What we have seen so far in terms of floating point types is fixed notation. there is another notation, scientific that is  handy if you have really huge numbers or small numbers to represent.
    */

    double number4{192400023};
    double number5{1.92400023e8};
    double number6{1.924e8};

    double number7{0.00000000003498};
    double number8{3.498e-11};

    cout << "number4 is : " << number4 << endl;
    cout << "number5 is : " << number5 << endl;
    cout << "number6 is : " << number6 << endl;
    cout << "number7 is : " << number7 << endl;
    cout << "number8 is : " << number8 << endl;
    cout << "--------------------------------------" << endl;

    //======== INFINITY AND NAN =========//
    double number9{5.6};
    double number10{}; // Initialize with 0
    double number11{}; // Initialize with 0

    double result{number9 / number10}; // Infinity

    cout << number9 << " / " << number10 << " yields " << result << endl;         // infinity
    cout << result << " + " << number9 << " yields " << result + number9 << endl; //  infinity

    //========== NAN ==========//
    result = number10 / number11;
    cout << number10 << " / " << number11 << " yields " << result << endl; // nan

    return 0;
}
