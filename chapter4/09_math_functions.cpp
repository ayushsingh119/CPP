#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double weight{7.7};

    //============ FLOOR ===============//
    // IT WILL ROUND DOWN THE VALUE
    cout << "Weight rounded to floor is : " << floor(weight) << endl;

    //============ CEIL ===============//
    // IT WILL ROUND UP THE VALUE
    cout << "Weight rounded to ceil is : " << ceil(weight) << endl;

    //============ ABSOLUTE = ABS ==============//
    // THIS GIVE THE ABSOLUTE VALUE WHICH IS NOT CARE ABOUT THE SIGN POS OR NEG NUMBER IT WILL TAKE POS.
    double saving{-5000};

    cout << "Abs of weight is : " << abs(weight) << endl;
    cout << "Abs of weight is : " << abs(saving) << endl;

    // exp : f(x) = e ^ x , where e = 2.71828. Test the result here against a calculation
    double exponential = exp(10);
    cout << "The exponential of 10 is : " << exponential << endl;

    // POW
    cout << "3 ^ 4 is : " << pow(3, 4) << endl;
    cout << "9 ^ 3 is : " << pow(9, 3) << endl;

    // SQRT
    cout << "The square root of 81 is : " << sqrt(81) << endl;

    // ROUND
    cout << "3.645 rounded to : " << round(3.654) << endl;
    cout << "2.5 rounded to : " << round(2.5) << endl;
    cout << "2.4 rounded to : " << round(2.4) << endl;

    return 0;
}
