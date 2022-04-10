#include <iostream>

using namespace std;


int main()
{
    double number;
    double sum = 0.0;
    
    int count = 0;
    double max = -1;
    double min = -1;

    while (1)
    {
        cout << "Enter the number (exits when the given data is negative number): ";
        cin >> number;

        if (number < 0.0)
            break;
        if (max < number)
            max = number;
        if (min > number || min == -1)
            min = number;

        count++;
        sum += number;
    }

    double average = sum / count;

    cout << "The average of the numbers is " << average << "." << endl;
    cout << "The minimum number among the numbers is " << max << "." << endl;
    cout << "The maximum number among the numbers is " << min << "." << endl;

    return 0;
}