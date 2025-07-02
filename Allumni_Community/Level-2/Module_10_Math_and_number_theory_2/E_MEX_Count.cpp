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

    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[vec[i]]++;
    }

    vector<int>ans;
    for(auto x: mp)
    {
        ans.push_back(x.second);
    }

    sort(ans.begin(),ans.end());
    for(auto x: ans)
        cout<<x<<" ";
    cout<<endl; 

    // cout<<1<<" ";

    // for(int i=1; i<=n; i++)
    // {
    //     auto it = lower_bound(ans.begin(),ans.end(),i);

    //     int x = vec.begin()-it;

    //     cout<<x+1<<" ";
    // }
    
    // cout<<endl;
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