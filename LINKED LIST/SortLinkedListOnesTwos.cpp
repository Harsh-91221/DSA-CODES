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
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *sortList(Node *head)
{
    int zerocount = 0;
    int onecount = 0;
    int twocount = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zerocount++;
        }
        else if (temp->data == 1)
        {
            onecount++;
        }
        else if (temp->data == 2)
        {
            twocount++;
        }
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        if (zerocount != 0)
        {
            temp->data = 0;
            zerocount--;
        }
        else if (onecount != 0)
        {
            temp->data = 1;
            onecount--;
        }
        else if (twocount != 0)
        {
            temp->data = 2;
            twocount--;
        }
        temp = temp->next;
    }
    return head;
}
int main()
{
    Node *head = new Node(0);
    Node *a = new Node(2);
    Node *b = new Node(0);
    Node *c = new Node(1);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = NULL;
    sortList(head);
    print(head);
}