#include <iostream>

using namespace std;


int main()
{
    char letter;

    while (1)
    {
        cout << "Enter the lower-case letter: ";
        cin >> letter;

        if (letter =='Q') // does this include q? - of course not (then you cannot get uppercase of q)
            break;
        if (letter < 'a' || letter > 'z')
            continue;

        letter -= 32;
        cout << "The capital letter of entered letter is " << letter << "." << endl;
    }

    return 0;
}