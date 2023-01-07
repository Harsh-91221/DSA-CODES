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
            next = NULL;
        }
        cout << "MEMORY IS FREE " << value << endl;
    }
};
void print(Node *&tail)
{
    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    {
        cout << endl;
    }
}
void deletenode(Node *&tail, int value)
{
    // EMPTY LIST
    if (tail == NULL)
    {
        cout << "LIST IS EMPTY" << endl;
        return;
    }
    else
    {
        // NON-EMPTY LIST
        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
void insertnode(Node *&tail, int element, int d)
{
    // EMPTY LIST
    if (tail == NULL)
    {
        Node *newnode = new Node(d);
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        // NON-EMPTY LIST
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // ELEMENT FOUND CURR IS REPRESENTING ELEMENT WALA NODE
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
int main()
{
    Node *tail = NULL;
    insertnode(tail, 3, 5);
    print(tail);
    insertnode(tail, 5, 6);
    print(tail);
    insertnode(tail, 6, 9);
    print(tail);
    insertnode(tail, 9, 2);
    print(tail);
    insertnode(tail, 2, 4);
    print(tail);
    insertnode(tail, 4, 8);
    print(tail);
    deletenode(tail, 4);
    print(tail);
}