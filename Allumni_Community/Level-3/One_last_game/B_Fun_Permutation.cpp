#include <bits/stdc++.h>
using namespace std;

long long n;
vector<long long> vec;

void input()
{
    cin >> n;
    vec.resize(n);

    for (long long i = 0; i < n; i++)
        cin >> vec[i];
}

void solve()
{
    input();
    int req = n + 1;
    for (int i = 0; i < n; i++)
    {
        cout << req - vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}