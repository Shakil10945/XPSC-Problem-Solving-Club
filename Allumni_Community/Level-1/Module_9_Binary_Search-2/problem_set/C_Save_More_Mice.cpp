#include <bits/stdc++.h>
using namespace std;

int k,n;
vector<int> vec;

void input()
{
    cin>>k >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    sort(vec.begin(),vec.end());

    auto ok = [&](int mid)
    {
        long long total = 0;
        for(int i=mid; i<n; i++)
            total += (k-vec[i]);
        return total<k;
    };


    int l = 0, r= n-1, ans=0, mid;
    while (l<=r)
    {
        mid = l+(r-l)/2;

        if(ok(mid))
        {
            ans= n-mid;
            r = mid-1;
        }
        else
            l= mid+1;

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