#include <bits/stdc++.h>
using namespace std;

int n,k,q;
vector<int> vec;

void input()
{
    cin >> n>>k>>q;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    int l=0,r=0;
    long long ans = 0;

    while(r<n)
    {
        if(vec[r]<=q)
        {
            while (r<n && vec[r]<=q)
            {
                if(r-l+1 >= k)
                    ans+=(r-l+1)-k+1; 
                r++;
            }
        }
        else
        {
            r++;    
            l=r;
        }
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