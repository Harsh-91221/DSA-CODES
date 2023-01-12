#include <iostream>
#include <stack>
using namespace std;
void solve(stack<int> &s, int x)
{
    // TEMPORARY STACK
    stack<int> temp;
    // ITERATE UNTIL s IS EMPTY
    while (!s.empty())
    {
        // PUSH TOP ELEMENT OF S INTO TEMP STACK
        temp.push(s.top());
        s.pop();
    }
    s.push(x);
    // ITERATE UNTIL temp IS EMPTY
    while (!temp.empty())
    {
        // PUSH TOP ELEMENT OF TEMP INTO s STACK
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