#include <iostream>
using namespace std;


int main()
{
    const int STUDENTS = 5;
    // array initialization format: type array_name[constant number]
    // variable cannot be replace constant number
    // int grade[STUDENTS];          (o)
    // int size; int grade2[size];   (x)
    // g++는 VLA를 컴파일 해준다고 한다.

    int grade[STUDENTS];
    int sum = 0;
    int i;
    double average;

    for (i = 0; i < STUDENTS; i++)
    {
        cout << "Enter student's grade: ";
        cin >> grade[i];
    }

    for (i = 0; i < STUDENTS; i++)
    {
        sum += grade[i];
    }
    average = sum/(STUDENTS*1.0);
    cout << "The average grade among students = " << average << ".";

    return 0;
}