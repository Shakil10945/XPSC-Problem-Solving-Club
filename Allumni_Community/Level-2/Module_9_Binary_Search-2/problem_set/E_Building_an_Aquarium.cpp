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
    if(n==1)
    {
        cout<<vec[0]+k<<endl;
        return;
    }

    auto ok = [&](int mid)
    {
        long long cnt = 0;
        for(int i=0; i<n; i++)
            cnt +=max(0, mid-vec[i]);

        //cout<<" mid -> "<<mid<<" cnt-> "<<cnt<<endl;
        return (cnt<=(k*1LL));

    };


    int l=1, r= 2e9, mid, ans = vec[0];

    while (l<=r)
    {
        mid = l+(r-l)/2;
        if(ok(mid))
        {
            //cout<<mid<<" ";
            ans = mid;
            l= mid+1;
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

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}