#include <iostream>
using namespace std;
bool Search(int a[], int s, int e, int n)
{
    if (s > e)
        return false;
    int mid = s + (e - s) / 2;
    if (a[mid] == n)
        return true;
    if (a[mid] < n)
    {
        return Search(a, mid + 1, e, n);
    }
    else
    {
        return Search(a, s, mid - 1, n);
    }
}
int main()
{
    int a[5] = {2, 4, 6, 7, 8};
    int n;
    cin >> n;
    int ans = Search(a, 0, 4, n);
    if (ans)
    {
        cout << "PRESENT" << endl;
    }
    else
    {
        cout << "NOT PRESENT" << endl;
    }
}