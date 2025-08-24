#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> eu, ev;
vector<vector<pair<int,int>>> adj;
vector<int> queries; // stores q queries for current test
int qcnt;

void input() 
{
    cin >> n >> m;
    eu.assign(m+1, 0);
    ev.assign(m+1, 0);
    adj.assign(n+1, {});
    
    for (int i = 1; i <= m; ++i) 
    {
        int u, v; cin >> u >> v;
        eu[i] = u; ev[i] = v;
        adj[u].push_back({v, i});
        adj[v].push_back({u, i});
    }

    cin >> qcnt;
    queries.resize(qcnt);
    for (int i = 0; i < qcnt; ++i) cin >> queries[i];
}


// Tarjan globals
vector<int> tin, low;
vector<char> vis;
vector<char> isBridge;
int timer_dfs;
void dfs_bridges(int u, int pe) 
{
    vis[u] = 1;
    tin[u] = low[u] = ++timer_dfs;

    for (auto [v, id] : adj[u]) 
    {
        if (id == pe) continue;
        
        if (vis[v]) 
        {
            low[u] = min(low[u], tin[v]);
        } 

        else 
        {
            dfs_bridges(v, id);

            low[u] = min(low[u], low[v]);

            if (low[v] > tin[u]) 
                isBridge[id] = 1;
        }
    }
}

// components
vector<int> comp; // 1..n -> component id
// bfs results
const int INF = 1e9;
vector<int> distToSeed;
vector<int> chosenBridgeIdx;

void solve() 
{
    input();
    // find bridges
    tin.assign(n+1, 0);
    low.assign(n+1, 0);
    vis.assign(n+1, 0);
    isBridge.assign(m+1, 0);
    timer_dfs = 0;
    for (int i = 1; i <= n; ++i) 
        if (!vis[i]) 
            dfs_bridges(i, -1);

    // contract non-bridge edges -> components

    comp.assign(n+1, 0);
    int compCnt = 0;
    
    for (int i = 1; i <= n; ++i)
    {
        if (comp[i]) 
            continue;
        
        ++compCnt;
        // stack DFS
        stack<int> st;
        st.push(i);
        comp[i] = compCnt;

        while (!st.empty()) 
        {
            int u = st.top(); st.pop();

            for (auto [v, id] : adj[u]) 
            {
                if (isBridge[id])    continue;

                if (!comp[v]) 
                {
                    comp[v] = compCnt;
                    st.push(v);
                }
            }
        }
    }

    // if comp[1] == comp[n] -> no mandatory bridges -> all -1
    if (comp[1] == comp[n]) 
    {
        for (int i = 0; i < qcnt; ++i) 
        {
            if (i) 
                cout << ' ';

            cout << -1;
        }
        cout << '\n';
        return;
    }

    // build bridge-tree between components (edges are bridges with their original id)

    vector<vector<pair<int,int>>> tree(compCnt+1);

    for (int id = 1; id <= m; ++id) 
    {
        if (isBridge[id]) 
        {
            int a = comp[eu[id]];
            int b = comp[ev[id]];

            tree[a].push_back({b, id});
            tree[b].push_back({a, id});
        }
    }

    // BFS on tree to get parent and parentEdge from comp[1]
    vector<int> parent(compCnt+1, -1), parentEdge(compCnt+1, -1);
    queue<int> q;

    q.push(comp[1]);
    parent[comp[1]] = comp[1];

    while (!q.empty()) 
    {
        int u = q.front(); q.pop();

        for (auto [v, id] : tree[u]) 
        {
            if (parent[v] == -1) 
            {
                parent[v] = u;
                parentEdge[v] = id;
                q.push(v);
            }
        }
    }

    // reconstruct path of bridge indices from comp[n] back to comp[1]

    vector<int> pathBridges;
    int cur = comp[n];

    while (cur != comp[1]) 
    {
        int e = parentEdge[cur];
        pathBridges.push_back(e);
        cur = parent[cur];
    }

    // multi-source BFS from endpoints of pathBridges on original graph

    distToSeed.assign(n+1, INF);
    chosenBridgeIdx.assign(n+1, INF);
    deque<int> dq;

    for (int id : pathBridges) 
    {
        int a = eu[id], b = ev[id];

        if (distToSeed[a] > 0 || (distToSeed[a]==0 && chosenBridgeIdx[a] > id)) 
        {
            distToSeed[a] = 0;
            chosenBridgeIdx[a] = min(chosenBridgeIdx[a], id);
            dq.push_back(a);
        }

        if (distToSeed[b] > 0 || (distToSeed[b]==0 && chosenBridgeIdx[b] > id)) 
        {
            distToSeed[b] = 0;
            chosenBridgeIdx[b] = min(chosenBridgeIdx[b], id);
            dq.push_back(b);
        }
    }

    while (!dq.empty()) 
    {
        int u = dq.front(); dq.pop_front();

        for (auto [v, id] : adj[u]) 
        {
            int nd = distToSeed[u] + 1;
            int chosen = chosenBridgeIdx[u];

            if (distToSeed[v] > nd) 
            {
                distToSeed[v] = nd;
                chosenBridgeIdx[v] = chosen;
                dq.push_back(v);
            } 
            else if (distToSeed[v] == nd && chosen < chosenBridgeIdx[v]) 
            {
                chosenBridgeIdx[v] = chosen;
                dq.push_back(v);
            }
        }
    }

    // answer queries
    for (int i = 0; i < qcnt; ++i) 
    {
        if (i) 
            cout << ' ';

        int c = queries[i];

        if (chosenBridgeIdx[c] == INF) 
            cout << -1;
        else 
            cout << chosenBridgeIdx[c];
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
