#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i - 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int a = 1; a <= n; a++)
    {
        for (int j = 1; j <= a; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= n - a; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}