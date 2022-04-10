#include <iostream>

using namespace std;


// define functions
int get_integer(void);
int combination(int n, int r);
int factorial(int n);


int main()
{
    int a = get_integer();
    int b = get_integer();

    cout << "C(" << a << ", " << b << ") is " << combination(a, b) << "." << endl;
    
    return 0;
}


int combination(int m, int n)
{
    // C(m, n) = m! / ((m-n)!*n!)
    return factorial(m)/(factorial(n)*factorial(m-n));
}

// calculates factorial of a give number
int factorial(int n)
{
    int i;
    long result = 1;

    for (i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

// gets the integer from the user
int get_integer(void)
{
    int n;

    cout << "Enter the integer: ";
    cin >> n;

    return n;
}