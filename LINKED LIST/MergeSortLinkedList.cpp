#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
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
node *getmid(node *head)
{
    node *slow = head;
    node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
node *merge(node *left, node *right)
{
    if (left == NULL)
        return right;
    if (right == NULL)
        return left;
    // DUMMY node
    node *ans = new node(-1);
    node *temp = ans;
    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }
    ans = ans->next;
    return ans;
}
node *mergeSort(node *head)
{
    // BASE CASE
    if (head == NULL || head->next == NULL)
        return head;

    // FIND MID AND BREAK LIST INTO TWO HALVES
    node *mid = getmid(head);
    node *left = head;
    node *right = mid->next;
    mid->next = NULL;

    // RECURSIVE CALL TO SORT BOTH HALVES
    left = mergeSort(left);
    right = mergeSort(right);

    // MERGE BOTH RIGHT AND LEFT HALVES
    node *result = merge(left, right);

    // RETURN RESULT
    return result;
}
int main()
{
    node *head = new node(6);
    node *a = new node(20);
    head->next = a;
    node *b = new node(69);
    node *c = new node(98);
    node *d = new node(21);
    node *e = new node(63);
    node *f = new node(32);
    node *g = new node(100);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = NULL;
    mergeSort(head);
    print(head);
}
