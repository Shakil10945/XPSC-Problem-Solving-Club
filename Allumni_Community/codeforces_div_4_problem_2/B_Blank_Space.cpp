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

    int zero = 0, max_zero = 0;

    for (int x : vec)
    {
        if (x == 0)
            zero++;
        else
            zero = 0;
        max_zero = max(zero, max_zero);
    }
    cout << max_zero << endl;
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