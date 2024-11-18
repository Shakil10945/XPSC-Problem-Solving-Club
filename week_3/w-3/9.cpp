#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<multiset<int>> sequences(n);
        unordered_map<int, int> frequency;

        // Read input and populate frequency map
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n - 1; ++j) {
                int x;
                cin >> x;
                sequences[i].insert(x);
                frequency[x]++;
            }
        }

        vector<int> permutation;
        set<int> used;

        // Find the first element of the permutation
        for (const auto& [key, freq] : frequency) {
            if (freq == n - 1) {
                permutation.push_back(key);
                used.insert(key);
                break;
            }
        }

        // Reconstruct the rest of the permutation
        for (int step = 1; step < n; ++step) {
            for (int i = 0; i < n; ++i) {
                if (sequences[i].size() == n - 1 - step) {
                    for (int x : sequences[i]) {
                        if (used.count(x) == 0) {
                            permutation.push_back(x);
                            used.insert(x);
                            break;
                        }
                    }
                    break;
                }
            }
        }

        // Output the permutation
        for (int x : permutation) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
