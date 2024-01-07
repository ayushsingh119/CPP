#include <iostream>
using namespace std;

int main()
{
    int numbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    //== READ BEYOND BOUNDS : WILL READ GARBAGE OR CRASH YOUR PROGRAM ==//
    cout << "numbers[12] : " << numbers[12] << endl; // garbage value

    numbers[12] = 1000;
    cout << "numbers[12] : " << numbers[12] << endl;
    return 0;
}