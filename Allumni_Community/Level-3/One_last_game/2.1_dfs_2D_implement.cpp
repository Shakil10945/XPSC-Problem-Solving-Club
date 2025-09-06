#include <bits/stdc++.h>
using namespace std;

const int MAXN = 20;
char a[MAXN][MAXN];
bool vis[MAXN][MAXN];
int n, m;

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void dfs(int si, int sj)
{
    cout << si << " " << sj << endl;
    vis[si][sj] = true;

    for (int k = 0; k < 4; k++)
    {
        int ci = si + d[k].first;
        int cj = sj + d[k].second;

        if (valid(ci, cj) && !vis[ci][cj])
            dfs(ci, cj);
    }
}

int main()
{
    memset(vis, false, sizeof(vis));

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    int si, sj;
    cin >> si >> sj;

    dfs(si, sj);

    return 0;
}




