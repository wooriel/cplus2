#include <iostream>
using namespace std;


int main()
{
    int f_temp = 60;
    float c_temp;

    // would this be properly calculated? no! it will return 0
    // c_temp = 5 / 9 * (f_temp - 32);
    // the result of 5/9 will be in integer which is 0.
    // 5 / 9. * (28) = 15.555555....
    // the type of c_temp is integer -> drops the decimals

    c_temp = (5 / 9.) * (f_temp - 32);
    cout << "The 60 degree fahrenheit is " << c_temp << " celsius." << endl;

    return 0;
}