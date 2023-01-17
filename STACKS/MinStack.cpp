#include <stack>
class SpecialStack
{
    // Define the data members.
    stack<int> s;
    int mini;

    /*----------------- Public Functions of SpecialStack -----------------*/
public:
    void push(int data)
    {
        if (s.empty())
        {
            s.push(data);
            mini = data;
        }
        else
        {
            if (data < mini)
            {
                int val = 2 * data - mini;
                s.push(val);
                mini = data;
            }
            else
            {
                s.push(data);
            }
        }
    }

    int pop()
    {
        if (s.empty())
        {
            return -1;
        }
        int data = s.top();
        s.pop();
        if (data > mini)
        {
            return data;
        }
        else
        {
            int prevMini = mini;
            int val = 2 * mini - data;
            mini = val;
            return prevMini;
        }
    }

    int top()
    {
        int data = s.top();
        if (s.empty())
            return -1;
        if (data < mini)
        {
            return mini;
        }
        else
        {
            return data;
        }
    }

    bool isEmpty()
    {
        return s.empty();
    }

    int getMin()
    {
        if (s.empty())
        {
            return -1;
        }
        else
        {
            return mini;
        }
    }
};