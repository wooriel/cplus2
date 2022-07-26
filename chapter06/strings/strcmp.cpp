#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[80];
    char s2[80];
    int result;

    cout << "Enter the first word" << endl;
    cin >> s1;
    cout << "Enter the second word" << endl;
    cin >> s2;

    result = strcmp(s1, s2);
    if (result < 0)
        cout << s1 << " is lexicographically before " << s2 << endl;
    else if (result == 0)
        cout << s1 << " is lexicographically same with " << s2 << endl;
    else
        cout << s1 << " is lexicographically after " << s2 << endl;

    return 0;
}