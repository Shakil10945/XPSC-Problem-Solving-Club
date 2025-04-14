#include <bits/stdc++.h>
using namespace std;

int n = 8;
vector<string> vec;

void input() {
    vec.resize(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
}

void solve() {
    input();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (vec[i][j] != '.' ? string(1, vec[i][j]) : "");
        }
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}