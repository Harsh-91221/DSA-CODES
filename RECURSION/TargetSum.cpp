#include <iostream>
#include <vector>
using namespace std;
int create(vector<int> &a, int target)
{
    if (target == 0)
    {
        return 0;
    }
    if (target < 0)
    {
        return INT_MAX;
    }
    int mini = INT_MAX;
    for (int i = 0; i < a.size(); i++)
    {
        int ans = create(a, target - a[i]);
        if (ans != INT_MAX)
            mini = min(mini, ans + 1);
    }
    return mini;
}
int main()
{
    vector<int> a{1, 2, 3, 5, 7};
    int target = 9;
    int yes = create(a, target);
    cout << yes << endl;
}