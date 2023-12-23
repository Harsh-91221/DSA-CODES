#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
long long largestPerimeter(vector<int> &nums)
{
    long long i = 0;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (i = n - 1; i >= 0; i--)
    {
        long long sum = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            sum += nums[j];
        }
        if (nums[i] < sum)
        {
            break;
        }
    }
    if (i < 2)
    {
        return -1;
    }
    long long ans = 0;
    for (int k = 0; k <= i; k++)
    {
        ans += nums[k];
    }
    return ans;
}
int main()
{
    vector<int> input = {1, 12, 1, 2, 5, 50, 3};
    long long result = largestPerimeter(input);
    cout << "Largest perimeter: " << result << endl;
    return 0;
}