#include <iostream>
#include <vector>
using namespace std;
void subsequence(string str, string output, int i)
{
    if (i >= str.length())
    {
        cout << output << endl;
        return;
    }
    subsequence(str, output, i + 1);
    output.push_back(str[i]);
    subsequence(str, output, i + 1);
}
int main()
{
    int i = 0;
    string str = "abc";
    string output = "";
    subsequence(str, output, i);
}