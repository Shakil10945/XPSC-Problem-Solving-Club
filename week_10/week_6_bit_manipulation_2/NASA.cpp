#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int> allPali;

// Precomputes all integer palindromes up to 32785
void precompute() {
    for (int i = 0; i < 32786; i++) {
        string s = to_string(i);
        string temp = s;
        reverse(s.begin(), s.end());
        if (temp == s) {
            allPali.push_back(i);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    unordered_map<int, int> freq;
    ll count = 0;

    for (auto ele : vec) {
        freq[ele]++;
        for (auto pali : allPali) {
            int target = ele ^ pali;
            count += freq[target];
        }
    }

    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute(); // Precompute palindromes once

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
