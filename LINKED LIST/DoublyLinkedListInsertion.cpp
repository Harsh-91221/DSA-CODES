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
};
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
// Gives length of linked list
int getlength(node *head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}
// void insertAthead(node *&head, int d)
// {
//     node *temp = new node(d);
//     temp->next = head;
//     head->prev = head;
//     head = temp;
// }
//************PROBLEM NEED TO BE SOLVED BECAUSE OF GARBAGE VALUE IN OUTPUT**************
void insertAttail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    temp->next = NULL;
    tail = temp;
}
void insertAtpos(node *&head, int pos, int d)
{
    if (pos == 1)
    {
        insertAttail(head, d);
        return;
    }
    node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // Creating a node for d
    node *Nodetoinsert = new node(d);
    Nodetoinsert->next = temp->next;
    temp->next->prev = Nodetoinsert;
    temp->next = Nodetoinsert;
    Nodetoinsert->prev = temp;
}
int main()
{
    node *n1 = new node(10);
    node *head = n1;
    node *tail = n1;
    print(head);
    // insertAthead(head, 11);
    // print(head);
    // insertAthead(head, 15);
    // print(head);
    // insertAthead(head, 21);
    // print(head);
    insertAttail(tail, 23);
    print(head);
    insertAttail(tail, 26);
    print(head);
    insertAttail(tail, 28);
    print(head);
    insertAtpos(head, 2, 7);
    print(head);
    cout << "LENGTH IS " << getlength(head) << endl;
}