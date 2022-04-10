#include <iostream>
using namespace std;


int main()
{
    const int RATE = 5000;
    int pay;
    int hours;

    cout << "Enter the time: ";
    cin >> hours;

    if (hours > 8)
        // calculate 8 hours as normal rate and extra hours with 1.5 rate
        pay = RATE * 8 + (int) (1.5 * RATE * (hours - 8));
    else
        pay = RATE * hours;

    cout << "Your pay is " << pay << "." << endl;

    return 0;
}