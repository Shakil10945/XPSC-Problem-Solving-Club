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
    map<int, int> mp;
    for(auto x: vec)
    {
        int b = (int)log2(x);
        mp[b]++;
    }

    long long ans =0;
    sort(vec.begin(),vec.end());
    for(int i=0; i<n; i++)
    {
        int x = (int)log2(vec[i]);

        for(auto it = mp.begin(); it!=mp.end();)
        {
            if(x==it->first)
            {
                if(it->second >1)
                    ans+=(it->second-1);
                it->second--;
                if(!it->second)
                    it = mp.erase(it);
                else
                    it++;
            }
            else
                it++;
        }
    }
    cout<<ans<<endl;
    
    
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