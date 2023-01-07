#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<int> nums, int k)
{
    vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i + k) % nums.size()] = nums[i];
    }
    nums = temp;
}
void print(vector<int> nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}
int main()
{
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(9);
    rotate(nums, 2);
    print(nums);
}