#include <iostream>
using namespace std;
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void Sort(int a[], int n)
{
    int i;
    int mid = i;
    for (i = 0; i < n - 1; i++)

    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[mid])
                mid = j;
        }
        swap(a[mid], a[i]);
    }
}
int main()
{
    int a[5] = {5, 2, 6, 3, 8};
    Sort(a, 5);
    display(a, 5);
}