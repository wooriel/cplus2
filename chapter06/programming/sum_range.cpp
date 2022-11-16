#include <iostream>
using namespace std;

int sum_range(int *p_start, int *p_end);

int main()
{
    // const int LENGTH = 10;
    // int nums[LENGTH];
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int sidx, eidx;
    cout << "Enter the two numbers between 0 and 9 in increasing order: ";
    cin >> sidx >> eidx;
    int range_sum = sum_range((nums+sidx), (nums+eidx));
    // (nums+sidx) = nums[sidx]

    int *z = nums;
    z += 1;
    cout << *z << endl;

    cout << "The sum of the nums array in range " << sidx << " ~ " << eidx << " is: " << range_sum << ".\n";
}

int sum_range(int *p_start, int *p_end)
{
    int *p = p_start;
    int sum = 0;
    while (p != p_end)
    {
        sum += *p;
        p += 1; // 여기에서 4를 더했던게 나의 착오
    }
    return sum + *p_end;
}