#include <iostream>
using namespace std;


void print_error(int n);
double larger_of(double x, double y);
void side_effect()
{

}

int main()
{
    print_error(8);
    double large_val = larger_of(3, 4);
    cout << large_val << endl;
    side_effect();
}

void print_error(int n)
{

}

double larger_of(double x, double y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}