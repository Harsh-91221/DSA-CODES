#include <iostream>
using namespace std;
int pivotpoint(int a[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (a[mid] >= a[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int a[5] = {5, 7, 1, 3, 4};
    int b = pivotpoint(a, 5);
    cout << b << endl;
}
