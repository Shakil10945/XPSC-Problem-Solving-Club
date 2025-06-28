#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll get_x(ll n, ll k, ll i) {
    // Use explicit casts or ll literals for all multiplications
    ll total = n * (2 * k + n - 1);
    total /= 2;  // integer division

    ll prefix = i * (2 * k + i - 1);
    prefix /= 2;

    return abs(2 * prefix - total);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll mid = (n + 1) / 2;
        ll res = get_x(n, k, mid);
        if (mid + 1 <= n)
            res = min(res, get_x(n, k, mid + 1));
        cout << res << "\n";
    }
    return 0;
}