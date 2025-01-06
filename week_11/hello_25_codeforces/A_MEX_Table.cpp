#include <bits/stdc++.h>
using namespace std;
long long n;
long long m;

void input()
{
    cin >> n >> m;
}

void solve()
{
    input();
    if (n == 1 || m == 1)
    {
        long long x = 1 + (n * m);
        cout << x << endl;
        return;
    }
    long long xx = max(n,m) + 1;
    cout << xx << endl;
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
