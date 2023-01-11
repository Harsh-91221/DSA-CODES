#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Stack
{
public:
    int size;
    Node *head;
    Stack(int size)
    {
        this->size = size;
        this->head = NULL;
    }

    void push(int d)
    {
        Node *temp = new Node(d);
        temp->data = d;
        temp->next = head;
        head = temp;
    }

    void pop()
    {
        if (head == NULL)
        {
            cout << "STACK IS EMPTY" << endl;
        }
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    int top()
    {
        if (head == NULL)
        {
            cout << "NO TOP ELEMENT" << endl;
            return -1;
        }
        else
        {
            return head->data;
        }
    }

    bool isempty()
    {
        if (head == NULL)
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
    if (st.isempty())
    {
        cout << "STACK IS EMPTY" << endl;
    }
    else
    {
        cout << "STACK IS NOT EMPTY" << endl;
    }
    st.push(3);
    st.push(6);
    st.push(8);
    st.push(2);
    st.pop();
    st.pop();
    cout << st.top() << endl;
}