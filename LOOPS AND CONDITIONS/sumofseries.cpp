#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n; //limit 2 to n
    int i;
    int sum=0;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
        sum=sum+i;
       } 
    }
    cout<<"Sum of basic series is " << sum <<endl;
}