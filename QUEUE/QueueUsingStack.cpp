#include <stack>
class Queue
{
    // Define the data members(if any) here.
    stack<int> s1;
    stack<int> s2;

public:
    Queue()
    {
        // Initialize your data structure here.
    }

    void enQueue(int val)
    {
        s1.push(val);
    }

    int deQueue()
    {
        if (s1.empty() && s2.empty())
        {
            return -1;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                int val = s1.top();
                s1.pop();
                s2.push(val);
            }
        }
        int ans = s2.top();
        s2.pop();
        return ans;
    }

    int peek()
    {
        if (s1.empty() && s2.empty())
        {
            return -1;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                int val = s1.top();
                s1.pop();
                s2.push(val);
            }
        }
        int ans = s2.top();
        return ans;
    }

    bool isEmpty()
    {
        if (s1.empty() && s2.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};