#include <iostream>

using namespace std;


int square(int n);

int main()
{
    int i, result;

    for (i = 0; i < 5; i++)
    {
        result = square(i);
        cout << result << endl;
    }
    
    return 0;
}

int square(int n)
{
    return (n * n);
}