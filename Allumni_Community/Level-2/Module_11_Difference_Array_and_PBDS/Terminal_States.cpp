#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int n;
vector<int> vec;

void input()
{
    cin >> n;
    vec.resize(n+1);

    for (int i = 1; i <= n; i++)
       cin >> vec[i];
    
}

void solve()
{
    input();

    vector<int> prefix_max(n+2,0);

    int current = 0;
    for(int i=1; i<=n; i++)
    {
        current = max(current, vec[i]);
        prefix_max[i] = current;
    }



    vector<int>suffix_min(n+2,0);
    int current_m = INT_MAX;
    for(int i=n; i>=1; i--)
    {
        current_m = min(current, vec[i]);
        suffix_min[i] = current_m;
    }

    long long ans = 1;
    for(int i=1; i<n; i++)
    {
        if(prefix_max[i]>suffix_min[i+1])
            ans = (ans*2)%MOD;
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