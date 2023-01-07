#include <iostream>
using namespace std;
void sum(int a[][3], int i, int j)
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++) // for column sum just reverse the loop and start the column loop first and then row loop
        {
            sum = sum + a[i][j];
        }
        cout << sum << endl;
    }
}
int main()
{
    int target;
    int a[3][3];
    cout << "ENTER THE ELEMENTS" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "ELEMENTS ARE" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "SUM OF EACH ROW IS" << endl;
    sum(a, 3, 3);
}
