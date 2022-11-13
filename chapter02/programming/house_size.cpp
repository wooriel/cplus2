#include <iostream>
#include <cmath>
using namespace std;


int main ()
{
    double kor_pyeong = 3.3058;
    double square_meter;
    cout << "Enter house size in pyeong: ";
    cin >> square_meter;
    cout << "Your house size is " << square_meter * kor_pyeong << "m^2" << endl;
    return 0;
}