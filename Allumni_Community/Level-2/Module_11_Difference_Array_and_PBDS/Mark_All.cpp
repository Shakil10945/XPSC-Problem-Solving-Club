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

    vector<int>sf(n+1, INT_MAX);
    for(int i=n-1;i>=0; i--)
        sf[i] = min(vec[i], sf[i+1]);
    
    int cost = min(vec.front(),vec.back());

    for(int i=0; i<n-1; i++)
    {
        cost = min(cost, vec[i]+sf[i+1]);
    }
    cout<<cost<<endl;
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