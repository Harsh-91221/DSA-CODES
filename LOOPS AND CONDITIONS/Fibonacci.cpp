#include <iostream>
using namespace std;
// USING RECURSION
int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n;
    cin >> n;
    int ans = fibo(n);
    cout << ans << endl;
}
/*int fibo(int n)
{
    if (n == 0 || n == 1)
        return n - 1;
    int a = 0, b = 1;
    int ans;
    for (int i = 3; i <= n; i++)
    {
        ans = a + b;
        a = b;
        b = ans;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << "FIBONACCI NUMBER IS " << fibo(n) << endl;
}
*/

// PRINTING FIBONACCI SERIES
/*int main()
{
    int n;
    cin >> n;
    int a = 0, b = 1;
    int ans;
    cout << a << " " << b << " ";
    for (int i = 1; i <= n; i++)
    {
        ans = a + b;
        a = b;
        b = ans;
        cout << ans << " ";
    }
}*/
