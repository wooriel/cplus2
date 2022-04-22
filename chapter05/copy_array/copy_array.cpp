#include <iostream>
using namespace std;
const int SIZE = 20;


// having const char src[] in function call means the array cannot be modified
void copy_array(char dest[], const char src[], int count);

int main()
{
    // '\0' is ascii null. It is used at the end of the string
    char s[SIZE] = { 'H', 'e', 'l', 'l', 'o', '\0' };
    char d[SIZE];

    copy_array(d, s, SIZE);
    cout << d << endl;

    return 0;
}

void copy_array(char dest[], const char src[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        dest[i] = src[i];
    }
}