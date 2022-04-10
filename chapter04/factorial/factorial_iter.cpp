#include <iostream>
using namespace std;


long factorial_iter(int n);

int main()
{
    int x;
    long f;

    cout << "Enter an integer: ";
    cin >> x;

    f = factorial_iter(x);
    cout << x << "! is " << f << "." << endl;
}

long factorial_iter(int n)
{
    long result;

    for (result = 1; n > 1; n--)
    {
        result *= n;
    }

    return result;
}