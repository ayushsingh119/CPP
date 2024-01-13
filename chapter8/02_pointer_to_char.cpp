#include <iostream>
using namespace std;

int main()
{
    const char *message{"Hello world!"};
    cout << "message : " << message << endl;

    //==== IF WE USE *MESSAGE = H it give this compiler error due to ====//
    cout << "*message : " << *message << endl; // H

    //=== ALLOW USERS TO MODIFY THE STRING ====//
    char message1[]{"hello world!"};
    message1[0] = 'B',
    cout << "message1 : " << message1 << endl;
    return 0;
}