#include <iostream>
#include <stack>
using namespace std;
void insertatbottom(stack<int> &s, int element)
{
    if (s.empty())
    {
        s.push(element);
        return;
    }
    int num = s.top();
    s.pop();
    insertatbottom(s, element);
    s.push(num);
}
void reverse(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int ans = st.top();
    st.pop();
    reverse(st);
    insertatbottom(st, ans);
}
int main()
{
    stack<int> s;
    s.push(4);
    s.push(7);
    s.push(2);
    s.push(8);
    s.push(1);
    reverse(s);
    while (!s.empty())
    {
        int ans = s.top();
        s.pop();
        cout << ans << " " << endl;
    }
}