#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
int level[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : adj[u])
        {
            // If have to do any work with child
            if (visited[v])
                continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int x, y, k;
    cin >> x >> y >> k;

    bfs(x);
    vector<pair<int, int>> vx;

    for (int i = 1; i <= n; i++)
    {

        if (level[i] > 0)
        {
            vx.push_back({i, level[i]});
        }
    }

    memset(visited, false, sizeof(visited));
    memset(level, 0, sizeof(level));

    bfs(y);
    vector<pair<int, int>> vy;

    for (int i = 1; i <= n; i++)
    {

        if (level[i] > 0)
        {
            vy.push_back({i, level[i]});
        }
    }

    bool flag = false;

    for (pair<int, int> p1 : vx)
    {
        for (pair<int, int> p2 : vy)
        {
            if (p1.first == p2.first)
            {
                if (p1.second <= k && p2.second <= k)
                    flag = true;
            }
        }
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}