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
        ans.push_back(a[i]);
    }
    for (int j = 0; j < n; j++)
    {
        ans.push_back(b[j]);
    }
    cout << "ARRAY AFTER UNION ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}