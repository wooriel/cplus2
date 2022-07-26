#include <iostream>
#include <cstring>
using namespace std;

// Task: make rmv_space function
void rmv_space(char *sent, char *new_sent, int n);

int main()
{
    char s1[33] = "Hello I don't want to work today";
    char *p_s1 = s1;
    char s2[33];
    char *p_s2 = s2;
    rmv_space(p_s1, p_s2, 33);
    cout << s2 << endl;

    return 0;
}

void rmv_space(char *sent, char *new_sent, int n)
{
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        // cout << sent[i] << " ";
        if (sent[i] != ' ')
        {
            new_sent[counter] = sent[i];
            counter++;
        }
    }
}