#include <iostream>
using namespace std;

int main()
{
    char code = 'A';

    printf("%d %d %d\n", code, code+1, code+2);
    printf("%c %c %c\n", code, code+1, code+2);

    bool condition = true;
    int isOK = true;
    int ready = false;
    cout << "integer isOK: " << isOK << endl;
    cout << "integer ready: " << ready << endl;

    bool isOK2 = 99;
    bool ready2 = 0;
    cout << "boolean isOK2: " << isOK2 << endl;
    cout << "boolean ready2: " << ready2 << endl;

    printf("boolean isOK2: %d\n", isOK2);
    printf("boolean ready2: %d\n", ready2);
    printf("boolean manual true: %s\n", "true");
    printf("boolean manual false: %s\n", "false");

    cout << boolalpha;
    cout << "boolean isOK2: " << isOK2 << endl;
    cout << "boolean ready2: " << ready2 << endl;

    return 0;
}