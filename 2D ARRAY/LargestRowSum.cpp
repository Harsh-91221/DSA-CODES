#include <iostream>
using namespace std;
int sum(int a[][4], int i, int j)
{
    int max = INT_MIN;
    int RowIndex = -1;
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum = sum + a[i][j];
        }
        if (sum > max)
        {
            max = sum;
            RowIndex = i;
        }
    }
    cout << "MAXIMUM IN ROW IS " << max << endl;
    return RowIndex;
}
int main()
{
    int a[3][4];
    cout << "ENTER THE ELEMENTS" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "ELEMENTS ARE" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "MAXIMUM ROW IS AT INDEX " << sum(a, 3, 4) << endl;
}