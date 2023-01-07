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
Node *insertAttail(Node *&tail, Node *curr)
{
    tail->next = curr;
    tail = curr;
}
// USING DATA REPLACEMENT
Node *sortList(Node *head)
{
    /*int zerocount = 0;
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
}*/
    // WITHOUT USING DATA REPLACEMENT

    // DUMMY NODES
    Node *zerohead = new Node(-1);
    Node *zerotail = zerohead;
    Node *onehead = new Node(-1);
    Node *onetail = onehead;
    Node *twohead = new Node(-1);
    Node *twotail = twohead;
    Node *curr = head;
    // CREATE SEPERATE LIST 0s 1s 2s
    while (curr != NULL)
    {
        int value = curr->data;
        if (value == 0)
        {
            insertAttail(zerotail, curr);
        }
        else if (value == 1)
        {
            insertAttail(onetail, curr);
        }
        else if (value == 2)
        {
            insertAttail(twotail, curr);
        }
        curr = curr->next;
    }
    // MERGE 3 SUBLIST
    // 1s LIST NOT EMPTY
    if (onehead->next != NULL)
    {
        zerotail->next = onehead->next;
    }
    // 1s LIST EMPTY
    else
    {
        zerotail->next = twohead->next;
    }
    onetail->next = twohead->next;
    twotail->next = NULL;
    // Setup Head
    head = zerohead->next;
    // DELETING DUMMY NODES
    delete zerohead;
    delete onehead;
    delete twohead;
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