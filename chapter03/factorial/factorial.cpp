#include <iostream>
using namespace std;


int main()
{
    long fact = 1;
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    cout << n << "! is " << fact << "." << endl;

    return 0;
}