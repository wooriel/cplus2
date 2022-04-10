#include <stdio.h>
using namespace std;


extern int all_files; // uses all_files defined in linkage1 cpp file global

void sub(void)
{
    all_files = 10;
}