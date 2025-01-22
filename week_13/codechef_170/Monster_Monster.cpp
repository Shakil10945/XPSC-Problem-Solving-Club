#include <bits/stdc++.h>
using namespace std;

int n;
long long x;
vector<long long> vec;

void input()
{
    cin >> n >> x;
    vec.resize(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
}

void solve()
{
    input();

    sort(vec.begin(), vec.end());

    long long t = vec[0] + (1LL * (n - 1) * (x));
    if (t < vec[n - 1])
        cout << vec[n - 1] << endl;
    else
        cout << t << endl;
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