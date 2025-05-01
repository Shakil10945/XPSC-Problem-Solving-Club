#include <bits/stdc++.h>
using namespace std;

const int MAXN = 501;
int distinct_f[MAXN];

int main() {
    // Precompute distinct f(p) values for all n from 1 to 500
    for (int n = 1; n < MAXN; ++n) {
        set<int> s;
        vector<int> p(n);
        iota(p.begin(), p.end(), 1);
        do {
            int sum = 0;
            for (int i = 0; i < n; ++i) {
                sum += abs(p[i] - (i + 1));
            }
            s.insert(sum);
        } while (next_permutation(p.begin(), p.end()));
        distinct_f[n] = s.size();
    }

    // Read input and answer test cases
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << distinct_f[n] << '\n';
    }

    return 0;
}