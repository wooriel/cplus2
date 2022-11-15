#include <iostream>
using namespace std;

void vec_add(int x[], int y[], int res[], int n);
void print_vec(int x[], string name, int n);
int vec_dot(int x[], int y[], int n);

int main ()
{
    const int LENGTH = 3;
    int vec_x[LENGTH];
    int vec_y[LENGTH];
    int res[LENGTH];

    cout << "Enter elements of vec_x: ";
    cin >> vec_x[0] >> vec_x[1] >> vec_x[2];
    cout << "Enter elements of vec_y: ";
    cin >> vec_y[0] >> vec_y[1] >> vec_y[2];

    vec_add(vec_x, vec_y, res, LENGTH);
    print_vec(vec_x, "x", LENGTH);
    print_vec(vec_y, "y", LENGTH);
    print_vec(res, "resulting", LENGTH);

    cout << "The dot product of x vector and y vector is: " << vec_dot(vec_x, vec_y, LENGTH) << endl;

    return 0;
}

void vec_add (int x[], int y[], int res[], int n)
{
    for (int i = 0; i < n; i++)
    {
        res[i] = x[i] + y[i];
    }
    return;
}

void print_vec (int x[], string name, int n)
{
    cout << "The " << name << " vector: ";
    for (int j = 0; j < n; j++)
    {
        cout << x[j] << " ";
    }
    cout << endl;

    return;
}

int vec_dot (int x[], int y[], int n)
{
    int dot = 0;
    for (int k = 0; k < n; k++)
    {
        dot += x[k]*y[k];
    }
    return dot;
}