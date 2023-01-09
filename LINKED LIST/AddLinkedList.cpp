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
Node *reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
void insertattail(Node *&head, Node *&tail, int val)
{
    Node *temp = new Node(val);
    // EMPTY LIST
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}
Node *add(Node *first, Node *second)
{
    Node *anshead = NULL;
    Node *anstail = NULL;
    int carry = 0;
    while (first != NULL || second != NULL || carry != 0)
    {
        int val1 = 0;
        if (first != NULL)
            val1 = first->data;

        int val2 = 0;
        if (second != NULL)
            val2 = second->data;

        int sum = carry + val1 + val2;
        int digit = sum % 10;
        // CREATE NODE AND ADD IN ANSWER LINKED LIST
        insertattail(anshead, anstail, digit);

        carry = sum / 10;

        if (first != NULL)
            first = first->next;

        if (second != NULL)
            second = second->next;
    }
    return anshead;
}
// Function to add two numbers represented by linked list.
Node *addTwoLists(Node *first, Node *second)
{
    // STEP 1:REVERSE INPUT LINKED LISTS
    first = reverse(first);
    second = reverse(second);
    // STEP 2: ADD FROM LEFT
    Node *ans = add(first, second);
    // STEP 3: RETURN ANS AFTER REVERSING
    ans = reverse(ans);
    return ans;
}
int main()
{
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(4);
    Node *c = new Node(1);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = NULL;
    Node *head1 = new Node(2);
    Node *a1 = new Node(5);
    Node *b1 = new Node(7);
    Node *c1 = new Node(4);
    head1->next = a1;
    a1->next = b1;
    b1->next = c1;
    c1->next = NULL;
    Node *temp = addTwoLists(head, head1);
    print(temp);
}