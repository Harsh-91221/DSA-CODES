#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + (i + j - 2);
            cout << ch;
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }
}