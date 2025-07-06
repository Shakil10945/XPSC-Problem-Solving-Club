#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
vector<ll> a;
vector<vector<ll>> bestOps;
int bestDepth;

// Recursive DFS to find operations
void dfs(vector<ll> &a, vector<vector<ll>> &ops) {
    if ((int)ops.size() >= bestDepth) return;  // already as good as best
    int N = a.size();
    // find first and last nonzero
    int L = 0;
    while (L < N && a[L] == 0) L++;
    if (L == N) {
        // all zero
        bestDepth = ops.size();
        bestOps = ops;
        return;
    }
    int R = N - 1;
    while (R >= 0 && a[R] == 0) R--;
    if (L == R) return;  // one non-zero left, can't split
    if (ops.size() >= 17) return;
    ll sumS = 0;
    for (ll x : a) sumS += x;
    if (sumS % 2 != 0) return;  // sum must be even

    // Try pivot at leftmost non-zero (prefix only a[L])
    if (a[L] > 0) {
        ll suffixSum = sumS - a[L];
        if (suffixSum > 0) {
            // Candidates for how much to take from a[L]
            unordered_set<ll> cands;
            cands.insert(a[L]);
            if (a[L] >= 2) {
                ll half = a[L]/2;
                cands.insert(half);
                cands.insert(a[L] - half);
            }
            cands.insert(1LL);
            if (a[L] > 1) cands.insert(a[L] - 1);
            vector<ll> bL_vals(cands.begin(), cands.end());
            sort(bL_vals.rbegin(), bL_vals.rend()); // try larger first
            for (ll bL : bL_vals) {
                if (bL <= 0 || bL > suffixSum) continue;
                vector<ll> b(N,0);
                b[L] = bL;
                vector<ll> newA = a;
                newA[L] -= bL;
                ll need = bL;
                for (int j = L+1; j <= R && need > 0; j++) {
                    ll take = min(newA[j], need);
                    if (take > 0) {
                        b[j] = take;
                        newA[j] -= take;
                        need -= take;
                    }
                }
                if (need == 0) {
                    ops.push_back(b);
                    dfs(newA, ops);
                    ops.pop_back();
                    if (bestDepth <= ops.size()+1) return;
                }
            }
        }
    }
    // Try pivot at rightmost non-zero (suffix only a[R])
    if (a[R] > 0) {
        ll prefixSum = sumS - a[R];
        if (prefixSum > 0) {
            unordered_set<ll> cands;
            cands.insert(a[R]);
            if (a[R] >= 2) {
                ll half = a[R]/2;
                cands.insert(half);
                cands.insert(a[R] - half);
            }
            cands.insert(1LL);
            if (a[R] > 1) cands.insert(a[R] - 1);
            vector<ll> bR_vals(cands.begin(), cands.end());
            sort(bR_vals.rbegin(), bR_vals.rend());
            for (ll bR : bR_vals) {
                if (bR <= 0 || bR > prefixSum) continue;
                vector<ll> b(N,0);
                b[R] = bR;
                vector<ll> newA = a;
                newA[R] -= bR;
                ll need = bR;
                for (int j = R-1; j >= L && need > 0; j--) {
                    ll take = min(newA[j], need);
                    if (take > 0) {
                        b[j] = take;
                        newA[j] -= take;
                        need -= take;
                    }
                }
                if (need == 0) {
                    ops.push_back(b);
                    dfs(newA, ops);
                    ops.pop_back();
                    if (bestDepth <= ops.size()+1) return;
                }
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        a.resize(n);
        ll sumS = 0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            sumS += a[i];
        }
        if (sumS % 2 != 0) {
            cout << -1 << "\n";
            continue;
        }
        bestDepth = INT_MAX;
        bestOps.clear();
        vector<vector<ll>> ops;
        dfs(a, ops);
        if (bestDepth == INT_MAX) {
            cout << -1 << "\n";
        } else {
            cout << bestDepth << "\n";
            for (auto &b : bestOps) {
                for (int i = 0; i < n; i++) {
                    cout << b[i] << (i+1<n?' ':'\n');
                }
            }
        }
    }
    return 0;
}
