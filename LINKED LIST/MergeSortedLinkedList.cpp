#include <iostream>
#define SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
using namespace std;
class Node
{
public:
    int data;
    Node *next;
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
Node *createList(int *arr, int n)
{
    Node *head, *p;
    p = head = new Node;
    head->data = arr[0];
    head->next = NULL;
    for (int i = 1; i < n; ++i)
    {
        p->next = new Node;
        p = p->next;
        p->data = arr[i];
        p->next = NULL;
    }
    return head;
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
    int arr1[4] = {10, 15, 17, 20};
    int arr2[4] = {5, 9, 13, 19};
    Node *first, *second, *result = NULL;
    first = createList(arr1, SIZE(arr1));
    second = createList(arr2, SIZE(arr1));
    cout << "First sorted list: " << endl;
    print(first);
    cout << "Second sorted list: " << endl;
    print(second);
    result = sortTwoLists(first, second);
    cout << "Final sorted list: " << endl;
    print(result);
}