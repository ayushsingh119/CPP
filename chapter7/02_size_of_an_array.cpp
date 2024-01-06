#include <iostream>
using namespace std;

int main()
{
    /*
    int scores[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

    cout << "sizeof(scores) : " << sizeof(scores) << endl;
    cout << "sizeof(scores[0]) : " << sizeof(scores[0]) << endl;

    int count{sizeof(scores) / sizeof(scores[0])};

    for (size_t i{0}; i < count; i++)
    {
        cout << "scores[" << i << "] : " << scores[i] << endl;
    }
    */

    //========== RANGED BASED FOR LOOPS =============//
    int scores[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    for (auto i : scores)
    {
        cout << "value : " << i << endl;
    }

    return 0;
}
