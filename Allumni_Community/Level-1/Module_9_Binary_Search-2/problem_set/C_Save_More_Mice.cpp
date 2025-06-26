#include <bits/stdc++.h>
using namespace std;

int k, n;
vector<int> vec;

void input()
{
    cin >>k>>n;
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
        int cnt =0;
        for(int i=n-1; i>=mid; i--)
            cnt+=(k-vec[i]);

        return (cnt<=(vec[mid]));
    };


    int l = 0, r=n-1, mid, ans;

    while (l<=r)
    {
        
        mid= l + (r-l)/2;
        //cout<<mid<<" ";

        if(ok(mid))
        {
            ans =  n-mid;
            r = mid-1;

        }
        else
            l = mid+1;

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