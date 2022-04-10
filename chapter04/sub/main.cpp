#include <iostream>
using namespace std;

extern void f2(); // now this should be defined at other places
//(like bottom of this code or in another file)

int main(void)
{
    f2();
    return 0;
}