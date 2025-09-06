#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
vector<int> v[N];
bool vis[N];
int level[N];

void bfs(int src, int n)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

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
            }
        }
    }

    // print nodes by levels
    cout << "Level tracking from source " << src << ":\n";
    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
            cout << "Node " << i << " is at level " << level[i] << "\n";
        else
            cout << "Node " << i << " is not reachable\n";
    }
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

    int src;
    cin >> src;

    memset(vis, false, sizeof(vis));
    bfs(src, n);

    return 0;
}