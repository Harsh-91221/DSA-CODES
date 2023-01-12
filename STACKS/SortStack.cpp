#include <iostream>
#include <stack>
using namespace std;
void insertSort(stack<int> &s, int element)
{
    if (s.empty() || (!s.empty() && s.top() < element))
    {
        s.push(element);
        return;
    }
    int num = s.top();
    s.pop();
    insertSort(s, element);
    s.push(num);
}
void Sort(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int ans = st.top();
    st.pop();
    Sort(st);
    insertSort(st, ans);
}
int main()
{
    stack<int> s;
    s.push(4);
    s.push(7);
    s.push(2);
    s.push(8);
    s.push(1);
    Sort(s);
    while (!s.empty())
    {
        int ans = s.top();
        s.pop();
        cout << ans << " " << endl;
    }
}