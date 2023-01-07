#include <iostream>
using namespace std;
/*void print(int *p)
{
    cout << p << endl; //*p prints value 5 and p prints address of 5
}*/
int getSum(int a[], int n) // even if array is written like a[] it is still stored in form of pointer i.e *a
{
    int sum = 0;
    cout << sizeof(a) << endl;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
void update(int *p)
{
    p = p + 1;         // value can be updated inside function by calling in main function but address cannot be updated or changed
    cout << p << endl; // value can be checked inside the function itself rather than in main function
}
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    /*int temp = 5;
    int *p = &temp;
    cout << "BEFORE UPDATE VALUE " << p << endl;
    update(p);
    cout << "AFTER UPDATE VALUE " << p << endl;*/
    cout << getSum(a, 5);
    //   print(p);
}