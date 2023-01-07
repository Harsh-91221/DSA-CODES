#include <iostream>
using namespace std;
bool Sort(int a[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (a[0] > a[1])
        return false;
    else
    {
        bool ans = Sort(a + 1, n - 1);
        return ans;
    }
}
int main()
{
    int a[5] = {4, 6, 7, 8, 10};
    int n = 5;
    bool k = Sort(a, n);
    if (k)
    {
        cout << "ARRAY IS SORTED" << endl;
    }
    else
    {
        cout << "ARRAY IS NOT SORTED" << endl;
    }
}