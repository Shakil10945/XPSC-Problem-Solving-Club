#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a, b, c;

    while (n--) {
        int m; string s; cin >> m >> s;
        if (s == "10") a.push_back(m);
        else if (s == "01") b.push_back(m);
        else if (s == "11") c.push_back(m);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    int res = INT_MAX;
    if (!a.empty() && !b.empty()) res = min(res, a[0] + b[0]);
    if (!c.empty()) res = min(res, c[0]);

    cout << (res == INT_MAX ? -1 : res) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}