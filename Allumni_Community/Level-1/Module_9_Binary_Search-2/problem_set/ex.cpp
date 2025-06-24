#include <bits/stdc++.h>
using namespace std;

int n, t;
vector<int> vec;

void input()
{
    cin >> n>>t;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    auto ok = [&](long long time)
    {
        long long cnt = 0;
        for(int i=0; i<n; i++)
            cnt+= (time/(vec[i]*1LL));

        return cnt>=t;
    };

    long long l=1, r = 1e18, mid, ans=0;

    while (l<=r)
    {
        mid = l + (r-l)/2;

        if(ok(mid))
        {
            ans = mid;
            r = mid-1;
        }
        else
            l=mid+1;
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