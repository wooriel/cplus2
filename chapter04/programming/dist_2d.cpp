#include <iostream>
#include <cmath>
using namespace std;


double dist_2d(double x1, double y1, double x2, double y2);

int main ()
{
    double x1, x2, y1, y2;
    
    cin >> x1 >> x2 >> y1 >> y2;
    cout << "The Euclidean distance is: " << dist_2d(x1, y1, x2, y2) << endl;

    return 0;
}

double dist_2d(double x1, double y1, double x2, double y2)
{
    double val = pow((x2 - x1), 2) + pow((y2 - y1), 2);
    return sqrt(val);
}