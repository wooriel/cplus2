#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    float grade, sum = 0.0, average;
    int count = 0;

    while (1)
    {
        cout << "Enter the student's grade: ";
        cin >> grade;

        if (grade < 0.0)
            break;

        count++;
        sum += grade;
    }

    average = sum / count;
    cout << "The average grade of the students is " << average << "." << endl;

    return 0;
}