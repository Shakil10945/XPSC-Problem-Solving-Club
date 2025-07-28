#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// For a given v, checks if there's a subarray of length >= k
// whose transformed-sum >= 0.  If so, returns {true, {l, r}}.
pair<bool, pair<int,int>> check(const vector<int>& a, int n, int k, int v) {
    static vector<int> S;
    S.resize(n+1);
    S[0] = 0;
    for (int i = 1; i <= n; i++) {
        // +1 if a[i]>=v, else -1
        S[i] = S[i-1] + (a[i] >= v ? +1 : -1);
    }
    int min_pref = 0, min_idx = 0;
    // We want min_pref = min{ S[j] : 0 <= j <= i-k }
    for (int i = k; i <= n; i++) {
        // include S[i-k] into our prefix minimum
        if (S[i-k] < min_pref) {
            min_pref = S[i-k];
            min_idx = i-k;
        }
        // test subarray (min_idx+1 ... i)
        if (S[i] - min_pref >= 0) {
            return {true, {min_idx+1, i}};
        }
    }
    return {false, {-1, -1}};
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        // Binary‑search on v in [1..n+1):
        int lo = 1, hi = n+1;
        // We'll store the witness interval for the final answer
        int ans_v = 1, ans_l = 1, ans_r = k;
        while (lo < hi) {
            int mid = (lo + hi) >> 1;
            auto res = check(a, n, k, mid);
            if (res.first) {
                // There *is* a subarray whose median >= mid,
                // so mid could be our answer.  Move lo up.
                lo = mid + 1;
                ans_v = mid;
                ans_l = res.second.first;
                ans_r = res.second.second;
            } else {
                // No subarray supports median >= mid.  Drop hi.
                hi = mid;
            }
        }

        // lo = first v that *fails*, so lo-1 is the maximum that works.
        // We already recorded (ans_l, ans_r) for that value.
        cout << ans_v << " "
             << ans_l << " "
             << ans_r << "\n";
    }
    return 0;
}
