#include <iostream>
using namespace std;
int main()
{
    int a[100], pos, size, item, i;
    cout << "ENTER THE SIZE OF ARRAY" << endl;
    cin >> size;
    cout << "ENTER THE POSITION YOU WANT TO INSERT THE ELEMENT" << endl;
    cin >> pos;
    cout << "ENTER THE ITEM TO INSERT" << endl;
    cin >> item;
    cout << "ENTER THE ARRAY" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    for (i = size; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = item;
    size++;
    cout << "RESULTANT ARRAY" << endl;
    for (i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
}