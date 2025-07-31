#include <bits/stdc++.h>
using namespace std;

int n;
vector<double> A, B, E;

void input() {
    cin >> n;
    A.resize(n+2);
    B.resize(n+2);
    E.resize(n+2);
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> B[i];
    }
}

void solve() {
    input();

    // Binary‐search on the expected random‐jump cost S
    double lo = 0, hi = 1e12;
    for (int it = 0; it < 80; it++) {
        double mid = 0.5 * (lo + hi);
        E[n+1] = 0;
        double sum = 0;
        for (int x = n; x >= 1; x--) {
            double goStep   = A[x] + E[x+1];
            double goRandom = B[x] + mid;
            E[x] = min(goStep, goRandom);
            sum += E[x];
        }
        double S_new = sum / (n+1.0);
        if (S_new > mid) lo = mid;
        else              hi = mid;
    }

    double S = 0.5 * (lo + hi);
    // Final DP sweep to get E[1]
    E[n+1] = 0;
    for (int x = n; x >= 1; x--) {
        double goStep   = A[x] + E[x+1];
        double goRandom = B[x] + S;
        E[x] = min(goStep, goRandom);
    }

    cout << fixed << setprecision(6) << E[1] << "\n";
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
