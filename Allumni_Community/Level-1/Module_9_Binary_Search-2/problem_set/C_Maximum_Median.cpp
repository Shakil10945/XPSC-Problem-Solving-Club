#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> vec;

void input()
{
    cin >> n>>k;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();
    sort(vec.begin(),vec.end());
    
    auto ok = [&](int median)
    {
        long long cnt = 0;
        for(int i=(n/2); i<n; i++)
            cnt+=max(0, median-vec[i]);
        
        return cnt<=k;
    };

    int l=1, r= 2e9, mid;
    long long ans = 0;

    while ((l<=r))
    {
        mid = l+ (r-l)/2;

        if(ok(mid))
        {
            ans = mid;
            l = mid+1;
        }
        else
            r = mid-1;

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