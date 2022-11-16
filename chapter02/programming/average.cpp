#include <iostream>
using namespace std;

double average(int *A, int n);

int main()
{
    int const LENGTH = 4;
    int score[LENGTH];
    cout << "Enter score for computer science: ";
    cin >> score[0];
    // cout << score[0] << endl;
    cout << "Enter score for C Language: ";
    cin >> score[1];
    // cout << score[1] << endl;
    cout << "Enter score for English: ";
    cin >> score[2];
    // cout << score[2] << endl;
    cout << "Etner score for Mathematics: ";
    cin >> score[3];
    // cout << score[3] << endl;

    double avg = average(score, LENGTH);
    cout << "The average score is " << avg << endl;
}

double average(int *A, int n)
{
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }

    return sum / n;
}