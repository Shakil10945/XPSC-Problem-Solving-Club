#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string a, b, c; cin >> a >> b >> c;
        int cnt[3] = {};
        for (auto& s : {a, b, c})
            for (char ch : s) cnt[ch - 'A']++;
        cout << (cnt[0] < 3 ? 'A' : cnt[1] < 3 ? 'B' : 'C') << '\n';
    }

    return 0;
}

