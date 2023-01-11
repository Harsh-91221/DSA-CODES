#include <iostream>
using namespace std;
class Stack
{
public:
    // PROPERTIES
    int *arr;
    int top;
    int size;

    // BEHAVIOUR
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "STACK OVERFLOW" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "STACK UNDERFLOW" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "STACK IS EMPTY" << endl;
            return -1;
        }
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isfull()
    {
        if (top == size - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Stack st(5);
    st.push(45);
    st.push(5);
    st.push(4);
    st.push(98);
    st.pop();
    st.pop();
    cout << st.peek() << endl;
    if (st.isempty())
    {
        cout << "STACK IS EMPTY" << endl;
    }
    else
    {
        cout << "STACK IS NOT EMPTY" << endl;
    }
    if (st.isfull())
    {
        cout << "STACK IS FULL" << endl;
    }
    else
    {
        cout << "STACK IS NOT FULL" << endl;
    }
}