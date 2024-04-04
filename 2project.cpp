#include <iostream>
using namespace std;
int main()
{

    int a;
    cout << "enter the first number" << endl;
    cin >> a;
    int b;
    cout << "enter the second number" << endl;
    cin >> b;

    char op; 
    cout << "enter the op" << endl;
    cin >> op;
    switch (op)
    {
    case ('+'):
        cout << "result is a+b" << endl
             << a + b;
        break;
    case ('-'):
        cout << "result is a-b" << endl
             << a - b;
        break;
    case ('*'):
        cout << "result is a*b" << endl
             << a * b;
        break;
    case ('/'):
        cout << "result is a/b" << endl
             << (float)a / b;
        break;

    default:
        break;
    }

    return 0;
}