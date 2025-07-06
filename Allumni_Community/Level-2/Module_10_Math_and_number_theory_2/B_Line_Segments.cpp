#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a, b, c, d;
        cin >> a >> b >> c >> d;

        vector<int> v(n);
        long long sum = 0, max_val = 0;

        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            sum += v[i];
            max_val = max(max_val, 1LL * v[i]);
        }

        long long dx = a - c;
        long long dy = b - d;
        long long dist_sq = dx * dx + dy * dy;

        long long upper_bound = sum * sum;
        long long lower_bound = 0;

        if (n) {
            lower_bound = max(0LL, max_val - (sum - max_val));
            lower_bound *= lower_bound;
        }

        if (dist_sq >= lower_bound && dist_sq <= upper_bound)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}