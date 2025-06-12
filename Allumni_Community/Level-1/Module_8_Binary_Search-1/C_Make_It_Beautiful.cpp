#include <bits/stdc++.h>
using namespace std;

int n;
long long k;
vector<long long> vec;

void input()
{
    cin >> n >> k;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
}

void solve()
{
    input();

    vector<vector<int>> bit(n, vector<int>(64));
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 64; j++)
        {
            if ((vec[i] >> j) & 1LL)
            {
                bit[i][j] = 1;
                ans++;
            }
            else
                bit[i][j] = 0;
        }
    }

    bool ch = false;

    for (int j = 0; j < 64 && (1LL << j) <= k; j++)
    {
        if (ch)
            break;
        for (int i = 0; i < n; i++)
        {
            if (bit[i][j] == 0)
            {
                k = (k - (1LL << j));
                if (k >= 0LL)
                {
                    ans++;
                }
                else
                {
                    ch = true;
                    break;
                }
            }
        }
    }

    cout << ans << endl;
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