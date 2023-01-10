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
Node *solve(Node *first, Node *second)
{
    // if only one element
    if (first->next == NULL)
    {
        first->next = second;
        return first;
    }
    Node *curr1 = first;
    Node *next1 = curr1->next;
    Node *curr2 = second;
    Node *next2 = curr2->next;
    while (next1 != NULL && curr2 != NULL)
    {
        if ((curr2->data >= curr1->data) && (curr2->data <= next1->data))
        {
            // ADD NODE IN BETWEEN THE FIRST LIST
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            // UPDATE POINTERS
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            // curr1 and next1 will move ahead
            curr1 = next1;
            next1 = next1->next;
            if (next1 == NULL)
            {
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}
Node *sortTwoLists(Node *first, Node *second)
{
    if (first == NULL)
        return second;
    if (second == NULL)
        return first;
    if (first->data <= second->data)
    {
        return solve(first, second);
    }
    else
    {
        return solve(second, first);
    }
}
int main()
{
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(4);
    Node *c = new Node(9);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = NULL;
    Node *head1 = new Node(3);
    Node *a1 = new Node(5);
    Node *b1 = new Node(7);
    Node *c1 = new Node(8);
    head1->next = a1;
    a1->next = b1;
    b1->next = c1;
    c1->next = NULL;
    Node *temp = sortTwoLists(head, head1);
    print(temp);
}