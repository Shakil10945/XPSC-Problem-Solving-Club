#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Return the smallest x >= x0 such that (x & y) == A, or -1 if impossible.
ll adjust(ll x0, ll y, ll A) {
    // If y lacks any bit that A requires, it’s impossible.
    if ((y & A) != A) return -1;
    ll x = x0;
    while (true) {
        bool ok = true;
        for (int k = 0; k < 31; k++) {
            ll mask = 1LL << k;
            int yk = (y & mask) ? 1 : 0;
            int Ak = (A & mask) ? 1 : 0;
            int xk = (x & mask) ? 1 : 0;
            if (yk == 1) {
                // we need xk == Ak
                if (xk != Ak) {
                    // bump x to next number where bit k flips to Ak
                    // two cases: Ak==1 means we need to set bit k=1
                    //             Ak==0 means we need to clear bit k to 0
                    ll higher = (x >> (k+1));
                    if (Ak == 1) {
                        // ensure bit k=1
                        ll candidate = (higher << (k+1)) | mask;
                        // preserve lower bits = 0
                        if (candidate < x) {
                            higher++;
                            candidate = (higher << (k+1)) | mask;
                        }
                        x = candidate;
                    } else {
                        // need bit k=0; so bump higher
                        higher++;
                        ll candidate = (higher << (k+1));
                        x = candidate;
                    }
                    ok = false;
                    break;
                }
            }
            // if yk==0, no requirement on xk
        }
        if (ok) return x;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<ll> a(n-1), b(n);
        for (int i = 0; i < n-1; i++) cin >> a[i];
        for (int i = 0; i < n; i++)   cin >> b[i];

        // Each state is (cost, value_of_bi)
        vector<pair<ll,ll>> curr;
        curr.emplace_back(0LL, b[0]);

        bool impossible = false;
        for (int i = 0; i < n-1; i++) {
            vector<pair<ll,ll>> next;

            for (auto &st : curr) {
                ll cost = st.first;
                ll bi  = st.second;
                ll bi1 = b[i+1];

                // 1) bump b[i+1], keep bi fixed
                ll x1 = adjust(bi1, bi, a[i]);
                if (x1 >= 0) {
                    next.emplace_back(cost + (x1 - bi1), x1);
                }
                // 2) bump b[i], keep b[i+1] fixed
                ll x0 = adjust(bi, bi1, a[i]);
                if (x0 >= 0) {
                    next.emplace_back(cost + (x0 - bi), bi1);
                }
            }

            if (next.empty()) {
                impossible = true;
                break;
            }

            // prune: keep only two cheapest states with distinct bi+1
            sort(next.begin(), next.end(),
                 [](auto &A, auto &B){ return A.first < B.first; });
            vector<pair<ll,ll>> pr;
            for (auto &p : next) {
                if (pr.empty() || pr.back().second != p.second) {
                    pr.push_back(p);
                    if (pr.size() == 2) break;
                }
            }
            curr.swap(pr);
        }

        if (impossible) {
            cout << -1 << "\n";
        } else {
            ll ans = LLONG_MAX;
            for (auto &st : curr) ans = min(ans, st.first);
            cout << ans << "\n";
        }
    }
    return 0;
}
