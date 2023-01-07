#include <iostream>
using namespace std;
bool search(int ar[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (ar[i] == key)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int ar[100], size, key;
    cout << "ENTER THE ELEMENT TO SEARCH" << endl;
    cin >> key;
    cout << "ENTER THE SIZE OF ARRAY" << endl;
    cin >> size;
    cout << "ENTER THE ARRAY" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }
    bool found = search(ar, 10, key);
    if (found)
    {
        cout << "PRESENT" << endl;
    }
    else
    {
        cout << "ABSENT" << endl;
    }
}