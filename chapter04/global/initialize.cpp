#include <iostream>
using namespace std;

int counter;

void set_counter(int i)
{
    counter = i;
}

int main()
{
    cout << "Counter = " << counter << endl; // default value for int global var is 0

    counter = 100;
    cout << "Counter = " << counter << endl; // can be set in the main function

    set_counter(20);
    cout << "Counter = " << counter << endl; // can be set through local function

    return 0;
}