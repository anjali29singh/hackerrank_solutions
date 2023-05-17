#include <bits/stdc++.h>
using namespace std;

int dfs(int node, vector<int> adj[], int vis[], int vert)
{
    vis[node] = 1;
    vert = vert + 1;
    // cout << vert << endl;
    for (auto adjnode : adj[node])
    {

        if (!vis[adjnode])
        {
            dfs(adjnode, adj, vis, vert);
        }
    }
    cout << vert << endl;
    return vert;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int C;
    cin >> C;
    while (C--)
    {

        int N, T, M;
        cin >> N >> T >> M;
        vector<int> adj[N + 1];
        int vis[N + 1];
        for (int i = 0; i < M; i++)
        {

            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for (int i = 1; i <= N; i++)
        {
            vis[i] = 0;
        }
        int ans = 0;
        for (int i = 1; i <= N; i++)
        {
            if (!vis[i])
            {
                int x = dfs(i, adj, vis, 0);
                ans = max(ans, x);
            }
            // cout << ans << endl;
        }
    }
    return 0;
}