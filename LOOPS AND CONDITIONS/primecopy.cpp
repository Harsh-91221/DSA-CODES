#include<iostream>
using namespace std;
int main()
{
    int n;
    int count=2;
    cout<<"Enter the number"<< endl;
    cin>> n;
    for(int i=2;i<n/2;i++)
    {
              
        if(n%i==0)
        {
            cout<<"NOT PRIME" << endl;
            break;
        }
        count++;
    }
    cout<<count<<endl;
    if(count==n/2)
    {
        cout << "prime";
    }
    
}

// made by utkarsh
// using namespace std;
 
// int main() {
// 	         int n;
// 	         bool count=true;
// 	         cin >> n;
// 	         for(int i=2;i<n/2;i++)
// 	         {
// 	         	if(n%i==0)
// 	         	{count=false;
// 	              break;}
// 	         }	
// 	         	if(count)
// 	         	{
// 	         		cout << "number is prime" << endl;
// 	         	}
 
// 	         	else {
// 	         		    cout << "number is not prime";
// 	         	}
 
 
 
// 	return 0;
// }
// Close
// Sphere Research Lab
    