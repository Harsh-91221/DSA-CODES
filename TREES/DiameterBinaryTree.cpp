#include <iostream>
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
int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int right = height(root->right);
    int left = height(root->left);
    int ans = max(left, right) + 1;
    return ans;
}
int diameter(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = height(root->left) + height(root->right) + 1;
    int ans = max(op1, max(op2, op3));
    return ans;
}
int main()
{
    node *root = NULL;
    root = buildtree(root);
    cout << "DIAMETER IS ";
    cout << diameter(root) << endl;
}