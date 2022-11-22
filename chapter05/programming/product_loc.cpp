#include <iostream>
using namespace std;

int location(int *A, int n);

int main()
{
    const int PRODUCT_NUM = 10;
    int product[PRODUCT_NUM] = {5, 1, 2, 4, 2, 5, 1, 2, 3, 4};

    int prod_num;
    // The location of the product is between 1-5
    cout << "Enter the product number that you want to know the location: ";
    cin >> prod_num;

    int loc = location(product, prod_num);
    cout << "The product location is " << loc << ".\n";
}

int location(int *A, int n)
{
    return A[n-1];
}