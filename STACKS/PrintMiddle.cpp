#include <iostream>
#include <stack>
using namespace std;
void printmiddle(stack<int> &s, int &totalsize)
{
    if (s.size() == totalsize / 2 + 1)
    {
        cout << "MIDDLE ELEMENT IS : " << s.top();
        return;
    }
    int temp = s.top();
    s.pop();
    printmiddle(s, totalsize);
    s.push(temp);
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int totalsize = s.size();
    printmiddle(s, totalsize);
}