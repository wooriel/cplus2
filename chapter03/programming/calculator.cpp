#include <iostream>
using namespace std;


int main ()
{
    string menu = "************\n\
    + --- Add\n\
    - --- Subtract\n\
    / --- Divide\n\
    Q --- Quit\n\
    ************\n\
    Choose the operation: ";
    string enter = "Enter two numbers separated in space: ";
    char oper = '0';
    double a, b;
    // double two_double[2];
    // string rawInput;

    while (oper != 'Q')
    {
        cout << menu;
        cin >> oper;

        if (oper != 'Q')
        {
            cout << enter;
            cin >> a >> b;
            // while (getline(cin, rawInput, ' '))
            // {
            //     two_double.push_back(rawInput)
            // }

            // switch에서 값이 일치할때 실행하고
            // break이 없으면 계속 아래거도 실행을 한다.
            switch (oper)
            {
                case '+':
                    cout << a + b << endl;
                    break;
                case '-':
                    cout << a - b << endl;
                    break;
                case '*':
                    cout << a * b << endl;
                    break;
                case '/':
                    cout << a / b << endl;
                    break;
                case 'Q':
                    break;
                default:
                    cout << "Wrong operation entered!" << endl;
                    break;
            }
        }
    }
}