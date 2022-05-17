#include <iostream>
using namespace std;

int main()
{
    int *pi = new int;
    // pi is the pointer but when you declare the pointer
    // you use astric sign before (only at the initialization)
    *pi = 67;

    cout << *pi << endl;
    delete pi; // not removing the pi but the memory allocated to pi

    // *pi = new int; // error
    pi = new int; // assigning new memory to the pointer pi
    *pi = 99;

    cout << *pi << endl;
    delete pi;

    return 0;
}