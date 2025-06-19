#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
vector<int> b;

void input()
{
    cin >> n;
    a.resize(n);
    b.resize(n);
    //a.resize(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    
}

void solve()
{
    input();

    int x = *max_element(a.begin(),a.end());

    for(int i=0; i<n; i++)
    {
        int xx = min(x-a[i], b[i]);
        a[i] +=xx;
        b[i] = b[i]- xx;
    }
    int rem = 0;
    for(int i=0; i<n; i++)
    {
        rem+=(x-a[i]);
    }

    
    
    
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