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
Node *printreverse(Node *head)
{
    // BASE CASE
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *chotahead = printreverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return chotahead;
    // if (head == NULL)
    // {
    //     return;
    // }
    // printreverse(head->next);
    // cout << head->data << " ";
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    head->next = a;
    Node *b = new Node(30);
    Node *c = new Node(40);
    a->next = b;
    b->next = c;
    c->next = NULL;
    print(head);
    print(printreverse(head));
}