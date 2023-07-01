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
    vector<int> c(n);
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
    cout << "ENTER THIRD ARRAY " << endl;
    for (int k = 0; k < n; k++)
    {
        cin >> c[k];
    }
    cout << "ENTER THE SUM OF PAIR " << endl;
    cin >> sum;
    for (int i = 0; i < n; i++)
    {
        int element1 = a[i];
        for (int j = i + 1; j < n; j++)
        {
            int element2 = a[j];
            for (int k = j + 1; k < n; k++)
            {
                int element3 = a[k];
                if (element1 + element2 + element3 == sum)
                {
                    cout << "PAIR FOUND "<< "(" << element1 << "," << element2 << "," << element3 << ")" << endl;
                }
            }
        }
    }
}