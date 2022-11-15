#include <iostream>
using namespace std;

void print(int *A, int n);

int main()
{
    const int LENGTH = 5;
    int arr[LENGTH] = {1, 2, 3, 4, 5};
    print(arr, LENGTH);
}

void print(int *A, int n)
{
    cout << "A[] = { ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i];
        if (i != n - 1)
        {
            cout << ", ";
        }
        else
        {
            cout << " }";
        }
    }
    return;
}