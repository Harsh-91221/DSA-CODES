#include <iostream>
#include <vector>
using namespace std;
int pivot(vector<int> &nums)
{
    int s = 0;
    int e = nums.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid + 1 < nums.size() && nums[mid] > nums[mid + 1])
        {
            return mid;
        }
        if (mid - 1 >= 0 && nums[mid] < nums[mid - 1])
        {
            return mid - 1;
        }
        if (nums[s] >= nums[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    vector<int> nums{1, 7, 3, 6, 5, 6};
    int ans = pivot(nums);
    cout << ans;
}