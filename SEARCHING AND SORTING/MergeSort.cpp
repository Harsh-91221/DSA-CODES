#include <iostream>
using namespace std;
void merge(int *a, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];
    // COPY VALUES
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = a[mainArrayIndex++];
    }
    int mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = a[mainArrayIndex++];
    }
    // MERGE TWO SORTED ARRAY
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    while (index1 < len1 && index2 < len2)
        if (first[index1] < second[index2])
        {
            a[mainArrayIndex++] = first[index1++];
        }
        else
        {
            a[mainArrayIndex++] = second[index2++];
        }
    while (index1 < len1)
    {
        a[mainArrayIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        a[mainArrayIndex++] = second[index2++];
    }
    delete[] first;
    delete[] second;
}
void mergesort(int *a, int s, int e)
{
    if (s >= e)
        return;
    int mid = s + (e - s) / 2;
    mergesort(a, s, mid);     // FOR SORTING LEFT PART
    mergesort(a, mid + 1, e); // FOR SORTING RIGHT PART
    merge(a, s, e);           // MERGING BOTH SORTED ARRAY
}
int main()
{
    int a[13] = {87, 43, 6, 2, 4, 0, 8, 1, 54, 23, 88, 69, 65};
    mergesort(a, 0, 13);
    merge(a, 0, 13);
    for (int i = 0; i < 13; i++)
    {
        cout << a[i] << " ";
    }
}