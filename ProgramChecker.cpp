#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i = 2;
    int n;
    cin >> n;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "NOT PRIME" << endl;
            break;
        }
        i++;
    }
    cout << "PRIME" << endl;
}