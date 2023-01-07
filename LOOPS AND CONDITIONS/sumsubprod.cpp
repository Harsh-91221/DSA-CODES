#include<iostream>
using namespace std;
int main()
{
    int sum,prod=1,i,n;
    cout<< "Enter the number"<< endl;
    cin>> n;
    while(n!=0)
    for(i=1;i<=n;i++)
    {
        int k=n%10;
        sum=sum+k;
        prod=prod*k;
        n=n/10;

    }
    cout<< prod-sum <<endl;
}