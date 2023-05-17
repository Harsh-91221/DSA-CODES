#include <iostream>
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
int main()
{
    node *root=NULL;
    root = build();
}