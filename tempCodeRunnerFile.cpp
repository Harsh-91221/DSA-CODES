#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int Harsh = 1; //distict
        int manzil = 0;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                continue; //Skipping
            }
            else
            {
                Harsh++;
            }
            if (s[i - 1] == '0' && s[i] == '1')
            {
                manzil = 1;  //Transition
            }
        }
        int uttar = Harsh - manzil;
        cout << uttar << endl;
    }
    return 0;
}
