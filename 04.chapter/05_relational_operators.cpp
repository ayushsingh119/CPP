#include <iostream>
using namespace std;

int main()
{
    int number1{45};
    int number2{60};

    cout << "number1 : " << number1 << endl;
    cout << "number2 : " << number2 << endl;

    //============= COMPARING VARIBLES===========//

    cout << boolalpha;
    cout << "number1 < number2 : " << (number1 < number2) << endl;
    cout << "number1 <= number2 : " << (number1 <= number2) << endl;
    cout << "number1 > number2 : " << (number1 > number2) << endl;
    cout << "number1 >= number2 : " << (number1 >= number2) << endl;
    cout << "number1 == number2 : " << (number1 == number2) << endl;
    cout << "number1 != number2 : " << (number1 != number2) << endl;

    bool result = (number1 == number2);
    cout << number1 << " == " << number2 << " : " << result << endl;
    return 0;
}
