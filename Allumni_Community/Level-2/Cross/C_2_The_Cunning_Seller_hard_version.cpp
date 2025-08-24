#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // precompute powers of 3 up to safe limit
    vector<int64> p3;
    p3.push_back(1);
    while (true) {
        __int128 nxt = (__int128)p3.back() * 3;
        if (nxt > ( (__int128)1<<62 )) break; // plenty
        p3.push_back((int64)nxt);
    }

    int t;
    cin >> t;
    while (t--) 
    {
        int64 n_input, k;
        cin >> n_input >> k;
        int64 n = n_input;

        // base-3 digits a[i]
        vector<int64> a;
        int64 temp = n;

        while (temp > 0) 
        {
            a.push_back(temp % 3);
            temp /= 3;
        }
        if (a.empty()) a.push_back(0);
        int maxI = (int)a.size() - 1;

        // sum of digits => minimal deals D
        int64 D = 0;
        for (auto v : a) D += v;
        if (k < D) {
            cout << -1 << '\n';
            continue;
        }
        if (k >= n) {
            // can buy all as single-watermelon deals
            cout << 3 * n << '\n';
            continue;
        }

        // target deals: largest <= min(k,n) with same parity as D
        int64 Dtarget = min(k, n);
        if (((Dtarget - D) & 1) != 0) Dtarget--;      // ensure parity
        if (Dtarget < D) Dtarget = D;             // safety
        int64 splits_needed = (Dtarget - D) / 2;     // each split adds 2 deals

        // initial penalty S0 = sum a[i] * i * 3^{i-1}  (i==0 contributes 0)
        __int128 S0 = 0;
        for (int i = 1; i <= maxI; ++i) {
            if (a[i] == 0) continue;
            __int128 term = (__int128)a[i] * (__int128)i * (__int128)p3[i-1];
            S0 += term;
        }

        if (splits_needed == 0) {
            __int128 ans = (__int128)3 * n + S0;
            cout << (int64)ans << '\n';
            continue;
        }

        // Compute available split reductions by exponent e:
        // For e from maxI-1 down to 0, M_e = sum_{i=e+1..maxI} a[i] * 3^{i-e-1}
        __int128 reduction = 0;
        int64 need = splits_needed;
        for (int e = maxI - 1; e >= 0 && need > 0; --e) {
            // compute M_e
            int64 M_e = 0;
            for (int i = e + 1; i <= maxI; ++i) 
            {
                if (a[i] == 0) continue;
                // a[i] * 3^{i-e-1}
                M_e += a[i] * p3[i - e - 1];
            }
            if (M_e == 0) continue;
            int64 take = min(M_e, need);
            reduction += (__int128)take * (__int128)p3[e];
            need -= take;
        }
        // need should be zero (because Dtarget <= n ensures feasibility)
        // final penalty:
        __int128 S = S0 - reduction;
        __int128 ans = (__int128)3 * n + S;
        cout << (int64)ans << '\n';
    }
    return 0;
}
