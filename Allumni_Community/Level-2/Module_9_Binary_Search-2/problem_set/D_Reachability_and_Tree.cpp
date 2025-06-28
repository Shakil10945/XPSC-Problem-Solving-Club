#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> adj(n + 1);
    vector<pair<int, int>> edges;

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        edges.emplace_back(u, v);
    }

    
    vector<pair<int, int>> directed_edges;
    vector<bool> visited(n + 1, false);
    queue<int> q;
    q.push(1);
    visited[1] = true;
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (!visited[v]) {
                directed_edges.emplace_back(v, u); // Direct edge v -> u
                visited[v] = true;
                q.push(v);
            }
        }
    }
    
    // Count good pairs
    vector<vector<int>> dag(n + 1);
    for (auto [u, v] : directed_edges) {
        dag[u].push_back(v);
    }
    
    int good_pairs = 0;
    for (int u = 1; u <= n; u++) {
        vector<bool> reach(n + 1, false);
        queue<int> q2;
        q2.push(u);
        reach[u] = true;
        while (!q2.empty()) {
            int x = q2.front();
            q2.pop();
            for (int y : dag[x]) {
                if (!reach[y]) {
                    reach[y] = true;
                    q2.push(y);
                    if (y != u) good_pairs++;
                }
            }
        }
    }
    if (good_pairs == n) {
        cout << "YES\n";
        for (auto [u, v] : directed_edges) {
            cout << u << " " << v << "\n";
        }
    } else {
        cout << "NO\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}