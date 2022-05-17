#include <iostream>
using namespace std;

const int SIZE = 9;

int binary_search(int list[], int n, int key);

int main(void)
{
    int key, kidx;
    int grade[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Enter the integer key between 1~9\n";
    cin >> key;
    while (key < 1 || key > 9)
    {
        cout << "Wrong input: enter the integer key between 1~9 again\n";
        cin >> key;
    }
    kidx = binary_search(grade, SIZE, key);
    cout << "The location of key is " << kidx << "." << endl;
}

int binary_search(int list[], int n, int key)
{
    int midx, sidx, eidx;
    sidx = 0;
    eidx = n - 1;

    while (sidx <= eidx)
    {
        midx = (sidx + eidx) / 2;
        if (key == list[midx])
            return midx;
        else if (key < list[midx])
            eidx = midx - 1;
        else // key > list[midx]
            sidx = midx + 1;
    }
    return -1;
}