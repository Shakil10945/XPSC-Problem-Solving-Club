#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

vector<vector<int>> tree;
vector<int> subtree_size;
vector<int> labels;

void dfs_size(int u, int p) {
    subtree_size[u] = 1;
    for (int v : tree[u]) {
        if (v != p) {
            dfs_size(v, u);
            subtree_size[u] += subtree_size[v];
        }
    }
}

int find_centroid(int n) {
    dfs_size(1, -1);
    int u = 1, p = -1;
    bool changed;
    do {
        changed = false;
        for (int v : tree[u]) {
            if (v != p && subtree_size[v] > n / 2) {
                p = u;
                u = v;
                changed = true;
                break;
            }
        }
    } while (changed);
    return u;
}

void assign_labels(int centroid, int n) {
    labels.assign(n + 1, -1);
    labels[centroid] = 0;
    queue<int> q;
    q.push(centroid);
    int cur_label = 1;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : tree[u]) {
            if (labels[v] == -1) {
                labels[v] = cur_label++;
                q.push(v);
            }
        }
    }
}

int calc_score(int n) {
    int score = 0;
    // Precompute distances with BFS from every node
    vector<vector<int>> dist(n + 1, vector<int>(n + 1, 0));
    for (int u = 1; u <= n; u++) {
        queue<int> q;
        vector<int> d(n + 1, -1);
        d[u] = 0;
        q.push(u);
        while (!q.empty()) {
            int x = q.front(); q.pop();
            for (int y : tree[x]) {
                if (d[y] == -1) {
                    d[y] = d[x] + 1;
                    q.push(y);
                }
            }
        }
        for (int v = 1; v <= n; v++) dist[u][v] = d[v];
    }
    // collect MEX on every path
    for (int u = 1; u <= n; u++) {
        for (int v = u; v <= n; v++) {
            vector<int> seen(n, 0);
            // get path from u to v
            int x = u, y = v;
            vector<int> path;
            while (dist[x][y] != 0) {
                path.push_back(x);
                for (int z : tree[x]) {
                    if (dist[z][y] == dist[x][y] - 1) {
                        x = z;
                        break;
                    }
                }
            }
            path.push_back(y);
            for (int p : path)
                seen[labels[p]] = 1;
            int mex = 0;
            while (seen[mex]) mex++;
            score = (score + mex) % MOD;
        }
    }
    return score;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        tree.assign(n + 1, {});
        for (int i = 1; i <= n - 1; i++) {
            int u, v;
            cin >> u >> v;
            tree[u].push_back(v);
            tree[v].push_back(u);
        }
        subtree_size.assign(n + 1, 0);

        int centroid = find_centroid(n);
        assign_labels(centroid, n);

        cout << calc_score(n) << '\n';
    }
    return 0;
}