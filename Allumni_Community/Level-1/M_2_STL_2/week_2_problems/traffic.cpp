#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        char c;
        cin >> n >> c;

        string s;
        cin >> s;

        s += s;
        int len = s.length();

        vector<int> greenPos(len, -1);
        int lastGreen = -1;

        for (int i = len - 1; i >= 0; --i) 
        {
            if (s[i] == 'g') 
                lastGreen = i;

            greenPos[i] = lastGreen;
        }

        int ans = 0;

        
        for (int i = 0; i < n; ++i) 
        {
            if (s[i] == c) 
                ans = max(ans, greenPos[i] - i);
        }

        cout << ans << '\n';
    }

    return 0;
}