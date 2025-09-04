#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {
        long long k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        long long kn = 1, ans = 0;

        for (int n = 0; r2 / kn >= l1; n++)
        {
            ans += max(0ll, min(r2 / kn, r1) - max((l2 - 1) / kn + 1, l1) + 1ll);
            kn *= k;
        }
        
        cout << ans << endl;
    }
    return 0;
}