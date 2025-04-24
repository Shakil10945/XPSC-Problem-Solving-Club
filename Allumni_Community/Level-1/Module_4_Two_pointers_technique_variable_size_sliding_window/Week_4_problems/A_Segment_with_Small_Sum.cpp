#include <bits/stdc++.h>
using namespace std;

int n;
long long s;
vector<int> vec;

void input()
{
    cin >> n>>s;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    int ans = 0, l=0, r=0;
    long long sum=0;

    while (r<n)
    {
        sum+=vec[r];
        if(sum<=s)
            ans= max(ans, r-l+1);
        
        if(sum>s)
        {
            sum-=vec[l];
            l++;
        }
        r++;
    }
    cout<<ans<<endl;
    
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    //cin >> t;
    //while (t--)
    solve();

    return 0;
}