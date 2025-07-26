#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;

    while (T--) {
        int N, X, Y;
        cin >> N >> X >> Y;

        if (N == 2) {
            cout << -1 << '\n';
            continue;
        }

        vector<int> result;
        set<int> used = {X, Y};

        // Choose a number not equal to Y to place at the front
        for (int first = N; first >= 1; --first) {
            if (used.count(first) == 0 && first != Y) {
                result.push_back(first);
                used.insert(first);
                break;
            }
        }

        // Fill remaining (N - 3) numbers
        for (int i = 1; result.size() < N - 2; ++i) {
            if (used.count(i) == 0) {
                result.push_back(i);
                used.insert(i);
            }
        }

        // Add Y and X at the end
        result.push_back(Y);
        result.push_back(X);

        // Print result
        for (int val : result) cout << val << " ";
        cout << "\n";
    }
}