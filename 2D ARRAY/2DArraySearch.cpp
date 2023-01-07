#include <iostream>
using namespace std;
bool isPresent(int a[][4], int target, int i, int j)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (a[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int target;
    cout << "ENTER THE ELEMENT TO FIND" << endl;
    cin >> target;
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
    if (isPresent(a, target, 3, 4))
    {
        cout << "PRESENT" << endl;
    }
    else
    {
        cout << "NOT PRESENT" << endl;
    }
}
