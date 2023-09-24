#include <stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (s.top() >= curr)
        {
            s.pop();
        }
        // CHOTA ELEMENT MIL GAYA STORE IN ANS
        ans[i] = s.top();
        // PUSH KARDO CURR KO
        s.push(curr);
    }
    return ans;
}