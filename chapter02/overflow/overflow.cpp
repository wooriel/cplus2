#include <iostream>
#include <climits>
using namespace std;

// signed, unsigned can come before short, int, long
// unsigned means data type without sign

int main()
{
    short s_money = SHRT_MAX;
    unsigned short u_money = USHRT_MAX;

    s_money = s_money + 1;
    u_money += 1;

    cout << "s_money " << s_money << endl;
    cout << "u_money " << u_money << endl;

    return 0;
}