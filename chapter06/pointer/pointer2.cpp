#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char c = 'A';
    int i = 10000;
    double d = 6.78;

    char *pc = &c;
    int *pi = &i;
    double *pd = &d;

    (*pc)++;
    *pi = *pi + 1;
    *pd += 1; // *pd = *pd + 1;

    cout << c << endl;
    cout << i << endl;
    cout << d << endl;

    // cout is overloaded so that when you give it a char*,
    // it will print as a pointer to a C style string.
    // So, it prints out the characters until it hits a null terminating character.
    cout << (void *)pc << endl; // cast to raw pointer : (void *)
    printf("%p\n", pc);
    cout << pi << endl;

    return 0;
}