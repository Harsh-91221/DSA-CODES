#include <iostream>
using namespace std;
char MaxOccur(string s)
{
    int a[26] = {0};
    int number = 0;
    char ch;
    for (int i = 0; i < s.length(); i++)
    {
        ch = s[i];
    }
    if (ch >= 'a' && ch <= 'z')
    {
        number = ch - 'a';
    }
    else
    {
        number = ch - 'A';
    }
    a[number]++;
    int max = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < a[i])
        {
            ans = i;
            max = a[i];
        }
    }
    char final = 'a' + ans;
    return final;
}
int main()
{
    string s;
    cin >> s;
    MaxOccur(s);
}
