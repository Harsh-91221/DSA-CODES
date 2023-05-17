#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
node *build()
{
    int data;
    cout << "ENTER THE DATA" << endl;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    node *root = new node(data);
    cout << "ENTER THE LEFT NODE OF " << data << endl;
    root->left = build();
    cout << "ENTER THE RIGHT NODE OF " << data << endl;
    root->right = build();
    return root;
}
void levelOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
int main()
{
    node *root = NULL;
    root = build();
    levelOrder(root);
}