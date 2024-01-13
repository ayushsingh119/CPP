#include <iostream>
using namespace std;

int main()
{
    //  int *data = new int[100000000000];

    // for (size_t i{0}; i < 100000000; i++)
    // {
    //     int *data = new int[100000000];
    // }

    // exception
    // std::nothrow

    /*
    // EXCEPTION //
    for (size_t i{0}; i < 10000000; i++)
    {

        try
        {
            int *data = new int[1000000];
        }
        catch (exception &ex)
        {
            cout << "something went wrong : " << ex.what() << endl;
        }
    }
    */

    // std::nothrow //
    for (size_t i{0}; i < 100; i++)
    {
        int *data = new (nothrow) int[100000000];

        if (data != nullptr)
        {
            cout << "data allocated" << endl;
        }
        else
        {
            cout << "data allocation failed" << endl;
        }
    }
    cout << "program ending well!" << endl;
    return 0;
}