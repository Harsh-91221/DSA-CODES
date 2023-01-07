#include <iostream>
#include <vector>
using namespace std;
vector<int> waveprint(int a[][3], int i, int j, int row, int col)
{
    vector<int> ans;
    for (j = 0; j < col; j++)
    {
        if (j & 1)
        {
            for (i = row - 1; i >= 0; i--)
                ans.push_back(a[i][j]);
        }
        else
        {
            for (int i = 0; i < row; i++)
                ans.push_back(a[i][j]);
        }
    }
    return ans;
}
int main()
{
    int a[3][3];
    cout << "ENTER THE ELEMENTS" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    waveprint(a, 3, 3, 3, 3);
    cout << "ELEMENTS ARE" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}