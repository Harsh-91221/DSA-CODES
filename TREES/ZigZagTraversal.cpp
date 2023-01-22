#include <iostream>
#include <stack>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *buildtree(Node *root)
{
    int data;
    cout << "ENTER THE DATA: " << endl;
    cin >> data;
    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "ENTER DATA FOR INSERTING IN LEFT SIDE OF " << data << endl;
    root->left = buildtree(root->left);
    cout << "ENTER DATA FOR INSERTING IN RIGHT SIDE OF " << data << endl;
    root->right = buildtree(root->right);
    return root;
}
void zigzagTraversal(Node *root)
{
    if (!root)
        return;
    stack<Node *> currentLevel, nextLevel;
    bool leftToRight = true;
    currentLevel.push(root);
    while (!currentLevel.empty())
    {
        Node *node = currentLevel.top();
        currentLevel.pop();
        if (node)
        {
            cout << node->data << " ";
            if (leftToRight)
            {
                nextLevel.push(node->left);
                nextLevel.push(node->right);
            }
            else
            {
                nextLevel.push(node->right);
                nextLevel.push(node->left);
            }
        }
        if (currentLevel.empty())
        {
            leftToRight = !leftToRight;
            swap(currentLevel, nextLevel);
        }
    }
}
int main()
{
    Node *root = NULL;
    root = buildtree(root);
    cout << "ZIGZAG IS ";
    zigzagTraversal(root);
}