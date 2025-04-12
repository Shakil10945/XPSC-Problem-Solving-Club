#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        for (int i = 0; i < 3; ++i) {
            string s;
            cin >> s;
            if (s.find('?') != string::npos) {
                cout << "ABC"[3 - (s[0] != '?' ? s[0] - 'A' : 0) 
                             - (s[1] != '?' ? s[1] - 'A' : 0) 
                             - (s[2] != '?' ? s[2] - 'A' : 0)] << '\n';
            }
        }
    }
    return 0;
}