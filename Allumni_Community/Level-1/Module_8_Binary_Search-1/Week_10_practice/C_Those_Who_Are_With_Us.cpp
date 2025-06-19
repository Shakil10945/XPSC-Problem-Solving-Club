#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int n, m;
int k = 0;
vector<vector<int>> vec;

void input()
{
    cin >> n >> m;
    vec.resize(n);
    k = 0;

    for (int i = 0; i < n; i++)
    {
        vector<int> v(m);
        for (int j = 0; j < m; j++)
        {
            cin >> v[j];
            k = max(k, v[j]);
        }
        vec[i] = v;
    }
}

void solve()
{
    input();

    vector<pair<int,int>>pos;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(vec[i][j]==k)
                pos.push_back({i,j});
        }
    }

    bool ok = false;

    for(int i=0; i<n && !ok; i++)
    {
        set<int> dd;
        for(auto pr: pos)
        {
            if(pr.first!=i)
            {
                dd.insert(pr.second);
            }
        }
        if(dd.size()<=1)
            ok= true;
    }
    cout<<(ok? k-1: k)<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}