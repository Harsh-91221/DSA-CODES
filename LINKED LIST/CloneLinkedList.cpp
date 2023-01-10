#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *random;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->random = NULL;
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
void insertattail(Node *&head, Node *&tail, int d)
{
    Node *law = new Node(d);
    if (head == NULL)
    {
        head = law;
        tail = law;
    }
    else
    {
        tail->next = law;
        tail = law;
    }
}
Node *cloneLL(Node *head)
{
    // STEP 1: CREATE A CLONE LIST
    Node *clonehead = NULL;
    Node *clonetail = NULL;
    Node *temp = head;
    while (temp != NULL)
    {
        insertattail(clonehead, clonetail, temp->data);
        temp = temp->next;
    }

    // STEP 2: CLONE NODES ADD IN BETWEEN ORIGINAL LIST
    Node *originalNode = head;
    Node *cloneNode = clonehead;
    while (originalNode != NULL && cloneNode != NULL)
    {
        Node *forward = originalNode->next;
        originalNode->next = cloneNode;
        originalNode = forward;

        forward = cloneNode->next;
        cloneNode->next = originalNode;
        cloneNode = forward;
    }

    // STEP 3: COPY RANDOM IN CLONE LIST
    temp = head;
    while (temp != NULL)
    {
        if (temp->next != NULL)
        {
            temp->next->random = temp->random ? temp->random->next : temp->random;
        }
        temp = temp->next->next;
    }

    // STEP 4: REVERT CHANGES DONE IN STEP 2
    originalNode = head;
    cloneNode = clonehead;
    while (cloneNode != NULL && originalNode != NULL)
    {
        originalNode->next = cloneNode->next;
        originalNode = originalNode->next;
        if (originalNode != NULL)
        {
            cloneNode->next = originalNode->next;
        }
        cloneNode = cloneNode->next;
    }

    // STEP 5: RETURN ANS
    return clonehead;
}
int main()
{
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(4);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = NULL;
    cloneLL(head);
    print(head);
}