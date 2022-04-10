#include <iostream>
using namespace std;

int main()
{
    int input, minute, second;
    const int SEC_PER_MINUTE=60;

    cout << "Enter the time in sec: (less than 3.2 trillion)" << endl;
    cin >> input;

    minute = input / SEC_PER_MINUTE;
    second = input % SEC_PER_MINUTE;

    cout << "The " << input << " second is " << minute << " minute and " << second << " seconds." << endl;

    return 0;
}