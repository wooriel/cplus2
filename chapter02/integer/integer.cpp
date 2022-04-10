#include <iostream>
#include <climits>
using namespace std;

int main()
{
    short year = SHRT_MAX;
    int sale = INT_MAX;
    long total_sale = LONG_MAX;

    cout << "Size of short: " << sizeof(short) << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of long: " << sizeof(long) << endl;

    cout << "Maximum number of short: " << year << endl;
    cout << "Maximum number of int: " << sale << endl;
    cout << "Maximum number of long: " << total_sale << endl;

    cout << "Minimum number of short: " << SHRT_MIN << endl;
    cout << "Minimum number of int: " << INT_MIN << endl;
    cout << "Minimum number of long: " << LONG_MIN << endl;

    return 0;
}