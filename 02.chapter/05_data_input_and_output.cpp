// THIS CODE IS FOR PRINTING SINGLE NAME. //
/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age;
    string name;

    cout << "Please type your name and age :" << endl;
    cin >> age >> name;

    cout << "Hello " << name << " you are " << age << " years old!" << endl;

    return 0;
}
*/

// THIS CODE IS FOR PRINTING FULL NAME. //

#include <iostream>
using namespace std;

int main()
{
    int age;
    string fullname;

    cout << "Please type your fullname and age : " << endl;
    getline(cin, fullname);
    cin >> age;

    cout << "Hello " << fullname << " you are " << age << " years old!" << endl;

    return 0;
}
