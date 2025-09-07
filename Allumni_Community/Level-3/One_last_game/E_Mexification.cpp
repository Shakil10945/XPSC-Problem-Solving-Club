#include <bits/stdc++.h>
using namespace std;

int n;
long long k;
vector<int> vec;

void input()
{
    cin >> n >> k;
    vec.resize(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
}

vector<int> next_array(const vector<int> &arr)
{
    int m = (int)arr.size();
    vector<int> freq(m + 1, 0);
    for (int v : arr)
        if (0 <= v && v <= m)
            freq[v]++;
    set<int> missing;
    for (int x = 0; x <= m; ++x)
        if (freq[x] == 0)
            missing.insert(x);

    vector<int> nxt(m);
    for (int i = 0; i < m; ++i)
    {
        int val = arr[i];
        if (0 <= val && val <= m)
        {
            freq[val]--;
            if (freq[val] == 0)
                missing.insert(val);
        }

        nxt[i] = *missing.begin();

        if (0 <= val && val <= m)
        {
            if (freq[val] == 0)
                missing.erase(val);
            freq[val]++;
        }
    }
    return nxt;
}

void solve()
{
    input();

    if (k == 0)
    {
        long long s = 0;
        for (int v : vec)
            s += v;
        cout << s <<endl;
        return;
    }

    vector<int> a1 = next_array(vec);
    if (k == 1)
    {
        long long s = 0;
        for (int v : a1)
            s += v;
        cout << s <<endl;
        return;
    }

    vector<int> a2 = next_array(a1);
    long long s = 0;
    if (k % 2 == 1)
    {
        for (int v : a1)
            s += v;
    }
    else
    {
        for (int v : a2)
            s += v;
    }
    cout << s <<endl;
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
