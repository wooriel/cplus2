#include <iostream>
#include <cstdlib>
using namespace std;


void gen_intrand(int *A, int n);
void freq(int *A, int *C, int n);
int max_int(int *C, int n);
void print_arr(int *A, int n);

int main()
{
    const int LENGTH = 100;
    const int CLEN = 10;
    int rands[LENGTH];
    int count[CLEN] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    gen_intrand(rands, LENGTH);
    freq(rands, count, LENGTH);

    print_arr(rands, LENGTH);
    print_arr(count, CLEN);

    cout << "The most frequent number is: " << max_int(count, CLEN);
}

void gen_intrand(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        A[i] = rand()%10;
    }
    return;
}

void freq(int *A, int *C, int n)
{
    for (int i = 0; i < n; i++)
    {
        C[A[i]]++;
    }
}

int max_int(int *C, int n)
{
    int max_num=0;
    int max_idx=0;
    for (int i = 0; i < n - 1; i++)
    {
        if (C[max_idx] < C[i+1])
        {
            max_num = C[i+1];
            max_idx = i+1;
        }
    }
    return max_idx;
}

void print_arr(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return;
}