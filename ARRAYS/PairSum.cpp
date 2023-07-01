#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, sum;
    cout << "ENTER THE NUMBER OF ELEMENTS " << endl;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    cout << "ENTER FIRST ARRAY " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "ENTER SECOND ARRAY " << endl;
    for (int j = 0; j < n; j++)
    {
        cin >> b[j];
    }
    cout << "ENTER THE SUM OF PAIR " << endl;
    cin >> sum;
    for (int i = 0; i < n; i++)
    {
        int element = a[i];
        for (int j = i + 1; j < n; j++)
        {
            if (element + a[j] == sum)
            {
                cout << "PAIR FOUND "
                     << "(" << element << "," << a[j] << ")" << endl;
            }
        }
    }
}