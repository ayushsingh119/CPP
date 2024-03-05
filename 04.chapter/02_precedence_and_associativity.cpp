//============= PRECEDENCE  ==============//
/*
Which opersation to do first
*/

//============ ASSOCIATIVITY =============//
/*
Which direction or which order
*/

#include <iostream>
using namespace std;

int main()
{
    int a{6};
    int b{3};
    int c{8};
    int d{9};
    int e{3};
    int f{2};
    int g{5};

    int result = a + b * c - d / e - f + g; // 30
    cout << "result : " << result << endl;

    result = a / b * c + d - e + f; // 24
    cout << "result : " << result << endl;

    result = (a + b) * c - d / e - f + g; // 62
    cout << "result : " << result << endl;
    return 0;
}
