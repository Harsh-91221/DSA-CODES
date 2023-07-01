#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS " << endl;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    cout << "ENTER FIRST ARRAY " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "ENTER SECOND ARRAY " << endl;
    for (int j = 0; j < n; j++)
    {
        cin >> b[j];
    }
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int element = a[i];
        for (int j = 0; j < n; j++)
        {
            if (element == b[j])
            {
                b[j] = INT_MIN;
                ans.push_back(element);
            }
        }
    }
    cout << "ARRAY AFTER INTERSECTION ";
    for (auto value : ans)
    {
        cout << value << " ";
    }
}