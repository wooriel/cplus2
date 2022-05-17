#include <iostream>
#include <typeinfo>
// using namespace std;

int main()
{
    int a = 3000;
    int *p = &a;

    std::cout << &a << std::endl;
    std::cout << p << std::endl;

    std::cout << a << std::endl;
    std::cout << *p << std::endl; // value in pointer

    std::cout << typeid(&a).name() << std::endl;
}