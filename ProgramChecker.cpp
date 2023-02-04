#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        int j = i;
        for (;j > 0; j--)
        {
            cout << j - 1;
        }
        cout << endl;
    }
}
