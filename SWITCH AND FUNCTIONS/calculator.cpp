#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "ENTER THE NUMBERS" << endl;
    cin >> a >> b;
    char op;
    cout << "ENTER THE OPERATOR" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    default:
        cout << "wrong input" << endl;
    }
}