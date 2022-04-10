#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

#define RAD_TO_DEG (180.0/M_PI);
// 45.0/atan(1) <- tan(45) = 1 of course 45 is the degree in radian pi/2.

double calc_hypotenuse(double w, double h);
double calc_angles(double w, double h);

int main()
{
    double h, w, r, theta;
    // cout << M_PI << endl;

    cout << "Enter the base: ";
    cin >> w;

    cout << "Enter the height: ";
    cin >> h;

    r = calc_hypotenuse(w, h);
    theta = calc_angles(w, h);

    cout << "hypotenuse: " << r << " , theta: " << theta << "." << endl;
}

double calc_hypotenuse(double w, double h)
{
    return sqrt(pow(w, 2) + pow(h, 2));
}

double calc_angles(double w, double h)
{
    double angle = atan2(h, w) * RAD_TO_DEG;
    return angle;
}