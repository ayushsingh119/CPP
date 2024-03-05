#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //====== ENDL======//
    cout << "Hello";
    cout << "World";
    cout << endl;
    cout << "---------------------------------" << endl;

    cout << "Hello" << endl;
    cout << "World" << endl;

    cout << "Hello\n";
    cout << "World\n";
    cout << endl;
    cout << "----------------------------------" << endl;

    //========== SETW() =========//
    cout << "unformatted table : " << endl;
    cout << "Lastname"
         << " "
         << "Firstname"
         << "age" << endl;
    cout << "Daniel"
         << " "
         << "Gray"
         << " 25 " << endl;
    cout << "Stanley"
         << " "
         << "Woods"
         << " 33 " << endl;
    cout << "Jordan"
         << " "
         << "Parker"
         << " 45 " << endl;
    cout << "Joe"
         << " "
         << "Ball"
         << " 21 " << endl;
    cout << "josh"
         << " "
         << "carr"
         << " 27 " << endl;
    cout << "Izaiah"
         << " "
         << "Robinson"
         << " 29 " << endl;

    cout << "fomatted table : " << endl;
    cout << setw(10) << "Lastname" << setw(10) << "Firstname" << setw(10) << "age" << endl;
    cout << setw(10) << "Daniel" << setw(10) << "Gray" << setw(10) << "25" << endl;
    cout << setw(10) << "Stanley" << setw(10) << "Woods" << setw(10) << "33" << endl;
    cout << setw(10) << "Jordan" << setw(10) << "Parker" << setw(10) << "45" << endl;
    cout << setw(10) << "Joe" << setw(10) << "Ball" << setw(10) << "21" << endl;
    cout << setw(10) << "josh" << setw(10) << "carr" << setw(10) << "27" << endl;
    cout << setw(10) << "Izaiah" << setw(10) << "Robinson" << setw(10) << "29" << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    int col_width{14};

    cout << setw(col_width) << "Lastname" << setw(col_width) << "Firstname" << setw(col_width) << "age" << endl;
    cout << setw(col_width) << "Daniel" << setw(col_width) << "Gray" << setw(col_width) << "25" << endl;
    cout << setw(col_width) << "Stanley" << setw(col_width) << "Woods" << setw(col_width) << "33" << endl;
    cout << setw(col_width) << "Jordan" << setw(col_width) << "Parker" << setw(col_width) << "45" << endl;
    cout << setw(col_width) << "Joe" << setw(col_width) << "Ball" << setw(col_width) << "21" << endl;
    cout << setw(col_width) << "josh" << setw(col_width) << "carr" << setw(col_width) << "27" << endl;
    cout << setw(col_width) << "Izaiah" << setw(col_width) << "Robinson" << setw(col_width) << "29" << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    //========= JUSTIFIED THE DATA TO RIGHT ============//
    col_width = 20;

    cout << right;
    cout << setw(col_width) << "Lastname" << setw(col_width) << "Firstname" << setw(col_width) << "age" << endl;
    cout << setw(col_width) << "Daniel" << setw(col_width) << "Gray" << setw(col_width) << "25" << endl;
    cout << setw(col_width) << "Stanley" << setw(col_width) << "Woods" << setw(col_width) << "33" << endl;
    cout << setw(col_width) << "Jordan" << setw(col_width) << "Parker" << setw(col_width) << "45" << endl;
    cout << setw(col_width) << "Joe" << setw(col_width) << "Ball" << setw(col_width) << "21" << endl;
    cout << setw(col_width) << "josh" << setw(col_width) << "carr" << setw(col_width) << "27" << endl;
    cout << setw(col_width) << "Izaiah" << setw(col_width) << "Robinson" << setw(col_width) << "29" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    //========= JUSTIFIED THE DATA TO LEFT ============//
    col_width = 20;

    cout << left;
    cout << setw(col_width) << "Lastname" << setw(col_width) << "Firstname" << setw(col_width) << "age" << endl;
    cout << setw(col_width) << "Daniel" << setw(col_width) << "Gray" << setw(col_width) << "25" << endl;
    cout << setw(col_width) << "Stanley" << setw(col_width) << "Woods" << setw(col_width) << "33" << endl;
    cout << setw(col_width) << "Jordan" << setw(col_width) << "Parker" << setw(col_width) << "45" << endl;
    cout << setw(col_width) << "Joe" << setw(col_width) << "Ball" << setw(col_width) << "21" << endl;
    cout << setw(col_width) << "josh" << setw(col_width) << "carr" << setw(col_width) << "27" << endl;
    cout << setw(col_width) << "Izaiah" << setw(col_width) << "Robinson" << setw(col_width) << "29" << endl;
    cout << "----------------------------------------------------------------------" << endl;

    //======== INTERNAL JUSTIFIED =========//
    /*
    sign is left justified, data is right justified
    */
    cout << right;
    cout << setw(10) << -123.45 << endl; // here all sign with integer will be in right  position
    cout << internal << endl;
    cout << setw(10) << -123.45 << endl; // here in this case the sign will go into left and  integer will into right

    //============== SETFILL ==============//
    col_width = 20;

    cout << left;
    cout << setfill('-');
    cout << setw(col_width) << "Lastname" << setw(col_width) << "Firstname" << setw(col_width) << "age" << endl;
    cout << setw(col_width) << "Daniel" << setw(col_width) << "Gray" << setw(col_width) << "25" << endl;
    cout << setw(col_width) << "Stanley" << setw(col_width) << "Woods" << setw(col_width) << "33" << endl;
    cout << setw(col_width) << "Jordan" << setw(col_width) << "Parker" << setw(col_width) << "45" << endl;
    cout << setw(col_width) << "Joe" << setw(col_width) << "Ball" << setw(col_width) << "21" << endl;
    cout << setw(col_width) << "josh" << setw(col_width) << "carr" << setw(col_width) << "27" << endl;
    cout << setw(col_width) << "Izaiah" << setw(col_width) << "Robinson" << setw(col_width) << "29" << endl;
    cout << "----------------------------------------------------------------------" << endl;

    //================ BOOLALPHA AND NOBOOLALPHA ================//
    bool condition{true};
    bool other_condition{false};

    cout << "condition : " << condition << endl;
    cout << "other condition : " << other_condition << endl;
    cout << endl;

    cout << boolalpha;
    cout << "condition : " << condition << endl;
    cout << "other condition : " << other_condition << endl;
    cout << endl;

    cout << noboolalpha;
    cout << "condition : " << condition << endl;
    cout << "other condition : " << other_condition << endl;
    cout << endl;

    //=============== SHOWPOS AND NOSHOWPOS ================//
    int pos_num{34};
    int neg_num{-45};

    cout << "pos num : " << pos_num << endl;
    cout << "neg num : " << neg_num << endl;
    cout << endl;

    cout << showpos;
    cout << "pos num : " << pos_num << endl;
    cout << "neg num : " << neg_num << endl;
    cout << endl;

    cout << noshowpos;
    cout << "pos num : " << pos_num << endl;
    cout << "neg num : " << neg_num << endl;
    cout << endl;

    //========= DIFFERENT NUMBER SYSTEMS ===========//
    // DEC;
    // HEX;
    // OCT;

    int pos_int{717171};
    int neg_int{-47347};
    double double_var{498.32};

    cout << "default base format : " << endl;
    cout << "pos_int : " << pos_int << endl;
    cout << "neg_int : " << neg_int << endl;
    cout << "double_var : " << double_var << endl;
    cout << endl;

    cout << "pos_int in different bases : " << endl;
    cout << "pos_int (dec) : " << dec << pos_int << endl;
    cout << "pos_int (hex) : " << hex << pos_int << endl;
    cout << "pos_int (oct) : " << oct << pos_int << endl;
    cout << endl;

    cout << "neg_int in different bases : " << endl;
    cout << "neg_int (dec) : " << dec << neg_int << endl;
    cout << "neg_int (hex) : " << hex << neg_int << endl;
    cout << "neg_int (oct) : " << oct << neg_int << endl;
    cout << endl;

    cout << "double_var in different bases : " << endl;
    cout << "double_var (dec) : " << dec << double_var << endl;
    cout << "double_var (hex) : " << hex << double_var << endl;
    cout << "double_var (oct) : " << oct << double_var << endl;
    cout << endl;

    //=============== UPPERCASE AND NOUPPERCASE ================//
    pos_int = 717171;

    cout << "pos_int (nouppercase : default) : " << endl;
    cout << "pos_int (dec) : " << dec << pos_int << endl;
    cout << "pos_int (hex) : " << hex << pos_int << endl;
    cout << "pos_int (oct) : " << oct << pos_int << endl;
    cout << endl;

    cout << "pos_int (uppercase) : " << endl;
    cout << uppercase;
    cout << "pos_int (dec) : " << dec << pos_int << endl;
    cout << "pos_int (hex) : " << hex << pos_int << endl;
    cout << "pos_int (oct) : " << oct << pos_int << endl;
    cout << endl;

    //=============== FIXED AND  SCIENTIFIC : FOR FLOATING POINT VALUES ===============//
    double a{3.1411576548193174783457695};
    double b{2006.0};
    double c{1.34e-10};

    cout << "double value (default : use scientific where necessary) : " << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;
    cout << endl;

    cout << "double value (fixed) : " << endl;
    cout << fixed;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;
    cout << endl;

    cout << "double value (scientific) : " << endl;
    cout << scientific;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;
    cout << endl;

    cout << "double value (back to default) : " << endl;
    cout.unsetf(ios::scientific | ios::fixed); // HACK to reset the value
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;
    cout << endl;

    //=============== SETPRECISION() =================/
    a = 3.1415926535897932384626433832795;

    cout << "a (default precesion(6)) : " << a << endl;
    cout << setprecision(10);
    cout << "a (precision(10)) : " << a << endl;
    cout << setprecision(20);
    cout << "a (precision(20)) : " << a << endl;
    cout << endl;

    //============== SHOWPOINT AND NOSHOWPOINT ===============//
    double d{34.1};
    double e{101.99};
    double f{12.0};
    int g{45};

    cout << "noshowpoint (default) : " << endl;
    cout << "d : " << d << endl;
    cout << "e : " << e << endl;
    cout << "f : " << f << endl;
    cout << "g : " << g << endl;
    cout << endl;

    cout << "showpoint : " << endl;
    cout << showpoint;
    cout << "d : " << d << endl;
    cout << "e : " << e << endl;
    cout << "f : " << f << endl;
    cout << "g : " << g << endl;
    cout << endl;

    return 0;
}
