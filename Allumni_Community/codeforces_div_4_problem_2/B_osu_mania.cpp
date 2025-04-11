


#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    while (n--) {
        string row;
        cin >> row;
        cout << row.find('#') + 1 << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}