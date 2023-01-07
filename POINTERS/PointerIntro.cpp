#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    int *p = &num;
    num++;
    cout << *p;
    cout << num;
    int a[] = {1, 2, 3, 4};
    cout << *(a) << " " << *(a + 1);
}