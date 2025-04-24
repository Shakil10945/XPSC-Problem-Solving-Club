#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; ++i) 
            cin >> a[i];
        for (int i = 0; i < m; ++i) 
            cin >> b[i];



        vector<int> suff(n + 1, 0);
        int s = 0;
        for (int i = n - 1; i >= 0; --i) 
        {
            if (s < m && a[i] >= b[m - 1 - s])
            {
                s++;
            }
            suff[i] = s;
        }

        int p = 0;
        int ans = 1e9 + 1;
        for (int i = 0; i <= n; ++i) 
        {
            if (i > 0 && p < m && a[i - 1] >= b[p]) 
            {
                p++;
            }
            if (p == m) 
            {
                ans = 0;
                break;
            }
            if (suff[i] >= m - p - 1)
            {
                ans = min(ans, b[p]);
            }
        }

        cout << (ans <= 1e9 ? ans : -1) << '\n';
    }

    return 0;
}