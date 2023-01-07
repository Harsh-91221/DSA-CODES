#include <iostream>
using namespace std;
int main()
{
    int r, s, j, k, n, q;
    cin >> q;
    cin >> n;
    switch (q)
    {
    case 1:
        for (int i = 1; i <= n; i++)
        {
            r = n % 10;
            s = s + r;
            n = n / 10;
        }
        cout << s << endl;
        break;

    case 2:
        for (int i = 1; i <= n; i++)
        {
            k = n % 10;
            j = j * k;
            n = n / 10;
        }
        cout << j << endl;
        break;
    default:
        cout << "wrong" << endl;
    }
}