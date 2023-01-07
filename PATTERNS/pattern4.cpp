#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, count=1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count;
            count = count + 1;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}