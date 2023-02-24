#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> transpose(5, vector<int>(5, -8));
    for (int i = 0; i < transpose.size(); i++)
    {
        for (int j = 0; j < transpose[0].size(); j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}