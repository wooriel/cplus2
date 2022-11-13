#include <iostream>
using namespace std;

int main()
{
    int w, l, h;
    cout << "Enter width: (< 200)" << endl;
    cin >> w;
    cout << "Enter length: (< 200)" << endl;
    cin >> l;
    cout << "Enter height: (< 200)" << endl;
    cin >> h;

    cout << "The box volume is: " << w*h*l << endl;
}