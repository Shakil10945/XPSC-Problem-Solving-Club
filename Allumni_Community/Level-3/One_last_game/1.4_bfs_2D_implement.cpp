#include <bits/stdc++.h>
using namespace std;

const int N = 20;
int n, m, dis[N][N];
bool vis[N][N];
char g[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = 1;
    dis[si][sj] = 0;
    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();
        for (auto [dx, dy] : d)
        {
            int nx = x + dx, ny = y + dy;
            if (valid(nx, ny) && !vis[nx][ny])
            {
                vis[nx][ny] = 1;
                dis[nx][ny] = dis[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> g[i][j];
    int si, sj;
    cin >> si >> sj;
    memset(vis, 0, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    bfs(si, sj);
    cout << dis[2][3] << "\n";
}