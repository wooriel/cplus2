#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char str1[7] = "Seoul ";
    char str2[3] = {'i', 's'};
    char str3[] = " the capital city of Korea.";

    cout << str1 << str2 << str3 << endl;
    cout << str1[7] << endl;
    for (int i = 0; i < sizeof(str1); i++)
        cout << str1[i];
    cout << endl;

    return 0;
}