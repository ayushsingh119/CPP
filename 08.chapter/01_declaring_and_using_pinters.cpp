#include <iostream>
using namespace std;

int main()
{
    //====== DECLARE AND INITIALIZE POINTER ======//
    int *p_number{}; // will initialize with nullptr
    double *p_fractional_number{};

    //=== EXPLICITLY INITIALIZE WITH NULLPTR ===//
    int *p_number1{nullptr};
    int *p_fractional_number1{nullptr};

    //== POINTER TO DIFFERENT VARIABLES ARE OF THE SAME SIZE ===//
    cout << "sizeof(int) : " << sizeof(int) << endl;
    cout << "sizeof(double) : " << sizeof(double) << endl;
    cout << "sizeof(double*) : " << sizeof(double *) << endl;
    cout << "sizeof(int*) : " << sizeof(int *) << endl;
    cout << "sizeof(p_number1) : " << sizeof(p_number1) << endl;
    cout << "sizeof(p_fractional_number1) : " << sizeof(p_fractional_number1) << endl;
    cout << endl;
    //== HOW TO DECLARE THE POINTER ==//
    int *p_number2{nullptr};
    int *p_number3{nullptr};
    int *p_number4{nullptr};

    int *p_number5{}, other_int_var{};
    int *p_number6{}, other_int_var6{};

    cout << "sizeof(p_number5) : " << sizeof(p_number5) << endl;
    cout << "sizeof(other_int_var) : " << sizeof(other_int_var) << endl;
    cout << "sizeof(p_number6) : " << sizeof(p_number6) << endl;
    cout << "sizeof(other_int_var6) : " << sizeof(other_int_var6) << endl;

    //== IT IS BETTER TO SEPARATE THESE DECLARATION ON DIFFERENT LINES THOUGH ==/
    int *p_number7{};
    int other_int_var7{};

    //== INITIALIZE POINTER AND ASSIGNING THEM DATA ==//
    int int_var{43};
    int *p_int{&int_var}; // the address of operato (&);

    cout << "int var : " << int_var << endl;
    cout << "p_int (address in memory) : " << p_int << endl;
    cout << "p_int (address in memory) : " << *p_int << endl;
    cout << endl;

    //== YOU CAN CHANGE THE ADDRESS STORED IN A POINTER ANY TIME ==//
    int int_var1{65};
    p_int = &int_var1; // assign  a  different address to the pointer
    cout << "p_int (with different address) : " << p_int << endl;

    // THE TYPE OF POINTER AND VARIABLE SHOULD BE SAME . //

    //=== DEREFERENCING A POINTER :
    int *p_int2{nullptr};
    int int_data{56};
    p_int2 = &int_data;

    cout << "value : " << *p_int2 << endl;

    return 0;
}
