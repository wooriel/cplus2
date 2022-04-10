#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x = 0;
    int y = 0;

    // https://stackoverflow.com/questions/9626722/c-string-array-initialization
    // string* strArray or string strArray[]
    // don't new the array
    string arr[5];

    arr[0] = "zero";
    arr[1] = "one";
    arr[2] = "two";
    arr[3] = "three";
    arr[4] = "four";

    // printf expects char* type, but you're passing std::string in.
    // Use data() or c_str() function to extract
    // underlying char array pointer from the string.

    printf("++x: x gets increased and being used\n");
    printf("arr[++x] is: %s, which is the element in index 1\n", arr[++x].c_str());
    printf("The value of x is: %d\n", x);

    printf("y++: y is used and gets increased\n");
    printf("arr[y++] is: %s, which is the element in index 0\n", arr[y++].c_str());
    printf("The value of y is: %d\n", y);

    // int nextx = ++x;
    // int nexty = y++;

    return 0;
}