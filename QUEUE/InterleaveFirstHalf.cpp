#include <bits/stdc++.h>
#include <queue>
void interLeaveQueue(queue<int> &q)
{
    queue<int> newq;
    int half = q.size() / 2;
    for (int i = 0; i < half; i++)
    {
        int val = q.front();
        q.pop();
        newq.push(val);
    }
    while (!newq.empty())
    {
        int val = newq.front();
        newq.pop();
        q.push(val);
        val = q.front();
        q.pop();
        q.push(val);
    }
}