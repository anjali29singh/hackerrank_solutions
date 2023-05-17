#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> iPair;
void dijkstra(vector<pair<int, int>> adj[], int dist[], int src)
{
    priority_queue<iPair, vector<iPair>, greater<iPair>> pq;
    pq.push(make_pair(dist[src], src));
    while (!pq.empty())
    { // first vertex in pair is min dist
        // extract it from pq
        int u = pq.top().second;
        pq.pop();
        for (auto i : adj[u])
        {
            int v = i.first;
            int wt = i.second;
            if (dist[v] > dist[u] + wt)
            {
                dist[v] = dist[u] + wt;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
}

int main()
{
    int N, M, K;
    cin >> N >> M >> K;
    vector<pair<int, int>> adj[M + 1];

    int shop[N + 1][K];

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= K; j++)
        {
            shop[i][j] = 0;
        }
    }
    for (int i = 1; i <= N; i++)
    {
        int x, t; // ith shop containing x types of fishes
        cin >> x;
        for (int j = 0; j < x; j++)
        {
            cin >> t;
            shop[i][t] = 1; // type t fish is present is ith shop
        }
    }

    for (int i = 0; i < M; i++)
    {

        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back(make_pair(v, wt));
        adj[v].push_back(make_pair(u, wt));
    }
    int dist[N + 1];

    for (int i = 0; i <= N; i++)
        dist[i] = 1e9 + 10;
    dist[src] = 0;

    dijkstra(adj, dist, src);
    for (int i = 0; i <= N; i++)
        cout << dist[i] << " ";
    cout << endl;
    return 0;
}
