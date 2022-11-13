#include <iostream>
using namespace std;


int main ()
{
    int binary;
    int decimal = 0;
    cout << "Enter binary number: ";
    cin >> binary;

    int digit = 0;
    while (binary / 10 != 0 || binary % 10 != 0)
    {
        int rem = binary % 10;
        decimal += rem << digit;
        // update binary and digit
        binary /= 10;
        digit++;
    }
    cout << "The binary number in decimal: " << decimal << endl;

    //e.g. 1101
    // 1101/10 = 110
    // 1101%10 = 1
    // decimal = 1
    // 110/10 = 11
    // 110%10 = 0
    // decimal = 1
    // 11/10 = 1
    // 11%10=1
    // decimal = 1 + 1 << 2 = 5
    // 1/10 = 0
    // 1%10 = 1
    // decimal = 5 + 1 << 3 = 13
    return 0;
}