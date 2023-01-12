#include <iostream>
#include <stack>
using namespace std;
void solve(stack<int> &s, int x)
{
    stack<int> temp;
    while (!s.empty())
    {
        temp.push(s.top());
        s.pop();
    }
    s.push(x);
    while (!temp.empty())
    {
        s.push(temp.top());
        temp.pop();
    }
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}

int main()
{
    stack<int> s;
    s.push(2);
    s.push(1);
    s.push(7);
    s.push(2);
    s.push(9);
    solve(s, 6);
}