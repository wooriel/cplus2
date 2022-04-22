#include <iostream>
using namespace std;


int main()
{
    const int STUDENTS = 5;
    int grade[STUDENTS];
    int i, max;

    for (i = 0; i < STUDENTS; i++)
    {
        cout << "Enter the grade: ";
        cin >> grade[i];
    }

    max = grade[0];
    for (i = 0; i < STUDENTS; i++)
    {
        if (grade[i] > max)
        {
            max = grade[i];
        }
    }

    cout << "The maximum grade is " << max << ".\n";
    
    return 0;
}