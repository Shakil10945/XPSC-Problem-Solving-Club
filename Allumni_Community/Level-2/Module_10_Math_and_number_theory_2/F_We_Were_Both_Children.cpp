#include <bits/stdc++.h>
using namespace std;

int n;
map<int,int>vec;

void input()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        vec[x]++;
    }
}

void solve()
{
    input();

    map<int,int>mp;

    for(auto x: vec)
    {
        for(int i=x.first; i<=n;i+=x.first)
        {
            mp[i] = (mp[i]+x.second);
        }
    }
    int max_val = 0;
    for (auto &p : mp) {
        max_val = max(max_val, p.second);
    }
    cout<<max_val<<endl;
    

    vec.clear();
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