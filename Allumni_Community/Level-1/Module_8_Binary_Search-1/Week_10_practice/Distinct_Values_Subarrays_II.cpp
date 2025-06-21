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

    long long ans = 0;

    map<int, int>mp;

    int l=0, r= 0;
    while (r<n)
    {
        mp[vec[r]]++;

        while (l<=r && l<r && mp.size()>k)
        {
            mp[vec[l]]--;
            if(mp[vec[l]]==0)
                mp.erase(vec[l]);
            l++;
        }
        if(mp.size()<=k)
            ans+=(r-l+1);
        
        r++;
    }
    cout<<ans<<endl;
    
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}