#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

int main()
{
    int A[ROWS][COLS] = {
        {2, 3, 0},
        {8, 9, 1},
        {7, 0, 5}};
    int B[ROWS][COLS] = {
        {1, 0, 0},
        {1, 0, 0},
        {1, 0, 0}};
    int C[ROWS][COLS];

    int r, c;
    for (r = 0; r < ROWS; r++)
    {
        for (c = 0; c < COLS; c++)
        {
            C[r][c] = A[r][c] + B[r][c];
            cout << "C [" << r << "][" << c << "] is " << C[r][c] << "." << endl;
        }
    }

    return 0;
}