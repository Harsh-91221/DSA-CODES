#include <iostream>
#include <stack>
using namespace std;
void solve(stack<int> &s, int count, int size)
{
    if (count == size / 2)
    {
        s.pop();
        return;
    }
    int num = s.top();
    s.pop();
    solve(s, count + 1, size);
    s.push(num);
}
int main()
{
    stack<int> s;
    int count = 0;
    s.push(3);
    s.push(7);
    s.push(9);
    s.push(1);
    s.push(2);
    solve(s, count, s.size());
    while (!s.empty())
    {
        int ans = s.top();
        s.pop();
        cout << ans << " " << endl;
    }
}