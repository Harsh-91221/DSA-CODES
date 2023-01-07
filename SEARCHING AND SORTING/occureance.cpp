#include <iostream>
using namespace std;
int firstoccur(int ar[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (ar[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (ar[mid] < key)
        {
            start = mid + 1;
        }
        else if (ar[mid] > key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int secondoccur(int ar[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (ar[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (ar[mid] < key)
        {
            start = mid + 1;
        }
        else if (ar[mid] > key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int arr[8] = {5, 7, 9, 9, 9, 9, 10, 12};
    int k = (secondoccur(arr, 8, 9) - firstoccur(arr, 8, 9)) + 1; //FOR TOTAL NUMBER OF OCCURENCE OF AN ELEMENT IN AN ARRAY
    cout << "FIRST OCCURENCE " << firstoccur(arr, 8, 9) << endl;
    cout << "SECOND OCCURENCE " << secondoccur(arr, 8, 9) << endl;
    cout << k << endl;
}