#include <iostream>
#include <math.h>
using namespace std;

double average(int *A, int n);
double varience(int *A, int n, double avg);
double varience2(int *A, int n, double avg);

int main()
{
    const int LENGTH = 20;
    int nums[LENGTH];

    cout << "Enter 20 numbers separated in space: ";
    for (int i = 0; i < LENGTH; i++)
    {
        cin >> nums[i];
    }
    double avg = average(nums, LENGTH);
    double var = varience(nums, LENGTH, avg);
    double var2 = varience2(nums, LENGTH, avg);

    cout << "The average: " << avg << ", and the varience: " << var << ".\n";
    cout << "The variance2 (original way): " << var2 << ".\n";
    return 0;
}

double average(int *A, int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }
    return sum / n;
}

double varience(int *A, int n, double avg)
{
    // var = (Sum(x^2) - n*(avg^2))/n
    // = Sum(x^2)/n - avg^2
    double sum_2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum_2 += pow(A[i], 2);
    }
    return sum_2 / n - pow(avg, 2);
}

double varience2(int *A, int n, double avg)
{
    // var = (Sum(x^2) - n*(avg^2))/n
    // = Sum(x^2)/n - avg^2
    double dif_2 = 0;
    for (int i = 0; i < n; i++)
    {
        dif_2 += pow((A[i] - avg), 2);
    }
    return dif_2 / n;
}