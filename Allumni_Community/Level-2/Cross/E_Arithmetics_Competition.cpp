#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int n, m, q;
vector<int64> A, B;
vector<int64> prefA, prefB;

void input() 
{
    cin >> n >> m >> q;
    A.assign(n, 0);
    B.assign(m, 0);
    for (int i = 0; i < n; ++i) cin >> A[i];
    for (int j = 0; j < m; ++j) cin >> B[j];

    // sort descending
    sort(A.begin(), A.end(), greater<int64>());
    sort(B.begin(), B.end(), greater<int64>());

    // prefix sums (pref[0] = 0)
    prefA.assign(n + 1, 0);
    prefB.assign(m + 1, 0);
    for (int i = 1; i <= n; ++i) prefA[i] = prefA[i - 1] + A[i - 1];
    for (int j = 1; j <= m; ++j) prefB[j] = prefB[j - 1] + B[j - 1];
}

// returns number of items to take from A (k) for given (x,y,z)
int find_k(int x, int y, int z) {
    int low = max(0, z - y);
    int high = min(x, z);
    if (low == high) return low;

    int l = low, r = high;
    while (l < r) {
        int mid = (l + r + 1) >> 1; // upper mid
        // check if taking mid from A is "acceptable"
        // if there is a B element at index (z-mid), compare A[mid-1] < B[z-mid]
        if (mid > 0 && (z - mid) < y && A[mid - 1] < B[z - mid]) {
            // too many from A, decrease
            r = mid - 1;
        } else {
            // mid is okay, try larger
            l = mid;
        }
    }
    return l;
}

void solve() {
    input();

    for (int qi = 0; qi < q; ++qi) 
    {
        int x, y, z;
        cin >> x >> y >> z;
        // ensure not exceeding available cards (input guarantees this but safe)
        x = min(x, n);
        y = min(y, m);

        int k = find_k(x, y, z);
        int fromB = z - k;
        int64 ans = 0;
        if (k >= 0 && k <= x) ans += prefA[k];
        if (fromB >= 0 && fromB <= y) ans += prefB[fromB];
        cout << ans << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) solve();

    return 0;
}
