#include <iostream>
using namespace std;

int main()
{
    // exercise 1
    int age, count;
    cout << "Enter age: ";
    cin >> age;

    count = 0;
    if (age > 20 && age < 65)
    {
        count++;
    }

    // exercise 2
    int x, y;
    cout << "Enter x and y (separated in enter): ";
    cin >> x >> y;
    
    int min, max;
    if (x >= y)
    {
        max = x;
        min = y;
    }
    else
    {
        min = x;
        max = y;
    }
    cout << "The min val: " << min << endl;
    cout << "The max val: " << max << endl;

    // exercise 3
    cout << "The value of x: " << x << endl;
    cout << "The value of y: " << y << endl;

    if (x >= 1 && x <= 20)
    {
        y = x;
    }

    cout << "The value of x: " << x << endl;
    cout << "The value of y: " << y << endl;

    return 0;
}