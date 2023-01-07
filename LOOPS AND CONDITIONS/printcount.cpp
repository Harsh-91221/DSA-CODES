#include <iostream>
using namespace std;
int printcounting(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    printcounting(n);
}