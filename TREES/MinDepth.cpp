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
int minDepth(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int right = minDepth(root->right);
    int left = minDepth(root->left);
    if (root->left == NULL)
    {
        return right + 1;
    }
    if (root->right == NULL)
    {
        return left + 1;
    }
    int ans = min(right, left) + 1;
    return ans;
}
int main()
{
    node *root = NULL;
    root = buildtree(root);
    cout << "MINIMUM DEPTH IS ";
    cout << minDepth(root) << endl;
}