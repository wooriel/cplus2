#include <iostream>
using namespace std;


long factorial(int n);


int main()
{
    int x;
    long f;

    cout << "Enter the integer: ";
    cin >> x;

    f = factorial(x);
    cout << x << "! = " << f << "." << endl;
}


long factorial(int n)
{
    cout << "factorial(" << n << ")" << endl;


    if (n <= 1)
        return 1;
    else
        return n * factorial(n-1);
}