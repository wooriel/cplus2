#include <iostream>
using namespace std;


int main()
{
    const int SIZE = 5;
    int i;
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE];

    // copying the entire array is not allowed in C++
    // b = a;

    // also when you compare between two array,
    // a == b (x)
    // use for loop and compare the value between elements.

    for (i = 0; i < SIZE; i++)
    {
        b[i] = a[i];
        cout << b[i] << endl;
    }

    return 0;
}