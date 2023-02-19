#include <iostream>
#include <vector>
using namespace std;
int unique(vector<int> a)
{
    int ans = 0;
    for (int i = 0; i < a.size(); i++)
    {
        ans = ans ^ a[i];
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    cout << "ENTER THE ELEMENTS" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k = unique(a);
    cout << "UNIQUE ELEMENT IS " << k << endl;
}