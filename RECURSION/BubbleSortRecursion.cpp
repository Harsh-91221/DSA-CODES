#include <iostream>
using namespace std;
void Sort(int a[], int n)
{
    if (n == 0 || n == 1)
        return;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[i + 1])
            swap(a[i], a[i + 1]);
    }
    Sort(a, n - 1);
}
int main()
{
    int a[5] = {5, 9, 1, 3, 6};
    Sort(a, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
}
