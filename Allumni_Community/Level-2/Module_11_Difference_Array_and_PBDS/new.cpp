#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// Fast XOR(0 to x)
ll xorUpto(ll x) {
    if (x % 4 == 0) return x;
    if (x % 4 == 1) return 1;
    if (x % 4 == 2) return x + 1;
    return 0;
}

// Fast AND of range [L, R]
ll rangeAND(ll L, ll R) {
    ll shift = 0;
    while (L < R) {
        L >>= 1;
        R >>= 1;
        shift++;
    }
    return L << shift;
}

// Fast OR of range [L, R]
ll rangeOR(ll L, ll R) {
    ll res = L;
    for (int i = 60; i >= 0; --i) {
        ll mask = 1LL << i;
        if ((L & mask) != (R & mask)) {
            // All lower bits will become 1
            res |= (mask - 1);
            res |= mask;
            break;
        }
    }
    return res;
}

int main() {
    ll L, R;
    cin >> L >> R;

    ll XOR = xorUpto(L - 1) ^ xorUpto(R);
    ll OR = rangeOR(L, R);
    ll AND = rangeAND(L, R);

    cout << XOR << " " << OR << " " << AND << "\n";

    return 0;
}