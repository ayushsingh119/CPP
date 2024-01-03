//============= INITIALIZATION OF INTEGERS ===============//
// 1-> BRACED INITIALIZATION
// 2-> FUNCTIONAL INITIALIZATION
// 3-> ASSIGNMENT INITIALIZATION

//=============== BRACED INITIALIZATION ===============//
/*
#include <iostream>
using namespace std;

int main()
{
    int elephant_count; // 0 or garbage value
    int lion_count{};   // 0
    int dog_count{10};  // 10
    int cat_count{15};  // 15

    int domesticated_animal{dog_count + cat_count};

    cout << "Elephant Count : " << elephant_count << endl;
    cout << "Lion Count : " << lion_count << endl;
    cout << "Dog Count : " << dog_count << endl;
    cout << "Cat Count : " << cat_count << endl;
    cout << "Domesticated Count : " << domesticated_animal << endl;

    return 0;
}
*/

//============== FUNCTIONAL INITIALIZATION ===============//
/*
#include <iostream>
using namespace std;

int main()
{
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);

    cout << "Apple Count : " << apple_count << endl;
    cout << "Orange Count : " << orange_count << endl;
    cout << "fruit Count : " << fruit_count << endl;
    return 0;
}
*/

//============== ASSIGNMENT INITIALIZATION ===============//

#include <iostream>
using namespace std;

int main()
{
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;

    cout << "Bike Count : " << bike_count << endl;
    cout << "Truck Count : " << truck_count << endl;
    cout << "Vehicle Count : " << vehicle_count << endl;

    //========== SIZE OF VARIABLES ============//
    cout << "sizeof int : " << sizeof(int) << endl;
    cout << "sizeof truck_count : " << sizeof(truck_count) << endl;

    return 0;
}
