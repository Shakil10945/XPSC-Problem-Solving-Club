#include <bits/stdc++.h>
using namespace std;

int n, m, q;

vector<long long> a;
vector<long long> b;

vector<long long> prefa;
vector<long long> prefb;

void input() 
{
    cin >> n >> m >> q;

    a.assign(n, 0);
    b.assign(m, 0);

    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    for (int j = 0; j < m; j++) 
        cin >> b[j];

    sort(a.begin(), a.end(), greater<long long>());
    sort(b.begin(), b.end(), greater<long long>());

    prefa.assign(n + 1, 0);
    prefb.assign(m + 1, 0);

    for (int i = 1; i <= n; ++i) 
        prefa[i] = prefa[i - 1] + a[i - 1];

    for (int j = 1; j <= m; ++j) 
        prefb[j] = prefb[j - 1] + b[j - 1];
}

int find_k(int x, int y, int z) 
{
    int low = max(0, z - y);
    int high = min(x, z);

    if (low == high)    return low;

    int l = low, r = high;

    while (l < r) 
    {
        int mid = (l + r + 1) >> 1; 

        if (mid > 0 && (z - mid) < y && a[mid - 1] < b[z - mid])
            r = mid - 1;

        else 
            l = mid;
    }

    return l;
}

void solve() 
{
    input();

    for (int qi = 0; qi < q; ++qi) 
    {
        int x, y, z;
        cin >> x >> y >> z;
        

        x = min(x, n);
        y = min(y, m);

        int k = find_k(x, y, z);

        int frmb = z - k;
        long long ans = 0;

        if (k >= 0 && k <= x)   ans += prefa[k];

        if (frmb >= 0 && frmb <= y)   ans += prefb[frmb];

        cout << ans << endl;
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
        solve();

    return 0;
}
