#include <iostream>
using namespace std;


int main()
{
    int answer = 88;
    int guess;

    int tries = 0;

    do {
        cout << "Guess the number (in between 1 and 100): ";
        cin >> guess;

        if (guess > answer) {
            cout << "Your guess is bigger than the answer." << endl;
        }
        if (guess < answer) {
            cout << "Your guess is smaller than the answer." << endl;
        }
        tries++;

    } while (guess != answer);

    cout << "Congratulations! You got the answer in " << tries << " times!" << endl;

    return 0;
}