#include <iostream>
using namespace std;
bool pal(string &a, int i, int j)
{
    if(i>j)
    return true;
    if (a[i] != a[j])
        return false;
    else
    {
        return pal(a, i + 1, j - 1);
    }
}
int main()
{
    string a = "wowowe";
    bool ispal = pal(a, 0, a.length() - 1);
    if (ispal)
    {
        cout << "PALINDROME" << endl;
    }
    else
    {
        cout << "NOT PALINDROME" << endl;
    }
}