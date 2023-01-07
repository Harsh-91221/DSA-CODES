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

Node *reversel(Node *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *next = NULL;
    Node *cur = head;
    Node *prev = NULL;
    int cnt = 0;
    while (cur != NULL && cnt < k)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
        cnt++;
    }
    if (next != NULL)
    {
        head->next = reversel(next, k);
    }

    return prev;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    head->next = a;
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = NULL;
    print(head);
    print(reversel(head, 4));
}