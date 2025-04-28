#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;

    vector<long long> suffix_sum(n+1, 0); // suffix_sum[i] = sum of a[i..n-1]
    for (int i = n-1; i >= 0; --i) {
        suffix_sum[i] = suffix_sum[i+1] + a[i];
    }

    long long max_in_prefix = 0;
    for (int k = 1; k <= n; ++k) {
        if (k < n) {
            max_in_prefix = max(max_in_prefix, a[n-k-1]); 
            cout << max(suffix_sum[n-k], suffix_sum[n-k] + max_in_prefix) << " ";
        } else {
            cout << suffix_sum[0] << " "; // when k == n, full sum
        }
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}