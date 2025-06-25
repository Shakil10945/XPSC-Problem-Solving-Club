#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
}

void solve()
{
    input();

    sort(vec.begin(), vec.end());

    auto ok = [&](int time)
    {
        int cnt = 1, left = 0, right = 0;

        while (right < n)
        {
            if ((vec[right] - vec[left]) > 2 * time)
            {
                left = right;
                cnt++;
            }
            right++;
        }
        return cnt <= 3;
    };

    int l = 0, r = 1e9, ans, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
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