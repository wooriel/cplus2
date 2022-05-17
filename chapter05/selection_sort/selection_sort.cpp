#include <iostream>
using namespace std;

const int SIZE = 10;

void selection_sort(int list[], int n);
void print_list(int list[], int n);

int main()
{
    int grade[SIZE] = {3, 2, 9, 7, 1, 4, 8, 0, 6, 5};
    selection_sort(grade, SIZE);
    print_list(grade, SIZE);
    return 0;
}

void print_list(int list[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "list[" << i << "] is " << list[i] << "." << endl;
    }
}

void selection_sort(int list[], int n)
{
    int i, j, minidx, temp;
    for (i = 0; i < n; i++)
    {
        minidx = i;
        for (j = i + 1; j < n; j++)
        {
            if (list[minidx] > list[j])
            {
                minidx = j;
            }
        }
        // swap
        temp = list[i];
        list[i] = list[minidx];
        list[minidx] = temp;
    }
}