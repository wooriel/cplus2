#include <iostream>
using namespace std;

int *search(int *A, int n);

int main()
{
    const int LENGTH = 10;
    int numbers[LENGTH] = {1, 2, 3, 4, 6, 7, 5, 8, 9, 0};

    int *p = search(numbers, 5);
    cout << "The point of where int 5 is: " << (void *) p << endl;
    cout << "The value on p is: " << *p << endl;
}

int *search(int *A, int n)
{
    // assume there always exists solution
    int i = 0;
    while (true)
    {
        if (A[i] == n)
        {
            return &A[i];
        }
        i++;
    }
}