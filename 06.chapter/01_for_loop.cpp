#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "I love c++" << endl;
    }
    cout << "loop done!" << endl;
    cout << endl;

    for (size_t i{0}; i < 10; i++)
    {
        cout << i << " I love c++" << endl;
    }

    cout << "size of (size_t) : " << sizeof(size_t) << endl;

    return 0;
}
