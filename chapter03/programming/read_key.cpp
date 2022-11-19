#include <iostream>

using namespace std;

int main()
{
    enum keys { TAB='\t', ENTER='\n', BACKSPACE='\b' };
    char key;
    cout << "Enter keys among tab, enter, backspace: ";
    // cin.get(key);
    key = getchar();
    // cout << "You have entered " << key << ".\n";

    switch (key)
    {
        case '\t':
            cout << "You have entered TAB key\n";
            break;
        case '\n':
            cout << "You have entered ENTER key\n";
            break;
        case '\b':
            cout << "You have entered BACKSPACE key\n";
            break;
        default:
            cout << "You have entered other key\n";
    }
}