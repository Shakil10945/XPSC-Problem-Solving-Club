#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
using ll = long long;
using tii = tuple<int, int, int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // Sort adjacency lists based on input order — already preserved.

        // minTime[node][mod] = (time, wait)
        vector<vector<pair<int, int>>> minTime(n + 1);

        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> pq;
        pq.emplace(0, 0, 1); // time, wait, node
        minTime[1].emplace_back(0, 0);

        pair<int, int> answer = {INT_MAX, INT_MAX};

        while (!pq.empty()) {
            auto [t, w, u] = pq.top(); pq.pop();

            if (u == n) {
                if (t < answer.first || (t == answer.first && w < answer.second)) {
                    answer = {t, w};
                }
                continue;
            }

            int deg = adj[u].size();
            int idx = t % deg;

            // Option 1: Move via allowed edge
            if (idx < deg) {
                int v = adj[u][idx];
                bool skip = false;
                for (auto [pt, pw] : minTime[v]) {
                    if (pt <= t + 1 && pw <= w) {
                        skip = true;
                        break;
                    }
                }
                if (!skip) {
                    pq.emplace(t + 1, w, v);
                    minTime[v].emplace_back(t + 1, w);
                }
            }

            // Option 2: Wait
            bool skip = false;
            for (auto [pt, pw] : minTime[u]) {
                if (pt <= t + 1 && pw <= w + 1) {
                    skip = true;
                    break;
                }
            }
            if (!skip) {
                pq.emplace(t + 1, w + 1, u);
                minTime[u].emplace_back(t + 1, w + 1);
            }
        }

        cout << answer.first << " " << answer.second << "\n";
    }

    return 0;
}
