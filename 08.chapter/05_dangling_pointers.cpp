#include <iostream>
using namespace std;

int main()
{
    /*
    // CASE 1 : UNINITIALIZE POINTER //
    int *p_number; // dangling uninitialized pointer

    cout << endl;
    cout << "case 1 : uninitialize pointer : " << endl;
    cout << "p_number : " << p_number << endl;
    cout << "*p_number : " << *p_number << endl; // crash! or garbage
    */

    /*
    // CASE 2 : DELETED POINTER //
    cout << "deleted pointer : " << endl;
    int *p_number1{new int{57}};
    cout << "*p_number1(before delete) : " << *p_number1 << endl;

    delete p_number1;
    cout << "*p_number1(after delete) : " << *p_number1 << endl;
    */

    /*
    // CASE 3 : MULITIPLE POINTERS POINTING TO SAME ADDRESS //
    cout << "case 3 : multiplle pointers pointing to same address : " << endl;

    int *p_number3{new int(83)};
    int *p_number4{p_number3};

    cout << "p_number3 : " << p_number3 << " - " << *p_number3 << endl;
    cout << "p_number4 : " << p_number4 << " - " << *p_number4 << endl;

    // DELETING p_number3 //
    delete p_number3;

    // p_number4 points to deleted memory. dereferece it will lead to
    // undefined behaviour : crash / garbage or whatever
    cout << "p_number4 (after deleting p_number3) : " << p_number4 << " - " << *p_number4 << endl; // here it will show garbage because p_number is delete now .
    cout << "program is ending well" << endl;
    */

    /*
    // Solution : initialize your pointers immediately upon declaration //
    cout << "solution1 : " << endl;
    int *p_number5{nullptr};
    int *p_number6{new int(56)};

    // check for nullptr before use //
    if (p_number6 != nullptr)
    {
        cout << "*p_number6 : " << *p_number6 << endl;
    }
    else
    {
        cout << "Invalid address : " << endl;
    }
    delete p_number6;
    p_number6 {nullptr};
    */

    /*
   // Solution 2 :
   // right after you call delete on pointer, remember to reset
   // the pointer to nullptr to make it clear it doen't point anywere

   cout << "Solution 2 : " << endl;
   int *p_number7{new int(85)};

   cout << "p_number7 : " << p_number7 << " - " << *p_number7 << endl;

   delete p_number7;
   p_number7 = nullptr; // reset the pointer

   if (p_number7 != nullptr)
   {
       cout << "*p_number7 : " << *p_number7 << endl;
   }
   else
   {
       cout << "Invalid memory access!" << endl;
   }
   */

    // Solution 3
    // for multiple pointers pointing to the same address, make sure there is
    // one clear pointer (master pointer) that owns the memory (responsible for releasing when necessary), other pinters should only be able to dereference when the master pointer is valid

    cout << "solution 3 : " << endl;
    int *p_number8{new int(382)}; // let's say p_number8 is the master pointer
    int *p_number9{p_number8};

    // Dereference the pointers and use them //
    cout << "p_number8 : " << p_number8 << " - " << *p_number8 << endl;

    if (!(p_number8 == nullptr))
    {
        cout << "p_number9 : " << p_number9 << " - " << *p_number9 << endl;
    }

    delete p_number8; // Master releases the memory
    p_number8 = nullptr;

    if (!(p_number8 == nullptr))
    {
        cout << "p_number9 : " << p_number9 << " - " << *p_number9 << endl;
    }
    else
    {
        cout << "WARNING : Trying to use an invalid pointer!" << endl;
    }
    return 0;
}
