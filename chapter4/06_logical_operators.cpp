//============ LOGICAL OPERATORS =============//
// 1->  AND OPERATORS &&
// 2->  OR OPERATORS  ||
// 3->  NOT OPERATORS  !

#include <iostream>
using namespace std;

int main()
{
    bool a{true};
    bool b{false};
    bool c{true};

    cout << boolalpha;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;

    //========= BASIC OPERATORS ==========//
    cout << "a && b : " << (a && b) << endl;           // false
    cout << "a && c : " << (a && c) << endl;           // true
    cout << "a && b && c : " << (a && b && c) << endl; // false

    //=========== OR OPERATORS =============//
    cout << "a || b : " << (a || b) << endl;           // true
    cout << "a || c : " << (a || c) << endl;           // true
    cout << "a || b || c : " << (a || b || c) << endl; // true

    //=========== NOT OPEARATORS ==============//
    cout << "!a : " << !a << endl; // false
    cout << "!b : " << !b << endl; // true
    cout << "!c : " << !c << endl; // false

    //=========== COMBINING LOGICAL OPERATORS ============//
    // !(a && b) || c
    cout << "!(a && b) || c : " << (!(a && b) || c) << endl; // true

    //=== COMBINING LOGICAL OPERATORS WITH RELATIONAL OPERATORS ===//
    int d{45};
    int e{20};
    int f{11};

    cout << " d : " << d << endl;
    cout << " e : " << e << endl;
    cout << " f : " << f << endl;

    cout << "(d > e) && (d > f) : " << ((d > e) && (d > f)) << endl;   // true
    cout << "(d==e) || (e <= f) : " << ((d == e) || (e <= f)) << endl; // false
    cout << "(d < e) || (d > f) : " << ((d < e) || (d > f)) << endl;   // true
    cout << "(f > e) || (d < f) : " << ((f > e) || (d < f)) << endl;   // false
    cout << "(d > f) && (f <= d) : " << ((d > f) && (f <= d)) << endl; // true
    cout << "(d > e) && (d <= f) : " << ((d > e) && (d <= f)) << endl; // false
    cout << "(!a) && (d == e) : " << ((!a) && (d <= e)) << endl;       // false
    cout << "(!a) && (d ==e) : " << ((!a) && (d == e)) << endl;        // false

    return 0;
}
