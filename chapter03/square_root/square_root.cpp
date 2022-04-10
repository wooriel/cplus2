#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    double v;

    while (1)
    {
        cout << "Enter double number: ";
        cin >> v;

        if (v < 0.0)
            break;
        
        cout << "The square root of v is " << sqrt(v) << "." << endl;
    }

    return 0;
}