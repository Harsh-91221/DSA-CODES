#include <iostream>
#include <vector>
using namespace std;
void permutation(string &str, int i)
{
    if (i >= str.size())
    {
        cout << str << " ";
        return;
    }
    for (int j = i; j < str.size(); j++)
    {
        swap(str[i], str[j]);
        permutation(str, i + 1);
        swap(str[i], str[j]);
    }
}
int main()
{
    string str = "abc";
    permutation(str, 0);
    // for (int i = 0; i < str.size(); i++)        //FOR PRINTING a b c too
    // {
    //     cout << str[i] << " ";
    // }
}