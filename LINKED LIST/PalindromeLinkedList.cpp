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
Node *getmid(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
bool isPalindrome(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return true;
    }
    // STEP 1: FIND MIDDLE
    Node *middle = getmid(head);
    // STEP 2 : REVERSE LINKED LIST AFTER MIDDLE
    Node *temp = middle->next;
    middle->next = reverse(temp);
    // STEP 3: COMPARE BOTH HALVES
    Node *head1 = head;
    Node *head2 = middle->next;
    while (head2 != NULL)
    {
        if (head1->data != head2->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return true;
}
int main()
{
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(2);
    Node *c = new Node(1);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = NULL;
    if (isPalindrome(head))
    {
        cout << "PALINDROME" << endl;
    }
    else
    {
        cout << "NOT PALINDROME" << endl;
    }
}