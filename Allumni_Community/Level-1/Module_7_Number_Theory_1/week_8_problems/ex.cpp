#include <bits/stdc++.h>
using namespace std;

unordered_map<char, char> inv = {
    {'N', 'S'},
    {'S', 'N'},
    {'E', 'W'},
    {'W', 'E'}
};

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int x = 0, y = 0;
    for (char c : s) {
        if (c == 'N') y++;
        if (c == 'S') y--;
        if (c == 'E') x++;
        if (c == 'W') x--;
    }

    if (abs(x) % 2 == 1 || abs(y) % 2 == 1) {
        cout << "NO\n";
        return;
    }

    string ans(n, 'R');

    if (x == 0 && y == 0) {
        if (n == 2) {
            cout << "NO\n";
            return;
        }
        // Assign H to the first and its opposite direction
        ans[0] = 'H';
        for (int i = 1; i < n; ++i) {
            if (s[i] == inv[s[0]]) {
                ans[i] = 'H';
                break;
            }
        }
    } else {
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'N' && y > 0) {
                y -= 2;
                ans[i] = 'H';
            } else if (s[i] == 'S' && y < 0) {
                y += 2;
                ans[i] = 'H';
            } else if (s[i] == 'E' && x > 0) {
                x -= 2;
                ans[i] = 'H';
            } else if (s[i] == 'W' && x < 0) {
                x += 2;
                ans[i] = 'H';
            }
        }
    }

    cout << ans << '\n';
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