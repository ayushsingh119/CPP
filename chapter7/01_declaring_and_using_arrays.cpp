#include <iostream>
using namespace std;

int main()
{
    //============= DECLARE AN ARRAY OF INTS ===============//
    int scores[10]; // JUNCK DATA

    // READ DATA
    cout << " scores[0] : " << scores[0] << endl;
    cout << " scores[1] : " << scores[1] << endl;

    // READ WITH A LOOP
    for (size_t i{0}; i < 10; i++)
    {
        cout << "scores [" << i << "] : " << scores[i] << endl;
    }
    cout << endl;

    //============= WIRTE DATA INTO AN ARRAY ===============//
    scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22;

    for (size_t i{0}; i < 3; i++)
    {
        cout << "scores [" << i << "] : " << scores[i] << endl;
    }
    cout << endl;

    //============ DECLARE AND INITAIALIZE AT THE SAME TIME ==============//
    double salaries[5]{12.7, 7.5, 13.2, 8.1, 9.3};

    for (size_t i{0}; i < 6; i++)
    {
        cout << "salary [" << i << "] : " << salaries[i] << endl;
    }
    cout << endl;

    //========== IF YOU DON'T INITIALIZE ALL THE ELEMENTS, THOSE YOU LEAVE OUT ARE INITIALIZED TO 0 ==============//
    int families[5]{12, 7, 5};

    for (size_t i{0}; i < 6; i++)
    {
        cout << "families [" << i << "] : " << families[i] << endl;
    }
    cout << endl;

    //======== OMIT THE SIZE OF THE ARRAY AT DECLARATION =======//
    int class_sizes[]{10, 12, 15, 11, 18, 17};
    for (auto value : class_sizes)
    {
        cout << "value : " << value << endl;
    }

    //=========== SUM UP SCORES ARRAY, STORE RESULT IN SUM ==========//
    int car[]{2, 5, 8, 2, 5, 6, 9};
    int sum{0};
    for (int element : car)
    {
        sum += element;
    }
    cout << "car sum : " << sum << endl;
    return 0;
}
