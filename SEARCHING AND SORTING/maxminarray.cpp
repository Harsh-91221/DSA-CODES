#include <iostream>
using namespace std;
int getMax(int num[], int n)
{
    int Max = INT_MIN; // CAN BE USED WITH PREDEFINED FUNCTION max AND min
    for (int i = 0; i < n; i++)
    {
        Max = max(Max, num[i]);
        /*if (num[i] > Max)*/
        //{
        //  Max = num[i];
        //}
    }
    return Max;
}
int getMin(int num[], int n)
{
    int Min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        Min = min(Min, num[i]);
        /* if (num[i] < Min)*/
        //{
        //  Min = num[i];
        //}
    }
    return Min;
}
int main()
{
    int num[100], size;
    cout << "ENTER THE SIZE" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "MAXIMUM NUMBER IN ARRAY IS " << getMax(num, size) << endl;
    cout << "MINIMUM NUMBER IN ARRAY IS " << getMin(num, size) << endl;
}