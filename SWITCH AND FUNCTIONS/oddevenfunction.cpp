#include<iostream>
using namespace std;
bool iseven(int n)
{
    if(n&1)
    {
        return 0;
    }
        else
        {
        return 1;
    }

}
int main()
{
    int n;
    cout<< "Enter the number"<< endl;
    cin>>n;
    if(iseven(n))
    {
    cout<< "EVEN" <<endl;
    }
    else
    {
    cout<< "ODD"<< endl;
    }

}