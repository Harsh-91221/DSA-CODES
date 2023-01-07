#include <iostream>
using namespace std;
int main()
{
    char ch[6] = "abcde";
    char *c = &ch[0];  // if 1 then it prints bcde starts from 1 position of array
    cout << c << endl; // print all array
    char temp = 'z';
    char *t = &temp;
    cout << t << endl;
}