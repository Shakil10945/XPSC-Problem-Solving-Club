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

    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    
    sort(vec.begin(),vec.end());
    
    int gcdd = 0;
    for(int i=0; i<n-1; i++)
    {
        gcdd = __gcd(gcdd, (vec[n-1]-vec[i]));
    }
    gcdd= max(1, gcdd);
    long long ans = 0;
    for(int i=0;i<n; i++)
    {
        ans +=((vec[n-1]-vec[i])/gcdd);
    }

    map<int,int>mp;
    for(auto x: vec)
        mp[x]++;
    int x = vec.back();
    while(x>=vec.front())
    {
        if(!mp[x])
        {
            break;
        }
        x-=gcdd;
    }
    ans+=((vec.back()-x)/gcdd);
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