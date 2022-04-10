#include <iostream>
using namespace std;


// define inline function
// 인라인 함수는 호출시 함수가 그대로 복사 붙여넣기가 된다.

inline double square(double i)
{
    return i*i;
}

int main()
{
    double result;

    cout << "The 2.0 square 2 is ";
    result = square(2.0);
    cout << result << endl;

    cout << "The 3.0 square 2 is ";
    result = square(3.0);
    cout << result << endl;

    return 0;
}