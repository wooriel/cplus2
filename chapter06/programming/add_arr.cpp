#include <iostream>
using namespace std;

void add_arr(int *A, int *B, int *C, int n);


int main()
{
    const int LENGTH = 5;
    int A[LENGTH] = {1, 2, 3, 4, 5};
    int B[LENGTH] = {5, 4, 3, 1, 2};
    int C[LENGTH];

    add_arr(A, B, C, LENGTH);

    cout << "The result of C: ";
    for (int j = 0; j < LENGTH; j++)
    {
        cout << C[j] << " ";
    }
    cout << endl;
}

void add_arr(int *A, int *B, int *C, int n)
{
    for (int i = 0; i < n; i++)
    {
        C[i] = A[i] + B[i];
    }

    return;
}