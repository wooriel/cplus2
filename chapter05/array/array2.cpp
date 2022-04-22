#include <iostream>
using namespace std;


int main()
{
    const int SIZE = 10;
    int i;

    // if non of the values are not initialized, and array is local variable,
    // then there will be dummy values (not initialized into zero).
    int dummy[SIZE];

    cout << "======================\n";
    cout << "The value of index\n";
    cout << "======================\n";

    for (i = 0; i < SIZE; i++)
    {
        cout << i << "     " << dummy[i] << endl;
    }

    // if the few element values are given, then other slots (without variable) is initialized to zero
    int grade[SIZE] = { 31, 63, 62, 87, 14, 25, 92, 70, 75 };

    cout << "======================\n";
    cout << "The value of index\n";
    cout << "======================\n";

    for (i = 0; i < SIZE; i++)
    {
        cout << i << "     " << grade[i] << endl;
    }

    return 0;
}