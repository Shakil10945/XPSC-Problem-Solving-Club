#include <bits/stdc++.h>
using namespace std;

int n, m, k;
vector<int> a;
vector<int> b;

void input()
{
    cin >> n >>m >>k;
    a.resize(n);
    b.resize(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
}

void solve()
{
    input();

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    
    

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