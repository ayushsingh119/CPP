#include <iostream>
using namespace std;

int main()
{
    int max{};

    int a{35};
    int b{20};

    cout << "using regular if " << endl;
    /*
        if (a > b)
        {
            max = a;
        }
        else
        {
            max = b;
        }

        cout << "max : " << max << endl;
        cout << endl;
        */

    max = (a > b) ? a : b; // ternary operator
    cout << max << endl;

    return 0;
}
