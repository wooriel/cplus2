#include <iostream>
using namespace std;

int ipower(int n, int k);


int main ()
{
    int exp_lim = 10;
    int base = 3;
    for (int i = 0; i < exp_lim + 1; i++)
    {
        cout << ipower(base, i) << " ";
    }
    cout << endl;

    return 0;
}

int ipower(int n, int k)
{
    int val = n;
    for (int i = 0; i < k; i++)
    {
        val *= n;
    }

    return val;
}