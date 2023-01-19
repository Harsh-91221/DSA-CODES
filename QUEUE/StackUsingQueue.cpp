#include <bits/stdc++.h>
class Stack
{
    queue<int> q1;
    queue<int> q2;

public:
    Stack()
    {
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize()
    {
        return q1.size();
    }

    bool isEmpty()
    {
        if (q1.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int element)
    {
        q2.push(element);
        while (!q1.empty())
        {
            element = q1.front();
            q1.pop();
            q2.push(element);
        }
        swap(q1, q2);
    }

    int pop()
    {
        if (q1.empty())
        {
            return -1;
        }
        else
        {
            int ans = q1.front();
            q1.pop();
            return ans;
        }
    }

    int top()
    {
        if (q1.empty())
        {
            return -1;
        }
        else
        {
            return q1.front();
        }
    }
};