#include <iostream>
using namespace std;


int main()
{
    // prints 5 row of 10 asterisks
    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 10; x++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}