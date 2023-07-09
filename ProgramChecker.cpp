// Input
// 40047

// Output
// NO

/*Explanation-> Petya loves lucky numbers.
We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7.
For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.*/

#include <iostream>
using namespace std;
int main()
{
    long long int n, count = 0;
    cin >> n;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            count++;
        }
        n = n / 10;
    }
    if (count == 4 || count == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}