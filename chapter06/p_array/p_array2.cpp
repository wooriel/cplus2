#include <iostream>
using namespace std;

int main()
{
    int a[] = {10, 20, 30, 40, 50};

    cout << "a = " << a << endl;             // addr of a (a[0])
    cout << "a + 1 = " << a + 1 << endl;     // addr of a[1]
    cout << "*a = " << *a << endl;           // content of a[0]
    cout << "*(a+1) = " << *(a + 1) << endl; // content of a[1]

    return 0;
}