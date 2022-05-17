#include <iostream>
using namespace std;

int main()
{
    int a[] = {10, 20, 30, 40, 50};

    cout << "&a[0] = " << &a[0] << endl; // prints out the address of a[0]
    cout << "&a[1] = " << &a[1] << endl; // prints out the address of a[1] <- type = int (increase by 4)
    cout << "&a[2] = " << &a[2] << endl;

    cout << "a = " << a << endl; // same as a[0] address

    return 0;
}