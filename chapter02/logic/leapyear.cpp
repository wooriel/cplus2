#include <iostream>
using namespace std;


int main()
{
    int year;
    bool result;

    cout << "Enter the year: ";
    cin >> year;

    // leap year
    // the year number must be divisible by four
    // except for end of century years, which must be divisible by 400.
    result = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    cout << result << endl;

    return 0;
}