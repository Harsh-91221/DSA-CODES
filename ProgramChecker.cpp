#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "NOT PRIME";
    }
    else if (n > 1)
    {
        for (int i = 2; i < n / 2 + 1; i++)
        {
            if (n % i == 0)
            {
                cout << "NOT PRIME";
                break;
            }
        }
        cout << "PRIME";
    }
    else
    {
        cout << "NOT PRIME";
    }
}