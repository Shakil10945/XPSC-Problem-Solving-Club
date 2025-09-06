#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MOD = 998244353;
const int P0 = 107;
const int P1 = 61;
const int MAXP = 1000000;

int BP0, BP1;
vector<int> pows0, pows1, bpows0, bpows1;

inline ll bin_pow(ll a, int n)
{
    ll ret = 1;
    while (n)
    {
        if (n & 1)
            ret = (ret * a) % MOD;
        a = (a * a) % MOD;
        n >>= 1;
    }
    return ret;
}

inline int addmod(int a, int b)
{
    int res = a + b;
    if (res >= MOD)
        res -= MOD;
    return res;
}
inline int submod(int a, int b)
{
    int res = a - b;
    if (res < 0)
        res += MOD;
    return res;
}
inline int multmod(int a, int b)
{
    ll res = (ll)a * b;
    if (res >= MOD)
        return (int)(res % MOD);
    return (int)res;
}

int T;
int n, m;
vector<string> grid;
vector<vector<int>> hashv, bhashv;

void init_once()
{
    BP0 = (int)bin_pow(P0, MOD - 2);
    BP1 = (int)bin_pow(P1, MOD - 2);

    pows0.assign(MAXP, 1);
    pows1.assign(MAXP, 1);
    bpows0.assign(MAXP, 1);
    bpows1.assign(MAXP, 1);

    for (int i = 1; i < MAXP; ++i)
    {
        pows0[i] = multmod(pows0[i - 1], P0);
        pows1[i] = multmod(pows1[i - 1], P1);
        bpows0[i] = multmod(bpows0[i - 1], BP0);
        bpows1[i] = multmod(bpows1[i - 1], BP1);
    }
}

void input_case()
{
    cin >> n >> m;
    grid.assign(n, "");
    for (int i = 0; i < n; ++i)
        cin >> grid[i];
}

void solve()
{
    input_case();
    hashv.assign(n + 2, vector<int>(m + 2, 0));
    bhashv.assign(n + 2, vector<int>(m + 2, 0));

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            int cur = multmod((grid[i - 1][j - 1] - 'a' + 1),
                              multmod(pows0[i - 1], pows1[j - 1]));
            int tmp = addmod(submod(addmod(hashv[i - 1][j], hashv[i][j - 1]), hashv[i - 1][j - 1]), cur);
            hashv[i][j] = tmp;
        }
    }

    for (int i = n; i >= 1; --i)
    {
        for (int j = m; j >= 1; --j)
        {
            int cur = multmod((grid[i - 1][j - 1] - 'a' + 1),
                              multmod(pows0[n - i], pows1[m - j]));
            int tmp = addmod(submod(addmod(bhashv[i + 1][j], bhashv[i][j + 1]), bhashv[i + 1][j + 1]), cur);
            bhashv[i][j] = tmp;
        }
    }

    auto isp = [&](int x1, int y1, int x2, int y2) -> bool
    {
        int hsh = addmod(submod(submod(hashv[x2][y2], hashv[x1 - 1][y2]), hashv[x2][y1 - 1]), hashv[x1 - 1][y1 - 1]);
        int bhsh = addmod(submod(submod(bhashv[x1][y1], bhashv[x2 + 1][y1]), bhashv[x1][y2 + 1]), bhashv[x2 + 1][y2 + 1]);

        hsh = multmod(hsh, multmod(bpows0[x1 - 1], bpows1[y1 - 1]));
        bhsh = multmod(bhsh, multmod(bpows0[n - x2], bpows1[m - y2]));
        return hsh == bhsh;
    };

    long long mn = 1LL * n * m * 4;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (isp(1, 1, i, j))
                mn = min(mn, 1LL * (2 * n - i) * (2 * m - j));
            if (isp(1, j, i, m))
                mn = min(mn, 1LL * (2 * n - i) * (m + j - 1));
            if (isp(i, 1, n, j))
                mn = min(mn, 1LL * (n + i - 1) * (2 * m - j));
            if (isp(i, j, n, m))
                mn = min(mn, 1LL * (n + i - 1) * (m + j - 1));
        }
    }

    cout << (mn - 1LL * m * n) << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    init_once();

    int tt;
    if (!(cin >> tt))
        return 0;
    while (tt--)
        solve();
    return 0;
}
