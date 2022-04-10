#include <iostream>
using namespace std;

// storage class classifier
// auto / register / static / external
// we'll see difference between auto and static

// all local variables in the function (including the main)
// have the type auto.
// the global variable is static variable,
// but we can assign local variable as static
// by using the static specifier.

void sub(void);

int main()
{
    int i;

    for (i = 0; i < 5; i++)
    {
        sub();
    }

    return 0;
}

void sub(void)
{
    int auto_count = 0;
    static int static_count = 0;

    auto_count++;
    static_count++;

    cout << "auto_count = " << auto_count << endl;
    cout << "static_count = " << static_count << endl;
}