#include <iostream>
using namespace std;

int main()
{
    char str[30] = "C++ language is easy";
    int i = 0;

    while (str[i] != 0)
    {
        i++;
    }
    cout << "The length of the string is " << i << endl;

    return 0;
}