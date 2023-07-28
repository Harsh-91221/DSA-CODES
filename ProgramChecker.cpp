#include<iostream>
using namespace std;
void print(Tree* root,int start,int end)
{
    if(start>end)
    {
        return;
    }
    print(root->left,start+1,end);
    cout<<root<<" ";
    print(root->right,start,end-1);
}