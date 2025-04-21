#include <iostream>
#include <vector>
#include <string>
using namespace std;

int computeCost(int n, const string& s) {
    int transitions = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] != s[i + 1]) {
            transitions++;
        }
    }
    return n + max(0, transitions - 2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<int> results;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        results.push_back(computeCost(n, s));
    }

    for (int cost : results) {
        cout << cost << '\n';
    }

    return 0;
}