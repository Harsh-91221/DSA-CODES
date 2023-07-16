#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums;
    int n = nums.size();
    for (int i = 1; i <= n; i++)
    {
        cin >> nums[i];
    }
    long long int ans = 0;
    for (int i = 1; i <= nums.size(); i++)
    {
        if (n % i == 0)
        {
            ans += nums[i] * nums[i];
        }
    }
    cout << ans;
}