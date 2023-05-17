#include <bits/stdc++.h>
using namespace std;

int dfs(int node, vector<int> adj[], int vis[], int people)
{
    people = people + 1;
    vis[node] = 1;

    for (auto adjnode : adj[node])
    {
        if (!vis[adjnode])
        {
            people = dfs(adjnode, adj, vis, people);
        }
    }

    return people;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, P;
    cin >> N >> P;

    vector<int> adj[N];
    for (int i = 0; i < P; i++)
    {

        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int vis[N];
    for (int i = 0; i < N; i++)
    {
        vis[i] = 0;
    }
    vector<int> peoples;
    long long current = 0, ans = 0;

    for (int i = 0; i < N; i++)
    {
        if (!vis[i])
        {
            int x = dfs(i, adj, vis, 0);

            peoples.push_back(x);
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (!vis[i])
            peoples.push_back(1);
    }

    for (int i = 0; i < peoples.size(); i++)

    {
        current = current + peoples[i];
        ans = ans + (peoples[i] * (N - current));
    }
    cout << ans << '\n';
    return 0;
}