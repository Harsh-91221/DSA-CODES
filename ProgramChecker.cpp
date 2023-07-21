#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAX_SOLDIERS = 2e5 + 5;

vector<int> adj[MAX_SOLDIERS];
int indegree[MAX_SOLDIERS];

bool canArrange(int n, int m)
{
    for (int i = 1; i <= n; ++i)
    {
        adj[i].clear();
        indegree[i] = 0;
    }

    for (int i = 0; i < m; ++i)
    {
        int ai, bi, di;
        cin >> ai >> bi >> di;
        adj[bi].push_back(ai);
        indegree[ai]++;
    }

    queue<int> q;
    for (int i = 1; i <= n; ++i)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }

    int count = 0;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        count++;

        for (int next : adj[curr])
        {
            indegree[next]--;
            if (indegree[next] == 0)
            {
                q.push(next);
            }
        }
    }

    return count == n;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        if (canArrange(n, m))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
