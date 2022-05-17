#include <iostream>
using namespace std;

int main()
{
    int s[3][5];
    int i, j;
    int value = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            s[i][j] = value++; // assign value then increase value
        }
    }

    for (i = 0; i < 3; i++)
        for (j = 0; j < 5; j++)
            cout << "The value of s[" << i << "][" << j << "] is " << s[i][j] << "." << endl;

    return 0;
}