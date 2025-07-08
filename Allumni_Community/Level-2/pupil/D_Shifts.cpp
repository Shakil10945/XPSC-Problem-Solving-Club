#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    long long k; // use long long for large k
    cin >> n >> k;
    string s;
    cin >> s;
    
    for(int i = 0; i < n; i++) {
        if (s[i] == 'a') continue;
        int dist = (26 - (s[i] - 'a')) % 26;
        if (dist <= k) {
            k -= dist;
            s[i] = 'a';
        } else {
            s[i] = (char)('a' + ((s[i] - 'a' + k) % 26));
            k = 0;
        }
    }
    
    cout << s << '\n';
}