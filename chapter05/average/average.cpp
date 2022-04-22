#include <iostream>
using namespace std;


double get_average(int score[], int n);

int main()
{
    const int SIZE = 5;
    double avg;
    int score[SIZE] = { 31, 67, 82, 90, 99 };

    avg = get_average(score, SIZE);
    cout << "The average scores: " << avg << endl;

    return 0;
}


double get_average(int score[], int n)
{
    int i;
    int sum = 0;
    double average;

    for (i = 0; i < n; i++)
    {
        sum += score[i];
    }
    
    average = sum*1.0/n;

    return average;
}