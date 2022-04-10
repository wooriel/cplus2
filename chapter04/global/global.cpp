#include <iostream>
using namespace std;

// this is a global variable - accessible through functions in this file.
int x = 123;

void sub1()
{
    cout << "In sub1, the value of x is " << x << endl;
}

void sub2()
{
    cout << "In sub2, the value of x is " << x << endl;
}

int main(void)
{
    sub1();
    sub2();
    cout << "In main, the value of x is " << x << endl;

    return 0;
}