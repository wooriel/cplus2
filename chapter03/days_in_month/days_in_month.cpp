#include <iostream>
using namespace std;


int main()
{
    int month;
    int year = 2022;
    // int year = 2020;
    int days = 0;

    cout << "Please enter the month that you want to know the days: ";
    cin >> month;

    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                days = 29;
            else
                days = 28;
            break;
        default:
            cout << "You entered wrong month." << endl; 
    }

    cout << "The days of the month is " << days << "." << endl;

    return 0;
}