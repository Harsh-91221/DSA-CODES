#include <iostream>
using namespace std;
int main()
{
    string str1 = "";
    string str2 = "";
    cin >> str1;
    cin >> str2;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] < 92)
        {
            str1[i] = str1[i] + 32;
        }
        if (str2[i] < 92)
        {
            str2[i] = str2[i] + 32;
        }
    }
    if (str1 < str2)
    {
        cout << "-1";
    }
    if (str1 > str2)
    {
        cout << "1";
    }
    if (str1 == str2)
    {
        cout << "0";
    }
}