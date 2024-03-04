#include <iostream>
using namespace std;

int main()
{
    int var1{123}; // Declare and initialize
    cout << "var1 : " << var1 << endl;

    var1 = 55; // Assign
    cout << "var1 : " << var1 << endl;
    cout << "--------------------------------------------" << endl;

    double var2{44.55}; // Declare and initialize
    cout << "var2 : " << var2 << endl;

    var2 = 99.99; // Assign
    cout << "var2 : " << var2 << endl;
    cout << "-------------------------------------------" << endl;

    bool state{false};
    cout << boolalpha;
    cout << "state : " << state << endl;

    state = true;
    cout << "state : " << state << endl;
    cout << "-----------------------------------------" << endl;

    auto var3{333u};
    // var3 = -22;  here it is not correct so it will show garbage value .

    cout << "var3 : " << var3 << endl;
    return 0;
}
