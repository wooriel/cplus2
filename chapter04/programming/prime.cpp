#include <iostream>
using namespace std;


bool prime(int num);

int main ()
{
    for (int i = 1; i < 101; i++)
    {
        if (prime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

bool prime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}