#include <iostream>
using namespace std;
void update(int **temp)
{
    temp = temp + 1;      // value can be updated inside function by calling in main function but address cannot be updated or changed
   // cout << temp << endl; // value can be checked inside the function itself rather than in main function
}
int main()
{
    int a = 5;
    int *p = &a;
    cout << p << endl;
    int **temp = &p; // Double Pointer created
    cout << temp << endl;
    cout << *temp << endl;
    update(temp);
    cout<<temp<<endl;
}