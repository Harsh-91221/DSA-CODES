#include <iostream>
#include <vector>
#include <unordered_map>
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
    // g.Addedge(0, 1, 0);
    // g.Addedge(1, 2, 0);
    // g.Addedge(0, 2, 0);

    // FOR DIRECTED GRAPH
    g.Addedge(0, 1, 1);
    g.Addedge(1, 2, 1);
    g.Addedge(0, 2, 1);
    cout << endl;
    g.printList();
}