#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
vector<int> v[N];
bool vis[N];
int level[N];
int parent[N];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    parent[src] = -1; // source has no parent

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : v[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }
}

void path_print(int src, int des)
{
    if (!vis[des])
    {
        cout << "No path exists from " << src << " to " << des << "\n";
        return;
    }

    vector<int> path;
    int x = des;
    while (x != -1)
    {
        path.push_back(x);
        x = parent[x];
    }
    reverse(path.begin(), path.end());

    cout << "Path: ";
    for (int val : path)
    {
        cout << val << " ";
    }
    cout << "\n";
    cout << "Shortest path length: " << level[des] << "\n";
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a); // remove if directed
    }

    int src, des;
    cin >> src >> des;

    memset(vis, false, sizeof(vis));
    bfs(src);

    path_print(src, des);

    return 0;
}