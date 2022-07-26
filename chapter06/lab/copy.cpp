#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

int copy(int *A, int *B, int n);

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[10], i;
    copy(arr, arr2, 10);

    for (i = 0; i < 10; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}

int copy(int *A, int *B, int n)
{
    // copy arr A to B
    int i;
    // cout << sizeof(A) << endl;
    // cout << sizeof(*A) << endl;
    // cout << sizeof(A) / sizeof(A[0]) << endl;
    for (i = 0; i < n; i++)
    {
        B[i] = A[i];
    }

    return 0;
}