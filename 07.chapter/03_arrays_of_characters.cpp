#include <iostream>
using namespace std;

int main()
{
    /*
    //====== DECLARE ARRAY =======//
    char message[5]{'H', 'e', 'l', 'l', 'o'};

    //== PRINT OUT THE ARRAY THROUGH LOOPING ==//
    cout << "message : ";
    for (auto c : message)
    {
        cout << c;
    }
    cout << endl;

    //========= CHANGE CHARACTERS IN OUR ARRAY ==========//
    message[1] = 'a';
    cout << "message : ";
    for (auto c : message)
    {
        cout << c;
    }
    cout << endl;
    */

    //== IF A CHARACTER ARRAY IS NULL TERMINATED, IT'S CALLED AS C STRING ==//
    char message[6]{'H', 'e', 'l', 'l', 'o', '\0'};
    cout << "message : " << message << endl;

    char message1[]{'H', 'e', 'l', 'l', 'o', '\0'};
    cout << "message1 : " << message1 << endl;
    cout << "sizeof(message1) : " << sizeof(message1) << endl;

    char message2[6]{ 'H', 'e','l', 'l', 'o',};
    cout << "message2 : " << message2 << endl;
    cout << "sizeof(message2) : " << sizeof(message2) << endl;

    // ==== STRING LITERAL =======//
    char message4[]{"Hello world, how are you doing!"};
    cout << "message4 : " << message4 << endl;
    cout << "sizeof(message4) : " << sizeof(message4) << endl;

    return 0;
}
