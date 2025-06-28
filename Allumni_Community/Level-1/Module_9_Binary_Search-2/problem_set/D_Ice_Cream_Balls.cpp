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
        long long n;
        cin>>n;
        //cout<<n<<endl;

        auto ok = [&](int mid)
        {
            long long cnt = 0;

            for(int i=1; i<=mid; i++)
            {
                cnt+=(mid-i);
                if(cnt>=n)
                    return true;
            }
            return cnt>=n;
        };





        int l=1, r = 1e9, mid, ans;

        while(l<=r)
        {
            mid = l + (r-l)/2;
            if(ok(mid))
            {
                ans = mid;
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}

