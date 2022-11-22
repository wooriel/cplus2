#include <iostream>
#include <math.h>
using namespace std;

void quad_eqn(double a, double b, double c);

int main()
{
    double a, b, c;
    cout << "Enter three numbers that represent coefficient of the quadratic function (separated in space): ";
    cin >> a >> b >> c;
    quad_eqn(a, b, c);
}

void quad_eqn(double a, double b, double c)
{
    if (pow(b, 2) - 4*a*c < 0)
    {
        cout << "There is no solution for this equation.\n";
    }
    else
    {
        double sol1 = (-b + sqrt(pow(b, 2) - 4*a*c)) / (2*a);
        double sol2 = (-b - sqrt(pow(b, 2) - 4*a*c)) / (2*a);
        cout << "The solution is " << sol1 << " and " << sol2 << ".\n";
    }
}