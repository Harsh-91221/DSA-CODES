#include<iostream>
using namespace std;
int main()
{
    int i,n,a=0,b=1;
    cout<< "Enter the limit "<<endl;
    cin>> n;
    cout<< a << " ";
    cout<< b << " "; 
    for(i=1;i<=n;i++)
    {
        int next=a+b;
        cout<< next << " ";
        a=b;
        b=next;
    }
}