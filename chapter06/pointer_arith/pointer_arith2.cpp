#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    int *pi = &i;

    cout << "i = " << i << " pi = " << pi << endl; // initial int value and the address
    (*pi)++;
    cout << "i = " << i << " pi = " << pi << endl; // add 1 to the int value
    *pi++;                                         // ++ has priority over the *. The pointer value is increased in this case!
    cout << "i = " << i << " pi = " << pi << endl; // add 1 to the address(cc->d0 int size(4) has increased)

    return 0;
}