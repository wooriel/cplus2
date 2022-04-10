#include <iostream>
using namespace std;


int main()
{
    int x = 10, y = 20;
    bool r1, r2, r3, r4;

    r1 = (x == y); // is 10 equals 20?
    r2 = (x != y); // is 10 not equals 20?
    r3 = (x >= y); // is 10 same or bigger than 20?
    r4 = (x <= y); // is 10 same or smaller than 20?

    cout << r1 << endl;
    cout << r2 << endl;
    cout << r3 << endl;
    cout << r4 << endl;

    // bouns
    cout << (3>=2)+5 << endl;
    // 3>=2 is true which is 1
    // 6

    return 0;
}