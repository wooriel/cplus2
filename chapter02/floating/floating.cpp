#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 이게 없으면 지수법으로 실수가 출력됨
    cout.setf(ios_base::fixed);

    float fvalue = 1234567890.12345678901234567890;
    double dvalue = 1234567890.12345678901234567890;
    
    cout << "float type variable: " << fvalue << endl;
    cout << "double type variable: " << dvalue << endl;

    cout << sizeof(short) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl; //long long int 8byte?
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl;

    return 0;
}