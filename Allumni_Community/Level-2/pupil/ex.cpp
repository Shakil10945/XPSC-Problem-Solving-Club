#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using i128 = __int128;

ll gcdll(ll a, ll b) {
    while (b) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        ll L = 1;
        ll G = 0;
        bool anyViolation = false;
        for (int i = 0; i < n - 1; i++) {
            ll bi = b[i];
            ll bi1 = b[i + 1];
            if (bi1 % bi != 0) {
                ll g = gcdll(bi, bi1);
                ll u = bi / g;
                if (!anyViolation) {
                    L = u;
                    G = bi;
                    anyViolation = true;
                } else {
                    ll gL = gcdll(L, u);
                    i128 temp = (i128) L / gL * u;
                    L = (ll) temp;
                    G = gcdll(G, bi);
                }
            }
        }
        if (!anyViolation) {
            // No violation, any x works (choose 1)
            cout << 1 << "\n";
        } else {
            // Output L (it will divide G by problem guarantee)
            cout << L << "\n";
        }
    }
    return 0;
}
