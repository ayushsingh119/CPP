#include <iostream>
using namespace std;

int main()
{
    int value{5};

    //========== INCREMENT BY ONE ============//
    value = value + 1;
    cout << "The value is : " << value << endl;

    value = 5;

    //========== DECREMENT BY ONE ===========//
    value = value - 1;
    cout << "The value is : " << value << endl;

    //============= POSTFIX INCREMENT AND DECREMENT ================//
    //======= INCREMENT WITH POSTFIX ==========//
    value = 5;
    cout << "The value is (increment) : " << value++ << endl;
    cout << "The value is : " << value << endl;

    //======== DECREMENT WITH POSTFIX ==========//
    value = 5;
    cout << "The value is (decrementing) : " << value-- << endl;
    cout << "the value is : " << value << endl;

    //========= PREFIX INCREMENT AND DECREMENT ==============//
    //======== INCREMENT WITH PREFIX =========//
    value = 5;
    ++value;
    cout << "The value is : " << value << endl;

    value = 5;
    cout << "The value is  : " << ++value << endl;

    //======== DECREMENT WITH PREFIX =========//
    value = 5;
    --value;
    cout << "The value is : " << value << endl;

    value = 5;
    cout << "The value is : " << --value << endl;

    return 0;
}
