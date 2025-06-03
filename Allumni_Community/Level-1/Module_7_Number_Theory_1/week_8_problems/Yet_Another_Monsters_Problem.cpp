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

    long long total = accumulate(vec.begin(),vec.end(), 0LL);

    map<int,int>mp;
    for(auto x:vec)
        mp[x]++;
    
    int count = 0;
    for(auto dd: mp)
    {
        count+=min(dd.first,dd.second);
        
        if(dd.first<=dd.second)
        {
            for(auto &cc: mp)
            {
                mp[cc.first-1] =cc.second;
                mp.erase(cc.first);
            }
        }
    }
    cout<<count<<endl;
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