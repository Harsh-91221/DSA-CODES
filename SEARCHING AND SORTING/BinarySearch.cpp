#include <iostream>
using namespace std;
int BinarySearch(int a[], int key, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (a[mid] == key)
        {
            return mid;
        }
        if (a[mid] > key)
        {
            end = mid - 1;
        }
        if (a[mid] < key)
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int a[5] = {2, 5, 7, 8, 9};
    int b = BinarySearch(a, 6, 5);
    cout << b;
}
