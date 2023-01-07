#include <iostream>
using namespace std;
int main()
{
    int temp[10] = {8, 9};
    cout << "1st " << temp << endl;  // ADDRESS
    cout << "2nd " << &temp << endl; // ADRESS
    cout << "3rd " << *temp << endl; // VALUE AT FIRST LOCATION OF ARRAY
    int *a = &temp[0];
    cout << "4th " << a << endl;  // ADDRESS
    cout << "5th " << *a << endl; // VALUE AT FIRST LOCATION
    cout << "6th " << &a << endl; // ADDRESS
}