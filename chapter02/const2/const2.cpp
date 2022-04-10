#include <iostream>
using namespace std;

int main()
{
    const int MONTHS = 12;
    double m_salary, y_salary;

    cout << "Enter your salary: ";
    cin >> m_salary;

    y_salary = MONTHS * m_salary;
    cout << "Your yearly salary is " << y_salary << endl;
}