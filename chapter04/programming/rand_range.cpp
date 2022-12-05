#include <iostream>
#include <cmath>
using namespace std;

int rand_range(int s, int e);

int main()
{
    const int LENGTH = 6;
    int count[LENGTH] = {0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 600; i++)
    {
        count[rand_range(1, 6) - 1]++;
    }

    cout << "Percentage of each dice number: ";
    for (int j = 0; j < 6; j++)
    {
        cout << j+1 << ": " << count[j]/600.0 << " ";
    }
    cout << endl;
}

int rand_range(int s, int e)
{
    
    // cout << rand() / RAND_MAX;
    double num = rand() / (RAND_MAX / (e - s + 1)) + s;
    double zero_1 = rand() / RAND_MAX;
    // why does below line does not work?
    // double int_num = zero_1 * (e - s + 1) + s;
    // return floor(int_num);
    return floor(num);
}