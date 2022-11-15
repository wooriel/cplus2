#include <iostream>
using namespace std;

void copy(int *A, int *B, int n);

int main()
{
    const int LENGTH = 5;
    int A[LENGTH];
    int B[LENGTH] = {9, 8, 7, 6, 5};
    cout << "Enter five integers separated in space: ";
    cin >> A[0] >> A[1] >> A[2] >> A[3] >> A[4];

    cout << "Before copy A to B: ";
    for (int j = 0; j < LENGTH; j++)
    {
        cout << B[j] << " ";
    }
    cout << endl;

    copy(A, B, LENGTH);
    cout << "After copy A to B: ";
    for (int j = 0; j < LENGTH; j++)
    {
        cout << B[j] << " ";
    }
    cout << endl;

    return 0;
}

void copy(int *A, int *B, int n)
{
    for (int i = 0; i < n; i++)
    {
        B[i] = A[i];
    }

    return;
}