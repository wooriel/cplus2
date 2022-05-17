#include <iostream>
using namespace std;

// this is how we use dynamic memory (heap)
int main()
{
    int *pi;
    pi = new int;

    *pi = 100;
    delete pi;

    return 0;
}