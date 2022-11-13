#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


void fill (int *A, int n);

int main ()
{
    const int N = 10;
    int iarr[N];
    fill(iarr, N);
    
    for (int i = 0; i < N; i++)
    {
        cout << "The value if iarr[" << i << "]: " << iarr[i] << endl;
    }
}


void fill (int *A, int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 100;
    }
}