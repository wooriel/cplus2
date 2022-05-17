#include <iostream>
using namespace std;

void swap(int *x, int *y);

int main()
{
    // int *a = new int;
    // *a = 100;
    // int *b = new int;
    // *b = 200;
    int a = 100, b = 200;

    cout << "Before calling swap: a = " << a << ", b = " << b << endl;
    swap(&a, &b);
    cout << "After calling swap: a = " << a << ", b = " << b << endl;

    // cout << "Before calling swap: a = " << *a << ", b = " << *b << endl;
    // swap(a, b);
    // cout << "After calling swap: a = " << *a << ", b = " << *b << endl;

    // delete a;
    // delete b;
    return 0;
}

void swap(int *x, int *y)
{
    cout << "In swap x = " << *x << ", y = " << *y << endl;
    int *temp = new int;
    *temp = *x;
    *x = *y;
    *y = *temp;
    cout << "In swap x = " << *x << ", y = " << *y << endl;
    // I mistakenly printed the address of pointer,
    // but I can see that the value in the address has changed not the address itself.
    delete temp;
}