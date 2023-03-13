#include <iostream>
#include <vector>
using namespace std;
int pivot(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (mid + 1 < arr.size() && arr[mid + 1] > arr[mid])
        {
            return arr[mid];
        }
        if (mid - 1 > 0 && arr[mid - 1] < arr[mid])
        {
            return arr[mid];
        }
        if (arr[s] > arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    vector<int> arr{2, 4, 7, 8, 6, 5, 4, 1};
    int ans = pivot(arr);
    cout << ans;
}
