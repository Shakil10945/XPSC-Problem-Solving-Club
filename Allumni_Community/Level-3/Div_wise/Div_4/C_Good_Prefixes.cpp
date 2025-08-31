#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
}

void solve()
{
    input();

    int maxx = 0;

    long long sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        sum += vec[i];
        maxx = max(maxx, vec[i]);
        sum -= maxx;

        if (sum == maxx)
            cnt++;

        sum += maxx;
    }
    cout << cnt << endl;
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