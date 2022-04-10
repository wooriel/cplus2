#include <iostream>
using namespace std;


// declare function prototype with default values
int calc_deposit(int salary = 300, int month = 12);

// The default values should be defined from back
// int calc_deposit(int salary, int month = 12); <- this is okay
// int calc_deposit(int salary = 300, int month); <- this is not okay

int main()
{
    cout << "Using 0 default variables" << endl;
    cout << calc_deposit(200, 6) << endl;

    cout << "Using 1 default variables" << endl;
    cout << calc_deposit(200) << endl;
    
    cout << "Using 2 default variables" << endl;
    cout << calc_deposit() << endl;
    
    return 0;
}

int calc_deposit(int salary, int month)
{
    return salary*month;
}