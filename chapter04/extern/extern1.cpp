#include <iostream>
using namespace std;


// we'll see extern variable here
//
int x;
extern int y; // defined extern to use y after main
extern int z; // defined extern to use z in other file


int main()
{
    extern int x; // defined extern to use x in global, but no need to use extern in this case

    x = 10;
    y = 20;
    z = 30;

    cout << "x = " << x << endl; // 10, x is referenced from global var x above main (no need extern)
    cout << "y = " << y << endl; // 20, y is referenced from global var y below main
    cout << "z = " << z << endl; // 30, z is referenced from extern2.cpp

    return 0;
}

int y; // global var