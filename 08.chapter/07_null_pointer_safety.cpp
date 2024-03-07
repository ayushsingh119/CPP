#include <iostream>
using namespace std;

int main()
{
    //=== VERBOSE NULLPTR CHECK ===//
    cout << "verbose nullptr check : " << endl;

    int *p_number{}; // Initialize to nullptr
    p_number = new int(7);

    /*
    if (!(p_number == nullptr))
    {
        cout << "p_number points to a valid address : " << p_number << endl;
        cout << "p_number : " << *p_number << endl;
    }
    else
    {
        cout << "p_number points to an invalid address : " << endl;
    }
    */

    if (p_number)
    {
        cout << "p_number points to a valid address : " << p_number << endl;
        cout << "p_number : " << *p_number << endl;
    }
    else
    {
        cout << "p_number points to an invalid address : " << endl;
    }
    delete p_number;
    p_number = nullptr;
    return 0;
}
