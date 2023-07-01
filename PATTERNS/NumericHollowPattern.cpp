#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        int start = 1;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (i == 1 || i == n)
            {
                if (j % 2 == 1)
                {
                    cout << start;
                    start++;
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if (j == 1)
                {
                    cout << 1;
                }
                else if (j == 2 * i - 1)
                {
                    cout << i;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}