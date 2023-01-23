#include <iostream>
#include <vector>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
TreeNode *buildtree(TreeNode *root)
{
    int data;
    cout << "ENTER THE DATA: " << endl;
    cin >> data;
    root = new TreeNode(data);
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
void solve(TreeNode *root, vector<int> &ans, int level)
{
    if (root == NULL)
    {
        return;
    }
    if (level == ans.size())
    {
        ans.push_back(root->data);
    }
    solve(root->left, ans, level + 1);
    solve(root->right, ans, level + 1);
}

vector<int> leftView(TreeNode *root)
{
    vector<int> ans;
    solve(root, ans, 0);
    return ans;
}
int main()
{
    TreeNode *root = NULL;
    root = buildtree(root);
    vector<int> left = leftView(root);
    cout << "LEFT VIEW IS : ";
    for (int i = 0; i < left.size(); i++)
        cout << left[i] << " ";
    return 0;
}
