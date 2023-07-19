#include <iostream>
#include <vector>
using namespace std;
void solve(string s, vector<int> &ans)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            ans.push_back(s[i] - '0');
        }
    }
}
int main()
{
    vector<int> ans;
    string s = "Hello 123 world 456";
    solve(s, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    cout << endl;
    int sum = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        sum = sum + ans[i];
    }
    cout << sum;
    // int s = 0, r = 0;
    // while (num != 0)
    // {
    //     r = num % 10;
    //     s = s + r;
    //     num = num / 10;
    // }
    // cout << s;
}