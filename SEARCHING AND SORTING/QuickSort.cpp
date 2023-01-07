#include <iostream>
using namespace std;
int partition(int a[], int s, int e)
{
    int pivot = a[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (a[i] <= pivot)
        {
            cnt++;
        }
    }
    // place pivot at right index
    int pivotindex = s + cnt;
    swap(a[pivotindex], a[s]);
    int i = s, j = e;
    // left part and right part
    while (i < pivotindex && j > pivotindex)
    {
        while (a[i] < pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < pivotindex && j > pivotindex)
        {
            swap(a[i++], a[j--]);
        }
    }
    return pivotindex;
}
void sort(int a[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = partition(a, s, e);
    // left part
    sort(a, s, p - 1);
    // right part
    sort(a, p + 1, e);
}
int main()
{
    int a[15] = {-3, 0, -5, 7, 9, 6, 8, 3, 11, 34, 65, 69, 45, 90, 78};
    sort(a, 0, 15);
    for (int i = 0; i < 15; i++)
    {
        cout << a[i] << " ";
    }
}