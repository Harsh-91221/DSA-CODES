#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[100], n, count = 0, sum1 = 0, sum2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum1 += a[i];
    }
    int half = sum1 / 2;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        sum2 += a[i];
        count++;
        if (sum2 > half)
        {
            break;
        }
    }
    cout << count;
    return 0;
}