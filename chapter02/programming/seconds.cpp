#include <iostream>
using namespace std;

int main()
{
    int hour, min, sec;
    int res_sec;
    cout << "Enter hours (0~24): ";
    cin >> hour;
    cout << "Enter minutes (0~60): ";
    cin >> min;
    cout << "Enter seconds (0~60): ";
    cin >> sec;

    res_sec = hour*360 + min*60 + sec;
    cout << "Total seconds: " << res_sec << endl;
}