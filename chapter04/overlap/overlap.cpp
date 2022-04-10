#include <iostream>
using namespace std;


// defining multiple functions with different input arguments
int square(int);
double square(double);

// having the same number and type of input arguments
// is considered as same function (cannot be distinguished)
// double square(int); <- error due to int square(int)
// int square(double); <- error due to double square(double)


int main()
{
    int a = 16;
    double b = 5.0; // calculated as double but drops out decimal when printing
    double c = 1.4;

    cout << "The square of " << a << " is " << square(a) << "." << endl;
    cout << "The square of " << b << " is " << square(b) << "." << endl;
    cout << "The square of " << c << " is " << square(c) << "." << endl;
}

int square(int n)
{
    return n*n;
}
    
double square(double n)
{
    return n*n;
}