#include <iostream>
using namespace std;
int Arithmetic(int n)
{
    int ans = (3 * n + 7);
    cout << ans << endl;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    Arithmetic(n);
}