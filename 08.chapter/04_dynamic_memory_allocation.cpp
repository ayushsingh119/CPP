#include <iostream>
using namespace std;

int main()
{
    /*
    int number{22};
    int *p_number = &number;

    cout << endl;
    cout << "Declaring pointer and assigning address : " << endl;
    cout << "number : " << number << endl;       // 22
    cout << "p_number : " << p_number << endl;   // address
    cout << "&number : " << &number << endl;     // address
    cout << "*p_number : " << *p_number << endl; // 22

    int *p_number1; // uninitialized pointer, contain junk address
    int number1{12};
    p_number1 = &number1; // make it point to a  valid address
    cout << endl;
    cout << "uninitialized pointer : " << endl;
    cout << "*p_number1 : " << *p_number1 << endl;
    */

    /*
    //=== BAD ===//
    // writing into uninitialized pointer through dereference
    int *p_number2;  // contain junk address : could be anything
    *p_number2 = 55; // writing into junk address : BAD!
    cout << endl;
    cout << "writing into uninitialized pointer through dereference" << endl;
    cout << "p_number2 : " << p_number2 << endl;
    cout << "*p_number2 : " << *p_number2 << endl;

    // initialized pointer to null //
    // int *p_number3{nullptr}; // Also works
    int *p_number3{}; // initialized with pointer equivalent of zero : nullptr
    // A pointer pointing nowhere
    // *p_number3 = 33; // writing into a pointer nowhere : BAD, CRASH

    cout << endl;
    cout << "reading and writing through nullptr : " << endl;
    cout << "p_number3 : " << p_number3 << endl;
    cout << "*p_number3 : " << *p_number3 << endl; // reading from nullptr bad crash //
    */

    //===== DYNAMIC HEAP MEMORY ====//
    int *p_number4{nullptr};
    p_number4 = new int; // Dynamically allocate space for a single int on the heap. This memory belongs to out program from now on. The system  can't use it  for anything else, untill we return it. After this line executes, we will have a valid memory location allocated. The size of the allocated memory will be  such that it can store the type pointed to by the ponter //

    *p_number4 = 77; // writing into dynamically memory
    cout << endl;
    cout << "Dynamically allocating memory : " << endl;
    cout << "*p_number4 : " << *p_number4 << endl;

    // After using of dynamic memory we have to delete it //
    delete p_number4;
    p_number4 = nullptr;

    // It is possible to initialize the pointer with a valid
    // address up on declaration not with nullptr
    int *p_number5{new int};     // memory location contains junk value
    int *p_number6{new int(22)}; // use direct initialization
    int *p_number7{new int{23}}; // use uniform initialization

    cout << endl;
    cout << "initialize with valid memory address at declaration : " << endl;
    cout << "p_number5 : " << p_number5 << endl;
    cout << "*p_number5 : " << *p_number5 << endl;

    cout << "p_number6 : " << p_number6 << endl;
    cout << "*p_number6 : " << *p_number6 << endl;

    cout << "p_number7 : " << p_number7 << endl;
    cout << "*p_number7 : " << *p_number7 << endl;

    // REMEMBER TO REALEASE THE MEMORY //
    delete p_number5;
    p_number5 = nullptr;

    delete p_number6;
    p_number6 = nullptr;

    delete p_number7;
    p_number7 = nullptr;

    // CAN REUSE THE POINTERS
    p_number5 = new int(81);
    cout << "p_number5 : " << *p_number5 << endl;
    delete p_number5;
    p_number5 = nullptr;
    return 0;
}
