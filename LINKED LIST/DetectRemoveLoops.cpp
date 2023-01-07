#include <iostream>
#include <map>
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
// SIMPLE ITERATIVE METHOD
/*bool detectloop(Node *head)
{
    if (head == NULL)
        return false;
    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        // CYCLE IS PRESENT
        if (visited[temp] == true)
        {
            cout << "PRESENT ON ELEMENT" << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}*/
// DETECTING LOOP
Node *FloydDetectLoop(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            cout << "PRESENT AT ELEMENT " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}
// FINDING STARTING NODE OR LOOP
Node *getstartingnode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *intersection = FloydDetectLoop(head);
    Node *slow = head;
    if (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
// REMOVING LOOP
void removeloop(Node *head)
{
    if (head == NULL)
        return;
    Node *startofnode = getstartingnode(head);
    Node *temp = startofnode;
    while (temp->next != startofnode)
    {
        temp = temp->next;
    }
    temp->next = NULL;
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
    Node *a = new Node(12);
    Node *b = new Node(15);
    Node *c = new Node(22);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = a;
    if (FloydDetectLoop(head))
    {
        cout << "CYCLE IS PRESENT" << endl;
    }
    else
    {
        cout << "CYCLE IS NOT PRESENT" << endl;
    }
    Node *temp = getstartingnode(head);
    cout << "STARTING NODE OF LOOP IS " << temp->data << endl;
    removeloop(head);
    print(head);
}