#include <iostream>
using namespace std;
int solve(int arr[], int n)
{
    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == NULL)
        {
            continue;
        }
        else if (arr[i] >= first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] >= second)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] >= third)
        {
            third = arr[i];
        }
    }
    return third;
}
int main()
{
    int arr[6] = {2, 3, 7, NULL, 1, 9};
    int n = 6;
    int ans = solve(arr, n);
    cout << ans;
}