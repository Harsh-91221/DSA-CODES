#include <iostream>
using namespace std;
void reverse(string &a, int i, int j)
{
    if (i > j)
        return;
    swap(a[i], a[j]);
    i++;
    j--;
    reverse(a, i, j);
}
int main()
{
    string a = "HARSH";
    reverse(a, 0, a.length() - 1);
    cout << a << endl;
}
