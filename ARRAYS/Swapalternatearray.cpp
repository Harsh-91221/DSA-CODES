#include <iostream>
using namespace std;
void swapAlternate(int ar[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(ar[i], ar[i + 1]);
        }
    }
}
void printArray(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[6] = {4, 3, 6, 9, 2, 4};
    swapAlternate(a, 6);
    printArray(a, 6);
}