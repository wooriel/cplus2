#include <iostream>
using namespace std;


int main ()
{
    int binary[64];
    int decimal;
    cout << "Enter decimal: ";
    cin >> decimal;

    for (int i = 0; i < 64; i++)
    {
        binary[i] = decimal % 2;
        decimal /= 2;
    }

    cout << "The binary version of the decimal is ";
    for (int j = 0; j < 64; j++)
    {
        cout << binary[64 - (j + 1)];
    }
    cout << endl;

    return 0;
}