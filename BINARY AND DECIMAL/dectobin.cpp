#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int digit, ans = 0, i = 0;
    while (n != 0)
    {
        digit = n & 1;
        ans = ans + (digit * pow(10, i));
        n = n >> 1;
        i++;
    }
    cout << ans << endl;
}