#include <iostream>
#include <cstdlib>
using namespace std;

const int LEN = 20;

int fill(int *A, int n);
void print(int *A, int n);

int main()
{
    int arr[LEN], i;
    fill(arr, LEN);
    print(arr, LEN);
    // cout << *arr << endl; // this only prints the first variable

    return 0;
}

int fill(int *A, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        A[i] = rand();
        // cout << A[i] << endl;
    }

    return 0;
}

void print(int *A, int n)
{
    int i;

    cout << "A[] = { ";
    for (i = 0; i < LEN; i++)
    {
        cout << A[i] << " ";
        if (i == n - 1)
        {
            cout << "}" << endl;
        }
    }
}