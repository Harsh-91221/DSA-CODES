#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "ENTER NUMBER OF NODES" << endl;
    cin >> n;
    vector<vector<int>> adj(n, vector<int>(n, 0));
    int e;
    cout << "ENTER NUMBER OF EDGES" << endl;
    cin >> e;
    // ENTERING THE DATA
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
    }
    // PRINTING THE GRAPH
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}