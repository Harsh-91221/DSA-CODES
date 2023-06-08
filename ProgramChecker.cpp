#include <iostream>
using namespace std;
bool check(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[5] = {2, 90, 6, 9, 10};
    bool ans = check(arr);
    if (ans)
    {
        cout << "SORTED" << endl;
    }
    else
    {
        cout << "NOT SORTED" << endl;
    }
}