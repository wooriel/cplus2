#include <iostream>
// #include <time.h>
using namespace std;

int cal_parking_charge(double time);


int main()
{
    // time is in hour between 0~24
    double time;
    cout << "Enter time between 0 and 24: ";
    cin >> time;
    int charge = cal_parking_charge(time);
    cout << "The parking fee is " << charge << ".\n";
}

int cal_parking_charge(double time)
{
    int charge = 0;
    if (time < 0)
    {
        return -1;
    }
    else if (time == 0)
    {
        return 0;
    }
    else
    {
        time -= 2;
        charge += 3000;
        while (time > 0)
        {
            time -= 1;
            charge += 2000;
        }
        if (charge > 6000)
        {
            return 6000;
        }
        else
        {
            return charge;
        }
    } 
}