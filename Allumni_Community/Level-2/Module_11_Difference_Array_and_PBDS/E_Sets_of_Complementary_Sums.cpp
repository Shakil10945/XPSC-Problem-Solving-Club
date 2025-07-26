#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

long long modPow(long long a, long long b, long long mod) {
    long long res = 1;
    a %= mod;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

long long modInverse(long long a, long long mod) {
    return modPow(a, mod - 2, mod);
}

long long nChooseK(long long n, long long k, long long mod) {
    if (k > n) return 0;
    if (k == 0) return 1;
    
    long long res = 1;
    for (long long i = 0; i < k; i++) {
        res = res * (n - i) % mod;
        res = res * modInverse(i + 1, mod) % mod;
    }
    return res;
}

void solve() {
    int n, x;
    cin >> n >> x;
    
    // If n > x, it's impossible to have a set with n distinct elements all ≤ x
    if (n > x) {
        cout << 0 << '\n';
        return;
    }
    
    // For each possible sum s, we need to choose n numbers from 1 to x
    // that will form our set Q when subtracted from s
    // The minimum sum s is n, when we choose the smallest n numbers
    // The maximum sum s is x + (n-1), when we choose the largest n numbers
    
    long long ans = 0;
    for (int s = n; s <= x + n - 1; s++) {
        // For each sum s, we need to choose n numbers from 1 to min(s-1, x)
        int maxVal = min(s - 1, x);
        if (maxVal < n) continue;
        
        // Number of ways to choose n numbers from 1 to maxVal
        ans = (ans + nChooseK(maxVal, n, MOD)) % MOD;
    }
    
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}