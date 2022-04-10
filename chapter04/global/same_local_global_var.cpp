#include <iostream>
using namespace std;

int sum = 1;

int main()
{
    int i = 0;
    int sum = 0;

    for (i = 0; i <= 10; i++)
    {
        sum += i;
    }

    cout << "sum = " << sum << endl;
    // if global var is used: 56, if local var is used: 55
    // local variable have the priority. sum = 55.

    return 0;
}