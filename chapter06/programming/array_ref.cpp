#include <iostream>
#include <array>
using namespace std;

// Task 1: make print function
void print(int *A, int n, string name);

// Task 2: make copy function
void copy(int *A, int *B, int n);

// Task 3: make add function
void add(int *A, int *B, int *C, int n);

// Task 4: make reverse function
void reverse(int *A, int n);

// Task 5: make array range sum function
int sum_range(int *p_start, int *p_end);

// Task 6: make search function
int *search(int *A, int x, int n);

// Final Task: make get_sum_diff function
void get_sum_diff(int A[], int n, int *p_sum, int *p_diff);

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int length = 5;
    print(A, length, "A");

    int B[length];
    copy(A, B, length);
    print(B, length, "B");

    int C[length];
    add(A, B, C, length);
    print(C, length, "C");

    reverse(A, length);
    print(A, length, "A");

    int sum;
    sum = sum_range(&A[2], &A[4]);
    cout << sum << endl;

    int *p = search(A, 6, 5);
    cout << *p << endl;

    int *arr_sum, *arr_diff;
    get_sum_diff(A, 5, arr_sum, arr_diff);
    cout << "sum of the array: " << *arr_sum << endl;
    cout << "difference of the array: " << *arr_diff << endl;

    return 0;
}

void print(int *A, int n, string name)
{
    cout << name << "[] = {";
    for (int i = 0; i < n; i++)
    {
        cout << A[i];
        if (i + 1 != n)
        {
            cout << ", ";
        }
        else
        {
            cout << "}" << endl;
        }
    }
}

void copy(int *A, int *B, int n)
{
    for (int i = 0; i < n; i++)
    {
        B[i] = A[i];
    }
}

void add(int *A, int *B, int *C, int n)
{
    for (int i = 0; i < n; i++)
    {
        C[i] = A[i] + B[i];
    }
}

void reverse(int *A, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = A[i];
        A[i] = A[n - i - 1];
        A[n - i - 1] = temp;
    }
}

int sum_range(int *p_start, int *p_end)
{
    int sum = 0;
    for (int *i = p_start; i <= p_end; i++)
    {
        sum += *i;
    }

    return sum;
}

int *search(int *A, int x, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] == x)
        {
            return &A[i];
        }
    }

    return &A[n];
}

void get_sum_diff(int A[], int n, int *p_sum, int *p_diff)
{
    for (int i = 0; i < n; i++)
    {
        *p_sum += A[i];
    }
    *p_diff = -*p_sum;
}