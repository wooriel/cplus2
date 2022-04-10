#include <iostream>
using namespace std;


// gcd means the greatest common divisor
// 최대공약수
int main()
{
    int x, y, r;
    cout << "Enter two integers: ";
    cin >> x;
    cin >> y;

    /*
    즉, 정수 m과 n에 대해서 m을 n으로 나눴을 때 나머지를 r이라고 하면,
    m과 n의 최대공약수는 n,r의 최대공약수와 같다는 것이다.
    -> 그럴수밖에 없는게 m을 n,r의 최대공약수로 나누면 나머지없이 가장 큰 최대공약수로 나누어떨어질것.
    */
    while (y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }

    cout << "The gcd of x and y is " << x << "." << endl;


    return 0;
}