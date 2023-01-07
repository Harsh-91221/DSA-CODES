#include <iostream>
using namespace std;
bool Search(int a[], int n, int key)
{
    if (n == 0)
        return false;
    if (a[0] == key)
        return true;
    else
    {
        int ans = Search(a + 1, n - 1, key);
        return ans;
    }
}
int main()
{
    int a[5] = {5, 3, 7, 4, 1};
    int key;
    cin >> key;
    int k = Search(a, 5, key);
    if (k)
    {
        cout << "PRESENT" << endl;
    }
    else
    {
        cout << "NOT PRESENT" << endl;
    }
}