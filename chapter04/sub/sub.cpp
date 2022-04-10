#include <iostream>
using namespace std;

static void f1()
{
    cout << "f1 is called." << endl;
}

void f2()
{
    f1();
    cout << "f2 is called." << endl;
}