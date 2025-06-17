#include <bits/stdc++.h>
using namespace std;

int n,k;
vector<int> vec;

void input()
{
    cin >> n >>k;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    vector<int>prefix_sum(n);
    prefix_sum[0] = vec[0];
    for(int i=1; i<n; i++)
        prefix_sum[i] = (prefix_sum[i-1]+vec[i]);

    map<int,int>mp;
    for(auto x: prefix_sum)
        mp[x]++;
    
    long long ans = 0;
    //if(prefix_sum[0]== k)   ans++;
    //if(prefix_sum[n-1]== k)   ans++;

    for(int i=0;i <n; i++)
    {
        // if(prefix_sum[i]==k)
        // {
        //     ans++;
        //     //mp[prefix_sum[i]]--;
        // }
        if(mp[(prefix_sum[i] - k)])
        {
            for(int j=1; j<=(mp[prefix_sum[i]-k]); j++)
                ans+=j;
//mp[(prefix_sum[i] + k)]--;
        }
        mp.erase(prefix_sum[i]-k);
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