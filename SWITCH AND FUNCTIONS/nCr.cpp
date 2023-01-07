#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int nCr(int n,int r)
{
    int num=factorial(n);
    int deno=factorial(r)*factorial(n-r);
    int ans=num/deno;
    return ans;
}
int main()
{
    int n,r;
    cout<<"Enter the number of items "<<endl;
    cin>>n;
    cout<< "Enter the number of items chosen "<<endl;
    cin>>r;
    int j=nCr(n,r);
    cout<<j<<endl;

}