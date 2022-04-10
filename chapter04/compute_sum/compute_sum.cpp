#include <iostream>
using namespace std;


// define function prototypes
int compute_sum(int);


int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int sum = compute_sum(n);
    cout << "The summation from 1 to " << n << " is " << sum << "." << endl;
    return 0;
}

int compute_sum(int n)
{
    int i;
    int result = 0; // if you don't declare the initial value, c++ does not initialize it to zero - for local variables

    for (i = 1; i <= n; i++)
    {
        result += i;
    }

    return result;
}