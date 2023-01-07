#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<< arr[i]<< " ";

    }
    cout<<endl;
}
int main()
{
    int arr[10]={4,5,7,3,4,6,4,6,9,0};
     
     reverse(arr,10);
     printarray(arr,10);

}