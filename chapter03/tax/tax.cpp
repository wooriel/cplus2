#include <iostream>
using namespace std;


int main()
{
    int income;
    int tax;

    cout << "Enter your income: ";
    cin >> income;

    if (income <= 1000)
        tax = (int) (0.09 * income);
    else if (income <= 4000)
        tax = (int) (0.18 * income);
    else if (income <= 8000)
        tax = (int) (0.27 * income);
    else
        tax = (int) (0.36 * income);

    cout << "Your tax is " << tax << "." << endl;

    return 0;
}