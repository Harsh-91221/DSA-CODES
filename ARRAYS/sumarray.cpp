#include <iostream>
using namespace std;
int sumArray(int num[], int n)
{
    int s;
    for (int i = 0; i < n; i++)
    {
        s = s + num[i];
    }
    return s;
}
int main()
{
    int num[100], size;
    cout << "ENTER THE SIZE OF ARRAY" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "SUM IS " << sumArray(num, size) << endl;
}