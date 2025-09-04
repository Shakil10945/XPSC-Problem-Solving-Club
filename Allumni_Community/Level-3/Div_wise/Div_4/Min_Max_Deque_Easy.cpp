#include <bits/stdc++.h>
using namespace std;

int n, q;
vector<int> vec;

void input()
{
    cin >> n >> q;
    vec.resize(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
}

bool cn_wth_d(int k)
{
    vector<int> G(n);
    for (int i = 0; i < n; ++i)
        G[i] = (vec[i] >= k) ? 1 : 0;

    bool nxt_dp[2][2];

    for (int l = 0; l < 2; ++l)
        for (int r = 0; r < 2; ++r)
            nxt_dp[l][r] = (l == 1 && r == 1);

    for (int i = n - 1; i >= 1; --i)
    {
        bool curDP[2][2];
        int x = G[i];
        bool aliceTurn = (i % 2 == 0);
        for (int l = 0; l < 2; ++l)
        {
            for (int r = 0; r < 2; ++r)
            {
                bool lft_plc = nxt_dp[x][r];
                bool rgt_plc = nxt_dp[l][x];
                if (aliceTurn)
                    curDP[l][r] = lft_plc || rgt_plc;
                else
                    curDP[l][r] = lft_plc && rgt_plc;
            }
        }

        for (int l = 0; l < 2; ++l)
            for (int r = 0; r < 2; ++r)
                nxt_dp[l][r] = curDP[l][r];
    }
    return nxt_dp[G[0]][G[0]];
}

void solve()
{
    input();

    vector<int> vals = vec;
    sort(vals.begin(), vals.end());
    vals.erase(unique(vals.begin(), vals.end()), vals.end());

    int lo = 0, hi = (int)vals.size() - 1;
    int ans = vals[0];
    while (lo <= hi)
    {
        int mid = (lo + hi) >> 1;

        if (cn_wth_d
        (vals[mid]))
        {
            ans = vals[mid];
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }

    cout << ans << '\n';
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
