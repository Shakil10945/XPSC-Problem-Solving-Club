#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> vec;

void input()
{
    cin >> n>>m;
    vec.resize(n);

    for (int i = 0; i < n; i++)
    {
        vector<int>vec2;
        for(int j=0; j<m; j++)
        {
            int x;  cin>>x;
            vec2.push_back(x);
        }
        vec[i] = vec2;
        vec2.clear();
    }
    
}

void solve()
{
    input();
    
    int mx = 0;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            int now = 0;
            int ci = i, cj=j;

            while (ci>=0 && ci<n &&  cj>=0 && cj<m)
            {
                now+=vec[ci][cj];
                ci--;
                cj--;
            }

            ci = i, cj=j;
            while (ci>=0 && ci<n &&  cj>=0 && cj<m)
            {
                now+=vec[ci][cj];
                ci++;
                cj--;
            }

            ci = i, cj=j;
            while (ci>=0 && ci<n &&  cj>=0 && cj<m)
            {
                now+=vec[ci][cj];
                ci--;
                cj++;
            }

            ci = i, cj=j;
            while (ci>=0 && ci<n &&  cj>=0 && cj<m)
            {
                now+=vec[ci][cj];
                ci++;
                cj++;
            }
            now -= vec[i][j]*3;
            mx = max(mx, now);
        }
    }
    cout<<mx<<endl;
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