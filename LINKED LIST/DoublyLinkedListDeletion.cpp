#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;
    // CONSTRUCTOR
    node(int d)
    {
        this->data = d;
        this->next = next;
        this->prev = prev;
    }
    // DESTRUCTOR
    ~node()
    {
        int value = this->data;
        // Memory Free
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "MEMORY IS FREE " << value << endl;
    }
};
void insertAthead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head->prev = head;
    head = temp;
}
void deleteNode(int pos, node *&head)
{
    // Deleting first or start node
    if (pos == 1)
    {
        node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // Deleting middle or last node
        node *curr = head;
        node *prev = NULL;
        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
// Traversing a linked list
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *n1 = new node(10);
    node *head = n1;
    node *tail = n1;
    print(head);
    insertAthead(head, 11);
    print(head);
    insertAthead(head, 15);
    print(head);
    insertAthead(head, 21);
    print(head);
    deleteNode(1, head);
    print(head);
}
