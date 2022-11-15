#include <iostream>
using namespace std;


int main ()
{
    int num, radix;
    cout << "Enter a number and radix separated in a space: ";
    cin >> num >> radix;

    int any_arr[32];
    for (int i = 0; i < 32; i++)
    {
        any_arr[i] = num % radix;
        num /= radix;
    }

    cout << "The decimal in number base " << radix << " is: ";
    for (int j = 0; j < 32; j++)
    {
        cout << any_arr[32 - (j + 1)];
    }
    cout << endl;
}