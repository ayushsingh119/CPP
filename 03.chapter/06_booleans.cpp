#include <iostream>
using namespace std;

int main()
{
    bool red_light{true};
    bool green_light{false};

    if (red_light == true)
    {
        cout << "Stop!" << endl;
    }
    else
    {
        cout << "Go through!" << endl;
    }

    if (green_light) // here it will take as false because it greenlight is defined as false otherwise it willtreat as true by default.
    {
        cout << "The light is green!" << endl;
    }
    else
    {
        cout << "The light is NOT green!" << endl;
    }

    //=== SIZEOF ===//
    cout << "sizeof(bool) : " << sizeof(bool) << endl;

    //========== PRINTING THE VALUE OF BOOL ==========//
    cout << "red light : " << red_light << endl;
    cout << "green light : " << green_light << endl;

    //==== BOOLALPHA ====/
    cout << boolalpha;
    cout << "red light : " << red_light << endl;
    cout << "green light : " << green_light << endl;
    return 0;
}
