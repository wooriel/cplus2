#include <iostream>
using namespace std;

int main()
{
    int x = 10u;
    int y = 010;
    int z = 0x10;

    cout << "x= " << x << endl;
    cout << "y= " << y << endl;
    cout << "z= " << z << endl;

    cout << oct; // does not print anything but converts into oct
    cout << "x= " << x << endl;
    cout << "y= " << y << endl;
    cout << "z= " << z << endl;

    return 0;
}