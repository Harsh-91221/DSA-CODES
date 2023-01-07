#include <iostream>
#include <vector>
using namespace std;
void Merge(int a1[], int m, int a2[], int n, int a3[])
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (a1[i] < a2[j])
        {
            a3[k] = a1[i];
            k++;
            i++;
        }
        else
        {
            a3[k] = a3[j];
            k++;
            j++;
        }
    }
    while (i < m)
    {
        a3[k] = a1[i]; // for printing elements that are left in first array
        k++;
        i++;
    }
    while (j < n)
    {
        a3[k] = a1[j]; // for printing elements that are left in second array
        k++;
        j++;
    }
}
void print(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int a1[5] = {4, 6, 7, 8, 9};
    int a2[2] = {1, 2};
    int a3[7] = {0};
    Merge(a1, 5, a2, 2, a3);
    print(a3, 7);
}   