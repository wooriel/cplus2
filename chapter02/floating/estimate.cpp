#include <iostream>
using namespace std;


int main()
{
    double x;

    x = (1.0e20+5.0) - 1.0e20;
    // should printout 5.0 but the double estimates into 1.0e20+5.0 into 1.0e20
    // so the answer is 0.0
    cout << "x = " << x << endl;

    return 0;
}