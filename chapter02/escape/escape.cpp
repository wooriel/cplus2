#include <iostream>
using namespace std;

int main()
{
    cout << "Enter your ID and password:\n";
    cout << "id: ____\b\b\b\b";
    string id, pass;
    cin >> id;
    cout << "pass: ____\b\b\b\b";
    cin >> pass;

    cout << "\aThe entered id is \" " << id << "\" , and the password is \" " << pass << "\" .\n";
    cout << "\a";
    return 0;
}