#include <iostream>
using namespace std;


int main()
{
    int x = 0, y = 0, z = 0;
    cout << (2 > 3 || 6 > 7) << endl; // 2 > 3 first, 6 > 7 second, false || false third.
    cout << (2 || 3 && 3 > 2) << endl; // 3 > 2 first, 3 && true second, 2 || true third.
    cout << (x = y = z = 1) << endl; // left to right.
    cout << (- ++x + y--) << endl; // ++x first, y-- second, -(unary) operator third, + last
    // x becomes 2 and used in the calculation
    // y is used as 1 in the calculation and becomes 0
    // - 2 + 1 = -1

    return 0;
}