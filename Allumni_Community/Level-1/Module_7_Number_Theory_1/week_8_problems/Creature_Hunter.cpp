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
        int n, h;   cin>>n>>h;
        int d1=0;
        int d2=0;
        for (int i=0; i<n; i++)
        {
            int x,y;cin>> x>>y;
            if (x==1)  d1 =max(d1,y);
            else       d2 =max(d2,y);
        }
        int ans=INT_MAX;
        if(d1>0)
        {
            ans =min(ans, (h + d1 - 1)/d1);
        }
        if(d2>0)
        {
            ans =min(ans,((h +d2-1)/d2) *2);
        }
        if (d1>0 && d2>0)
        {
            for (int i=0; i<=100;i++)
            {
                long long total= 1LL *i*d2;
                if (total >=h)
                {
                    ans = min(ans,i*2);
                    break;
                }
                int rem = h-total;
                int cnt = (rem+ d1 -1)/d1;
                ans = min(ans,i*2+cnt);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}