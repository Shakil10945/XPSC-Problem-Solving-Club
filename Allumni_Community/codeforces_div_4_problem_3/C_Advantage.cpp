#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n; cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        for (auto &x : a) cin >> x;
        auto b = a;
        sort(b.begin(), b.end());
        int max1 = b[n - 1], max2 = b[n - 2];
        for (int x : a) cout << x - (x == max1 ? max2 : max1) << ' ';
        cout << '\n';
    }
}