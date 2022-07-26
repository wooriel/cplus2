#include <iostream>
using namespace std;

int get_line_parameter(int x1, int y1, int x2, int y2, float *slope, float *yintercept)
{
    if (x1 == x2)
        return -1;
    else
    {
        *slope = (float)(x2 - x1) / (float)(y2 - y1);
        // y = slope * x + yinter |-> y - slope * x = yinter
        *yintercept = y1 - (*slope) * x1;
        return 0;
    }
}

int main()
{
    float s, y;

    if (get_line_parameter(3, 3, 6, 6, &s, &y) == -1)
        cout << "Error" << endl;
    else
    {
        cout << "The slope is " << s << " and the y intercept is " << y << endl;
    }
    return 0;
}