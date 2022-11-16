#include <iostream>
#include <math.h>
using namespace std;

double nr(double r, double n);
double round_stop(double r, double n);

int main()
{
    double init_r = 1.0;
    double n, new_r;
    cout << "Enter the number that you want to get square value: ";
    cin >> n;
    new_r = nr(init_r, n);

    cout << "The sqrt(" << n << ") is " << new_r << endl;
}

double nr(double r, double n)
{
    r = (n / r + r) / 2;
    return round_stop(r, n);
}

double round_stop(double r, double n)
{
    double eps = 0.001;
    if (abs(pow(r, 2) - n) < eps)
    {
        return r;
    }
    else
    {
        return nr(r, n);
    }
}