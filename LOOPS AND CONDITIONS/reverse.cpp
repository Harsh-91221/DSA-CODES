#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter the number"<< endl;
    cin>> n;
    int i,r,s=0;
    while(n!=0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    cout<< s<<endl;
}