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
            cout << "  ";
        }
        int start = i;
        for (int j = 1; j <= i; j++)
        {
            cout << start << " ";
            start++;
        }
        start = 2 * i - 2;
        for (int j = 1; j <= i - 1; j++)
        {
            cout << start << " ";
            start--;
        }
        cout << endl;
    }
}
