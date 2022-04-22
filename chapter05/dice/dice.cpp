#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
    const int FACES = 6;
    int i;
    int freq[FACES] = { 0 }; // other elements are initialized as 0 as well

    for (i = 0; i < 10000; i++)
    {
        ++freq[rand() % FACES];
    }

    cout << "===================\n";
    cout << "freq of each side of the dice\n";
    cout << "===================\n";

    for (i = 0; i < FACES; i++)
    {
        cout << i << "      " << freq[i] << endl;
    }

    return 0;
}