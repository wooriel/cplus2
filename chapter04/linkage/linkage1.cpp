#include <iostream>
using namespace std;

int all_files;
static int this_file; // only can be read from linkage1.cpp
// even using the extern keyword, it cannot be used in linkage2.cpp
extern void sub(); // used globally defined sub function in linkage2

int main()
{
    sub();
    cout << all_files << endl;
    
    return 0;
}