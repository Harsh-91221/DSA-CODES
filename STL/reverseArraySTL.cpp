#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> v)
{
    int s = 0;           //for reverse after a particular range take m as a variable
    int e = v.size() - 1;             /*    int s=m+1;
                                       int e=arr.size()-1;
                                       while(s<=e)
                                       {
                                        swap(arr[s],arr[e]);
                                         s++;
                                          e--;     */
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(9);
    v.push_back(3);
    v.push_back(0);
    v.push_back(5);
    v.push_back(7);
    vector<int> ans = reverse(v);
    print(ans);
}
