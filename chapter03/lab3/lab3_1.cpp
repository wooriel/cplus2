#include <iostream>
using namespace std;


int main()
{

    for (int i = -3; i <= 3; i++)
    {
        int y = i*i + 1;
        for (int j = 0; j <= y; j++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }

    return 0;
}