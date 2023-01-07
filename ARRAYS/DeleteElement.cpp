#include <iostream>
using namespace std;
int main()
{
    int a[100], size, pos, i;
    cout << "ENTER THE SIZE OF ARRAY" << endl;
    cin >> size;
    cout << "ENTER THE ARRAY" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "ENTER THE POSITION YOU WANT TO DELETE THE ELEMENT" << endl;
    cin >> pos;
    if (pos >= size + 1)
    {
        cout << "NOT POSSIBLE" << endl;
    }
    else
    {
        for (i = pos - 1; i < size - 1; i++)
        {
            a[i] = a[i + 1];
        }
    }
    cout << "RESULTANT ARRAY" << endl;
    for (int i = 0; i < size - 1; i++)
    {
        cout << a[i] << " ";
    }
}
