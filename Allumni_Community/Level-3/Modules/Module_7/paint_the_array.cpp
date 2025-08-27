#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<long long> a(n);

        for(int i=0; i<n; i++)
            cin>>a[i];
        
        long long g = 0, gg = 0;
        for(int i=0; i<n; i+=2)
            g = __gcd(g,a[i]);
        for(int i=1; i<n; i+=2)
            gg = __gcd(gg, a[i]);

        long long ans = 0;
        bool ok = true;

        for(int i=1; i<n; i+=2)
            if(a[i]%g == 0)
                ok = false;
        
        if(ok)
            ans = g;
        else
        {
            ok = true;
            for(int i=0; i<n;i+=2)
                if(a[i]%gg == 0)
                    ok = false;
            if(ok)
                ans =gg;

        }

        cout<<ans<<endl;
    }

    return 0;
}

