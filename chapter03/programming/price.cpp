#include <iostream>
using namespace std;

int main()
{
    int price = 100;
    int count;

    cout << "How much do you want to buy item? ";
    cin >> count;

    int total = price * count;
    if (count >= 10)
    {
        total *= 0.9;
    }
    cout << "The total price is " << total << " won.\n";
    return 0;
}