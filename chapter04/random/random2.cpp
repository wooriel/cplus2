#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;


void get_random(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        // rand() is in cstdlib library
        cout << rand() << endl;
    }
}

int main()
{
    // srand initializes the numbers that are to be used in rand
    // and it takes the seed value to do that.

    // time returns tge second that has passed from UCT 1970.01.01.00:00:00
    srand( (unsigned)time( NULL ) );
    get_random( 10 );
}