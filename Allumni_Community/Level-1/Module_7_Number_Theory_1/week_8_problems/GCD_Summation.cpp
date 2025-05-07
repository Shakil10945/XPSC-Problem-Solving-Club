#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        if (k % (n - 1) != 0) {
            cout << -1 << '\n';
            continue;
        }

        int x = k / (n - 1);
        vector<int> a;

        // Make sure values don't exceed 1e9
        if (1LL * x * 2 + (n - 2) > 1e9) {
            cout << -1 << '\n';
            continue;
        }

        a.push_back(x);
        for (int i = 1; i < n - 1; ++i) {
            a.push_back(x * 2 + i); // Ensure uniqueness
        }
        a.push_back(x * 2);

        for (int val : a) cout << val << " ";
        cout << '\n';
    }

    return 0;
}