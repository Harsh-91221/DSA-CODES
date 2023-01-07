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
};
// INSERTION AT BEGININNING
void insertAtbeg(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
// INSERTION AT END
void insertAtend(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
// INSERTION AT A POSITION
void insertAtposition(Node *&head, int position, int d)
{
    // For inserting at start
    if (position == 1)
    {
        insertAtbeg(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // Creating a node for d
    Node *Nodetoinsert = new Node(d);
    Nodetoinsert->next = temp->next;
    temp->next = Nodetoinsert;
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
    // cout << n1->data << endl;
    // cout << n1->next << endl;
    //  Head pointed to n1
    Node *head = n1;
    Node *tail = n1;
    print(head);
    insertAtbeg(head, 5);
    print(head);
    insertAtbeg(head, 7);
    print(head);
    insertAtbeg(head, 9);
    print(head);
    insertAtend(tail, 5);
    print(head);
    insertAtend(tail, 7);
    print(head);
    insertAtend(tail, 9);
    print(head);
    insertAtposition(head, 1, 8);
    print(head);
}
