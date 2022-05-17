#include <iostream>
using namespace std;

int main()
{
    char *pc;
    int *pi;
    double *pd;

    pc = (char *)10000;
    pi = (int *)10000;
    pd = (double *)10000;

    cout << "Before increasing pc: " << (void *)pc << ", pi: " << pi << ", pd: " << pd << endl;

    pc++; // size of char = 1. When increasing char addr, 1 has increased
    pi++; // size of int = 4. When increasing integer addr, 4 has increased
    pd++; // size of int = 8. When increasing double addr, 8 has increased

    cout << "After increasing pc: " << (void *)pc << ", pi: " << pi << ", pd: " << pd << endl;

    return 0;
}