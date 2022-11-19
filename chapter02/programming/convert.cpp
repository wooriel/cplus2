#include <iostream>
using namespace std;


int main()
{
    double kilo1_pound = 2.2;
    double pound1_oz = 16.0;
    double kilo;

    cout << "Enter the weight in kilogram: ";
    cin >> kilo;

    cout << kilo << "kg is " << kilo1_pound * kilo << " pounds.\n";
    cout << kilo << "kg is " << kilo1_pound * pound1_oz * kilo << " pounds.\n";

    return 0;
}