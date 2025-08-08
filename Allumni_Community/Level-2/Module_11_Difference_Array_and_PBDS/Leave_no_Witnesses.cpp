#include <bits/stdc++.h>
using namespace std;

int n;
string S;                     // input string A, 1-indexed via S[0]='?', data in S[1..n]
vector<int> popcount;         // popcount[i] = number of 1-bits in i
int L;                         // number of bit-positions we care about (0..L-1)
int FULL;                      // (1<<L)-1

void input() {
    cin >> n >> S;
    S = " " + S;  // make 1-indexed
}

void solve() {
    input();
    // 1) Precompute popcount up to n once
    popcount.assign(n+1, 0);
    for (int i = 1; i <= n; i++)
        popcount[i] = popcount[i>>1] + (i&1);

    // 2) Determine L = floor(log2(n))+1, FULL mask = (1<<L)-1
    L = 0;
    while ((1<<L) <= n) L++;
    FULL = (1<<L) - 1;

    // 3) Collect all powers_of_two <= n: these indices MUST be 1
    vector<int> P;
    for (int b = 0; b < L; b++) {
        int p = 1<<b;
        if (p <= n) P.push_back(p);
    }

    // 4) Compute flips needed to set those P positions to '1'
    int flips_ones = 0;
    for (int p: P) {
        if (S[p] == '0') flips_ones++;
    }

    // 5) Build for every other index i (i not in P) its bit-mask over 0..L-1
    //    and classify as zero-cost (S[i]=='0') or unit-cost (S[i]=='1').
    const int INF = 1e9;
    vector<int> best0(1<<L, INF), best1(1<<L, INF);
    auto idxMask = [&](int i){
        int m = 0;
        for (int b = 0; b < L; b++)
            if (i & (1<<b)) m |= 1<<b;
        return m;
    };
    vector<bool> isPow2(n+1,false);
    for (int p: P) isPow2[p] = true;

    for (int i = 1; i <= n; i++) {
        if (isPow2[i]) continue;
        int m = idxMask(i);
        if (S[i] == '0') {
            best0[m] = 0;            // zero-cost
        } else {
            best1[m] = 1;            // cost 1 if we need to flip it to '0'
        }
    }
    // 6) We want to choose a collection of masks whose union = FULL,
    //    minimizing total cost where cost = sum(best1 chosen).
    //    We'll do a classic DP over masks of size 2^L.

    vector<int> dp(1<<L, INF);
    dp[0] = 0;
    // Pre-gather all masks that actually appear:
    vector<pair<int,int>> items;
    for (int m = 0; m < (1<<L); m++) {
        int c0 = best0[m], c1 = best1[m];
        int c = min(c0, c1);
        if (c < INF) {
            items.emplace_back(m, c);
        }
    }
    for (auto &it: items) {
        int m = it.first, c = it.second;
        for (int s = 0; s < (1<<L); s++) {
            if (dp[s] == INF) continue;
            int ns = s | m;
            dp[ns] = min(dp[ns], dp[s] + c);
        }
    }

    int best_cover = dp[FULL];
    if (best_cover >= INF) {
        cout << -1 << "\n";
    } else {
        cout << (flips_ones + best_cover) << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
