#include <bits/stdc++.h>
using namespace std;

pair<long long, long long> val(long long mid, long long n, long long k) {
    long long val1 = (mid + k - 1 + k) * mid / 2;
    long long total = (k + n - 1 + k) * n / 2;
    long long val2 = total - val1;
    return {val1, val2};
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long lo = 1, hi = n, curr = 1;
        while (lo <= hi) {
            long long mid = (lo + hi) / 2;
            auto [a, b] = val(mid, n, k);
            if (b > a) {
                curr = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        auto [a1, b1] = val(curr, n, k);
        auto [a2, b2] = val(curr + 1, n, k);
        cout << min(b1 - a1, b2 - a2) << endl;
    }
    return 0;
}