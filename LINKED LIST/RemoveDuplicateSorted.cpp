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
Node *uniqueSortedList(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->next != NULL && (curr->data == curr->next->data))
        {
            Node *next1 = curr->next->next;
            Node *nodetodelete = curr->next;
            delete (nodetodelete);
            curr->next = next1;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    head->next = a;
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(40);
    Node *f = new Node(40);
    Node *g = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = NULL;
    print(head);
    uniqueSortedList(head);
    print(head);
}