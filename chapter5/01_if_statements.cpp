#include <iostream>
using namespace std;

int main()
{
    int number1{55};
    int number2{60};
    bool result = {number1 < number2};

    /*
    cout << boolalpha << "result : " << result << endl;
    cout << endl;

    cout << "free standing if statement " << endl;

    //========= IF(RESULT) =========//
    if (result == true)
    {
        cout << number1 << " is less than " << number2 << endl;
    }

    //======== IF(!RESULT) ==========//
    if (!(result == true))
    {
        cout << number1 << " is not less than " << number2 << endl;
    }
*/

    //===================== ELSE ===========================//
    cout << "using the else clause : " << endl;
    if (result == true)
    {
        cout << number1 << " is less than " << number2 << endl;
    }
    else
    {
        cout << number1 << " is not less than " << number2 << endl;
    }
    cout << "-----------------------------------------" << endl;

    cout << "using expression as condition : " << endl;
    if (number1 < number2)
    {
        cout << number1 << " is less than " << number2 << endl;
    }
    else
    {
        cout << number1 << " is not less than " << number2 << endl;
    }

    //================= NESTING IF STATEMENTS ==================//
    cout << "nesting if statements : " << endl;

    bool red = false;
    bool green{true};
    bool yellow{false};
    bool police_stop{true};

    // if green : go
    // if red , yellow : stop
    // if green and police_stop : stop

    /*
       if (red)
       {
           cout << "stop!" << endl;
       }
       if (yellow)
       {
           cout << "slow down" << endl;
       }
       if (green)
       {
           cout << "go" << endl;
       }
       */

    /*
    cout << "police officer stops" << endl;
    if (green)
    {
        if (police_stop)
        {
            cout << "stop!" << endl;
        }
        else
        {
            cout << "go" << endl;
        }
    }
    */

    cout << "police officer stops" << endl;
    if (green && !police_stop)
    {
        cout << "go" << endl;
    }
    else
    {
        cout << "stop" << endl;
    }
    return 0;
}
