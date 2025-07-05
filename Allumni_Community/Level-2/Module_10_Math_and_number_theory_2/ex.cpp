#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, l, r, k;
        cin >> n >> l >> r >> k;
        // Case 1: n odd => answer = l
        if (n % 2 == 1) {
            // any odd-length array of all l works (AND = XOR = l)
            cout << l << "\n";
            continue;
        }
        // Case 2: n even
        if (n == 2) {
            // No solution for n=2 with positive l
            cout << -1 << "\n";
            continue;
        }
        // Find next power-of-two > l
        // Compute highest set bit of l
        int msb = 63 - __builtin_clzll((ull)l);
        ull x = 1ULL << (msb + 1);
        if (x > (ull)r) {
            // No valid x in [l+1, r]
            cout << -1 << "\n";
            continue;
        }
        // Now the lexicographically smallest array is [l,...,l,x,x]
        // If k is in the prefix of l's, answer is l; else x.
        if (k <= n - 2) {
            cout << l << "\n";
        } else {
            cout << x << "\n";
        }
    }
    return 0;
}