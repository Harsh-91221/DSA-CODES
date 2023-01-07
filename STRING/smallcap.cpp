#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "ENTER THE CHARACTER" << endl;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "SMALL LETTER" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "CAPITAL LETTER" << endl;
    }
    else
    {
        cout << "NUMBER" << endl;
    }
}