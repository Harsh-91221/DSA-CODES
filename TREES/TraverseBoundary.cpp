#include <iostream>
#include <vector>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildtree(node *root)
{
    int data;
    cout << "ENTER THE DATA: " << endl;
    cin >> data;
    root = new node(data);
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
void traverseRight(node *root)
{
    if ((root == NULL) || (root->left == NULL && root->right == NULL))
    {
        return;
    }
    if (root->right)
    {
        traverseRight(root->right);
    }
    else
    {
        traverseRight(root->left);
    }
    cout << root->data << " ";
}
void traverseLeaf(node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->data << " ";
        return;
    }
    traverseLeaf(root->left);
    traverseLeaf(root->right);
}
void traverseLeft(node *root)
{
    if ((root == NULL) || (root->left == NULL && root->right == NULL))
    {
        return;
    }
    cout << root->data << " ";
    if (root->left)
    {
        traverseLeft(root->left);
    }
    else
    {
        traverseLeft(root->right);
    }
}
void traverseBoundary(node *root)
{
    if (root)
        cout << root->data << " ";
    traverseLeft(root->left);
    traverseLeaf(root->left);
    traverseLeaf(root->right);
    traverseRight(root->right);
}
int main()
{
    node *root = NULL;
    root = buildtree(root);
    cout << "BOUNDARY IS ";
    traverseBoundary(root);
}