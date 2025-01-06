#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> vec;

void input()
{
    cin >> n >> k;
    vec.resize(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
}

void solve()
{
    input();

    vector<int> bits(31);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= 30; j++)
        {
            if (!(vec[i] & (1 << j)))
                bits[j]++;
        }
    }

    int d = 0;

    for (int i = 30; i >= 0; i--)
    {
        if (bits[i] <= k)
        {
            d = (d | (1 << i));
            k -= bits[i];
        }
    }

    cout << d << endl;
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