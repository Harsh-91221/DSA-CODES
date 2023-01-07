#include <iostream>
using namespace std;
int getsum(int *a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    cout << "ENTER THE ARRAY" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = getsum(a, n);
    cout << ans << endl;
}