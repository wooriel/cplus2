#include <iostream>
using namespace std;


int main()
{
    double cm_to_inch = 2.54;
    double inch_to_ft = 12;

    int height;
    cout << "Enter your height in cm: ";
    cin >> height;

    double inch_height = height / cm_to_inch;
    double ft_height = inch_height / inch_to_ft;
    cout << "Your height is " << inch_height << "inch";
    cout << " and " << ft_height << "ft.\n";

    return 0;
}