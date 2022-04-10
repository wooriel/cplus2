#include <iostream>
using namespace std;


int main()
{
    int n;
    int i = 1;

    cout << "Enter the times table that you want to print: ";
    cin >> n;

    while (i <= 9)
    {
        cout << n << " times " << i << " = " << i*n << endl;
        i++;
    }

    return 0;
}