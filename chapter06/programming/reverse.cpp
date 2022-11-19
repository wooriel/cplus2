#include <iostream>
using namespace std;


void reverse(int *A, int n);
void print(int *A, int n);

int main()
{
    const int LENGTH = 9;
    int A[LENGTH] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    print(A, LENGTH);
    reverse(A, LENGTH);
    print(A, LENGTH);
}

void reverse(int *A, int n)
{
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = A[i];
        A[i] = A[n - (i + 1)];
        A[n - (i + 1)] = temp;
    }
    return;
}

void print(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}