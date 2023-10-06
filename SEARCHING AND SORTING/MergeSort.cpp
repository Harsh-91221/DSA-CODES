#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &nums, int low, int mid, int high)
{
    vector<int> ans;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (nums[left] <= nums[right])
        {
            ans.push_back(nums[left]);
            left++;
        }
        else
        {
            ans.push_back(nums[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        ans.push_back(nums[left]);
        left++;
    }
    while (right <= high)
    {
        ans.push_back(nums[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        nums[i] = ans[i - low];
    }
}
void mergesort(vector<int> &nums, int low, int high)
{
    if (low == high)
    {
        return;
    }
    int mid = (low + high) / 2;
    mergesort(nums, low, mid);
    mergesort(nums, mid + 1, high);
    merge(nums, low, mid, high);
}
int main()
{
    vector<int> a = {87, 43, 6, 2, 4, 0, 8, 1, 54, 23, 88, 69, 65};
    int n = a.size();
    mergesort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
