#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <list>
using namespace std;
class Graph
{
public:
    unordered_map<int, list<int>> AdjList;
    void Addedge(int u, int v, bool direction)
    {
        // DIRECTION -> 0 - UNDIRECTED GRAPH
        // DIRECTION -> 1 - DIRECTED GRAPH
        // CREATE AN EDGE FROM u TO v
        AdjList[u].push_back(v);
        // IF THE GRAPH IS UNDIRECTED
        if (direction == 0)
        {
            // CREATE AN EDGE FROM v TO u
            AdjList[v].push_back(u);
        }
    }
    void dfs(int src, unordered_map<int, bool> &visited)
    {
        cout << src << ", ";
        visited[src] = true;
        for (auto nbr : AdjList[src])
        {
            if (!visited[nbr])
            {
                dfs(nbr, visited);
            }
        }
    }
    void printList()
    {
        for (auto node : AdjList)
        {
            cout << node.first << "->";
            for (auto nbr : node.second)
            {
                cout << nbr << ", ";
            }
            cout << endl;
        }
    }
};
int main()
{
    Graph g;
    // FOR UNDIRECTED GRAPH
    g.Addedge(0, 1, 0);
    g.Addedge(1, 2, 0);
    g.Addedge(1, 3, 0);
    g.Addedge(3, 5, 0);
    g.Addedge(3, 7, 0);
    g.Addedge(7, 6, 0);
    g.Addedge(7, 4, 0);
    cout << endl;
    g.printList();
    unordered_map<int, bool> visited1;
    for (int i = 0; i < 8; i++)
    {
        if (!visited1[i])
        {
            g.dfs(i, visited1);
        }
    }
}