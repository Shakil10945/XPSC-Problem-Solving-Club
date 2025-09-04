#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin >> n;
    vec.resize(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> vec[i];
}

void solve()
{
    input();

    if(is_sorted(vec.begin() + 1, vec.end()))
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 1; i < n; ++i)
    {
        if (vec[i] > vec[i + 1])
        {
            cout << i << " " << (i + 1) << endl;
            return;
        }
    }
    cout << -1 << endl;
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
