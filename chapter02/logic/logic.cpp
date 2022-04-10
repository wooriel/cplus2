#include <iostream>
using namespace std;

// && and, || or, ! negates(not)

int main()
{
    int x = 10, y = 20;
    bool r1, r2, r3, r4;

    r1 = (x == 10 && y == 20); // is x equals 10 and y equals 20?
    r2 = (x == 10 && y == 30); // is x equals 10 and y equals 30?
    r3 = (x == 10 || y >= 30); // is x equals 10 or y same or bigger than 30?
    r4 = !(x == 5); // is x equals 5 is not true (is x not equals 5)

    cout << r1 << endl;
    cout << r2 << endl;
    cout << r3 << endl;
    cout << r4 << endl;

    return 0;
}