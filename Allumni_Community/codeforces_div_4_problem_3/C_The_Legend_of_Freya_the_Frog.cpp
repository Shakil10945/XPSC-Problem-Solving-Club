#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
        cout << max(2* ((x+k-1)/k)-1, 2*((y+k-1)/k)) << '\n';
    }

    return 0;
}