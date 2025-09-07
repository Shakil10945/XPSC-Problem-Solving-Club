#include <bits/stdc++.h>
using namespace std;

long long n;
vector<long long> vec;

void input()
{
    cin >> n;
    vec.resize(n);
    for (long long i = 0; i < n; i++)
        cin >> vec[i];
}

void solve()
{
    input();

    map<long long, vector<long long>> mp;
    for (long long i = 0; i < n; i++)
        mp[vec[i]].push_back(i);

    vector<long long> ans(n, -1);
    long long label = 1;
    bool ok = true;

    for (auto &p : mp)
    {
        long long k = p.first;
        auto &idx = p.second;

        if ((long long)idx.size() % k != 0)
        {
            ok = false;
            break;
        }

        for (int start = 0; start < (int)idx.size(); start += k)
        {
            for (int j = 0; j < k; j++)
            {
                ans[idx[start + j]] = label;
            }
            label++;
        }
    }

    if (!ok)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (i)
            cout << " ";
        cout << ans[i];
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
