#include <iostream>
using namespace std;

int main()
{
    char upper = 'a';
    cout << "Enter a upper-case letter: ";

    while (islower(upper))
    {
        cin >> upper;
        if (islower(upper))
        {
            cout << "Please enter upper-case letter: ";
        }
    }

    char lower = upper - 'A' + 'a';
    cout << "The lower-case letter is " << lower << endl;

}