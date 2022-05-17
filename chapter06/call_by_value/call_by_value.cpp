#include <iostream>
using namespace std;

void swap(int x, int y);

int main()
{
    int a = 100, b = 200;
    cout << "Before callling swap(): a = " << a << ", b = " << b << "." << endl;
    swap(a, b);
    cout << "After callling swap(): a = " << a << ", b = " << b << "." << endl;

    return 0;
}

void swap(int x, int y)
{
    cout << "Before (in) swap: x = " << x << ", y = " << y << "." << endl;
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "After (in) swap: x = " << x << ", y = " << y << "." << endl;
}