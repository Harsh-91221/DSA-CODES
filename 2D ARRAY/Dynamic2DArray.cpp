#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cin >> row;
    cin >> col;
    // creation of 2D array
    int **a = new int *[row];
    for (int i = 0; i < row; i++)
    {
        a[i] = new int[col];
    }
    // input 2D array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    // printing 2D array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory
    for (int i = 0; i < row; i++)
    {
        delete[] a[i];
    }
    delete[] a;
}
