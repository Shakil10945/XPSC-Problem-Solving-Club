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
        int n, k;   cin>>n>>k;

        
        

        int l = 0, r= n-1, mid;
        long long  ans =0;
        auto ok = [&](int mid)
        {
            long long left = (((k+mid)*(k+mid-1)*1LL)/2) -( ((k+l-1)*(k+l-2)*1LL)/2);
            long long right = ((k+r)*(k+r-1)/2) - ((k+mid-1)*(k+mid-2)/2);

            if(left-right>=0)
            {
                ans = left-right;
            }

            return (left-right>=0);

        };
        while(l<=r)
        {
            mid = l+(r-l)/2;

            if(ok(mid))
            {
                r= mid-1;
            }
            else
                l = mid+1;

        }
        cout<<ans<<endl;
    }

    return 0;
}

