#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // CONSTRUCTOR
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // DESTRUCTOR
    ~Node()
    {
        int value = this->data;
        // Memory Free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "MEMORY IS FREE " << value << endl;
    }
};
// INSERTION AT END
void insertAtend(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void deleteNode(int pos, Node *&head)
{
    // Deleting first or start node
    Node *temp = head;
    if (pos == 1)
    {
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    // Deleting middle or last node
    Node *curr = head;
    Node *prev = NULL;
    int cnt = 1;
    while (cnt < pos)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // Create new node
    Node *n1 = new Node(10);
    Node *head = n1;
    Node *tail = n1;
    cout << head->data << endl;
    print(head);
    insertAtend(tail, 5);
    print(head);
    insertAtend(tail, 7);
    print(head);
    insertAtend(tail, 9);
    print(head);
    deleteNode(2, head);
    print(head);
}
