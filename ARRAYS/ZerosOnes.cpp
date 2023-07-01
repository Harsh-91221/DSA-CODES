#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS" << endl;
    cin >> n;
    int start = 0;
    int end = n - 1;
    int i = 0;
    vector<int> a(n);
    cout << "ENTER THE ELEMENTS OF THE ARRAY" << endl;
    for (int j = 0; j < n; j++)
    {
        cin >> a[j];
    }
    while (i < end)
    {
        if (a[i] == 0)
        {
            swap(a[start], a[i]);
            {
                i++;
                start++;
            }
        }
        else
        {
            swap(a[end], a[i]);
            end--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
