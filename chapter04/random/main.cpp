#include <iostream>
using namespace std;

unsigned random_i(void);
double random_f(void);
// not using extern: okay?
// https://www.learncpp.com/cpp-tutorial/external-linkage/
// it says that the functions have the external linkage by default

extern unsigned call_count;

int main()
{
    register int i; // register makes the variable a register variable
    // the variable is saved on registers, not the memory (more fast, only applicable to the local variables)

    for (i = 0; i < 10; i++)
        cout << random_i() << " ";

    cout << endl;

    for (i = 0; i < 10; i++)
        cout << random_f() << " ";

    cout << endl;

    cout << "\nThe number of function call = " << call_count;

    return 0;
}