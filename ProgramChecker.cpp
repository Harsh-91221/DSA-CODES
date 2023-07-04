// input
// 3
// RRG

// output
// 1

/*Explanation-> Count the minimum number of stones to take from the table so that any two neighboring stones had different colors.*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cin >> n;
    string s = "";
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
    }
    cout << count;
}