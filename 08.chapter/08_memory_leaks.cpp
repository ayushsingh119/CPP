#include <iostream>
using namespace std;

int main()
{
    /*
    int *p_number{new int(67)}; // points to some address, let's call that address

    int number{55}; // lives at address2 stack variable

    p_number = &number; // now p_number points to address2, but address1 is still
    */

    // Double allocation //
    int *p_number1{new int{55}};

    // use the pointer and should delete and reset here

    p_number1 = new int(44); // memory with int{55} leaked.

    delete p_number1;
    p_number1 = nullptr;

    cout << "program ending well!" << endl;

    return 0;
}
