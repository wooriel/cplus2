#include <iostream>
#include <math.h>
using namespace std;

void menu();
double triangle(double b, double h);
double rectangle(double b, double h);
double circle(double r);

int main()
{
    enum select { T='T', R='R', C='C', Q='Q' };
    char sel;
    while (sel != Q)
    {
        menu();
        cin >> sel;
        
        switch (sel)
        {   
            int height, base, radius;
            case T:
                cout << "Enter the base and height separated in space: ";
                cin >> base >> height;
                cout << "The area of the Triangle is: " << triangle(base, height) << endl;
                break;
            case R:
                cout << "Enter the base and height separated in space: ";
                cin >> base >> height;
                cout << "The area of the Rectangle is: " << rectangle(base, height) << endl;
                break;
            case C:
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                cout << "The area of the Circle is: " << circle(radius) << endl;
                break;
            case Q:
                break;
            default:
                cout << "Select menu among below letters!" << endl;
        }
    }
}

void menu()
{
    cout << "**********\n\
    T --- Get the Area of Triangle\n\
    R --- Get the Area of Rectangle\n\
    C --- Get the Area of Circle\n\
    Q --- Quit" << endl;

    return;
}

double triangle(double b, double h)
{
    return b*h/2;
}

double rectangle(double b, double h)
{
    return b*h;
}

double circle(double r)
{
    return pow(r, 2)*M_PI;
}