#include <bits/stdc++.h>
using namespace std;
string s,p;
int n, m;
vector<int> vec;

void input()
{
    cin>>s>>p;
    n = s.size();
    m = p.size();
    vec.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
        vec[i]--;
    }
    
}

void solve()
{
    input();

    bool found = false;

    auto ok = [&](int del)
    {
        vector<bool>bad(n);
        for(int i=0;i<=del ; i++)
            bad[vec[i]] = true;
        
        int j = 0;
        
        for(int i=0; i<n; i++)
        {
            if(!bad[i] && s[i]==p[j])
                j++;
            if(j==m)
            {
                found = true;
                return true;
            }
        }
        return false;
    };
    

    int l=0, r= n-1, ans = 0, mid;
    while (l<=r)
    {
        mid = l+(r-l)/2;

        if(ok(mid))
        {
            ans = mid+1;
            l = mid +1;
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