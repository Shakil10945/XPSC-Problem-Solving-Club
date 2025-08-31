#include <bits/stdc++.h>
using namespace std;

string a, b;

void input()
{
    a.clear(), b.clear();
    cin >> a >> b;
}

void solve()
{
    input();

    if (b.size() < a.size() || b.size() > 2 * a.size())
    {
        cout << "NO" << endl;
        return;
    }

    int l = 0;
    int ll = 0;
    while (l < a.size())
    {
        int x = 0;
        char c = a[l];
        while (l < a.size() && a[l] == c)
        {
            x++;
            l++;
        }
        int y = 0;
        while (ll < b.size() && b[ll] == c)
        {
            ll++;
            y++;
        }
        if (y < x || x * 2 < y)
        {
            cout << "NO" << endl;
            return;
        }
    }

    if (l == a.size() && ll == b.size())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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