#include <iostream>
using namespace std;

// Tools
const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{60};

int main()
{
    int tool{Circle};

    switch (tool)
    {
    case Pen:
    {
        cout << "active tool is pen : " << endl;
    }
    break;

    case Marker:
    {
        cout << "active tool is Marker : " << endl;
    }
    break;

    case Eraser:
    {
        cout << "active tool is Eraser : " << endl;
    }
    break;

    case Rectangle:
    {
        cout << "active tool is Rectangle : " << endl;
    }
    break;

    case Circle:
    {
        cout << "active tool is Circle : " << endl;
    }
    break;

    case Ellipse:
    {
        cout << "active tool is Ellipse : " << endl;
    }
    break;

    default:
    {
        cout << "no match found : " << endl;
    }
    break;
    }

    return 0;
}
