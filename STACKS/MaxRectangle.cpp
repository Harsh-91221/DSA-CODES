#include <stack>
#include <climits>
vector<int> nextsmallerelements(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (s.top() != -1 && arr[s.top()] >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
vector<int> prevsmallerelements(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        while (s.top() != -1 && arr[s.top()] >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
int largestRectangleArea(vector<int> &heights, int n)
{
    // int n=heights.size();
    vector<int> next(n);
    next = nextsmallerelements(heights, n);
    vector<int> prev(n);
    prev = prevsmallerelements(heights, n);
    int area = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int l = heights[i];
        if (next[i] == -1)
        {
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;
        int newarea = l * b;
        area = max(area, newarea);
    }
    return area;
}
int maximalAreaOfSubMatrixOfAll1(vector<vector<int>> &mat, int n, int m)
{
    // COMPUTE AREA FOR FIRST ROW
    int area = largestRectangleArea(mat[0], m);
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // ROW UPDATE BY ADDING PREVIOUS ROW
            if (mat[i][j] != 0)
            {
                mat[i][j] = mat[i][j] + mat[i - 1][j];
            }
            else
            {
                mat[i][j] = 0;
            }
        }
        // ENTIRE ROW IS UPDATED NOW
        area = max(area, largestRectangleArea(mat[i], m));
    }
    return area;
}