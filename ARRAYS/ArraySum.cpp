#include <iostream>
using namespace std;
int Sum(int a[], int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return a[0];
    else
    {
        int ans = Sum(a + 1, n - 1);
        return a[0] + ans;
    }
}
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    cout << "SUM OF ARRAY IS " << Sum(a, 5) << endl;
}