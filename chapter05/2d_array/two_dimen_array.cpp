#include <iostream>
using namespace std;

const int CLASSES = 3;
const int STUDENTS = 5;

int main()
{
    int s[CLASSES][STUDENTS] = {
        {0, 1, 2, 3, 4},
        {10, 11, 12, 13, 14},
        {20, 21, 22, 23, 24}};
    int clas, student, total, subtotal; // class cannot be used because it's a keyword

    total = 0;
    for (clas = 0; clas < CLASSES; clas++)
    {
        subtotal = 0;
        for (student = 0; student < STUDENTS; student++)
        {
            subtotal += s[clas][student];
            total += s[clas][student];
        }
        cout << "The class average is " << subtotal * 1.0 / STUDENTS << "." << endl;
    }
    cout << "The average of whole students is " << total / (CLASSES * STUDENTS * 1.0) << "." << endl;
}
