#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';
    int code = ch;

    // char = 문자 상수
    // string 적을때 "" 큰 따옴표 써야 워닝이 안나옴
    cout << "The ASCII code of " << ch << " is " << code << endl;

    ch += 1;
    code = ch;
    cout << "The ASCII code of " << ch << " is " << code << endl;

    return 0;
}