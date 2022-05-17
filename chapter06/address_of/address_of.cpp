#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    char c = 69;
    double f = 11.3;

    cout << "The address of i " << &i << "." << endl;
    cout << "The address of c " << (void *)&c << "." << endl;
    // void * : generic pointer
    // address known in runtime -> need typecast to dereference it
    cout << "The address of f " << &f << "." << endl;
    cout << sizeof(f) << endl;

    return 0;
}