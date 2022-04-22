#include <iostream>
using namespace std;


int main()
{
    const int SIZE = 101;
    int freq[SIZE];
    int i, score;

    for (i = 0; i < SIZE; i++)
    {
        freq[i] = 0;
    }

    while(1)
    {
        cout << "Enter the numbers (to stop enter -1): ";
        cin >> score;
        if (score < 0) break;
        freq[score]++;
    }

    for (i = 0; i < SIZE; i++)
    {
        cout << "frequency of " << i << ": " << freq[i] << endl;
    }

    return 0;
}