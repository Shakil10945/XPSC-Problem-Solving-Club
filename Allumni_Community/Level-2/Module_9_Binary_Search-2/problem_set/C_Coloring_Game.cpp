#include <bits/stdc++.h>
using namespace std;

int n;
vector<long long> vec;

void input()
{
    cin >> n;
    vec.resize(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> vec[i];
}

void solve()
{
    input();
    vector<long long> suff_max(n + 2, 0);
    for (int i = n; i >= 1; i--)
        suff_max[i] = max(suff_max[i + 1], vec[i]);
    long long ans = 0;
    for (int k = 3; k <= n; k++)
    {
        for (int j = 2; j < k; j++)
        {
            for (int i = 1; i < j; i++)
            {
                if (vec[i] + vec[j] > vec[k])
                {
                    long long sum = vec[i] + vec[j] + vec[k];
                    long long mx_out = 0;
                    if (i > 1)
                        mx_out = max(mx_out, vec[1]);
                    if (j - i > 1)
                        mx_out = max(mx_out, vec[j - 1]);
                    if (k - j > 1)
                        mx_out = max(mx_out, vec[k - 1]);
                    if (k < n)
                        mx_out = max(mx_out, suff_max[k + 1]);

                    if (sum > mx_out)
                        ans++;
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
