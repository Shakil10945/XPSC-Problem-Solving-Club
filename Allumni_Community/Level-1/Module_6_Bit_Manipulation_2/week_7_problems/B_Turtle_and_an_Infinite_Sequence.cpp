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
        int n, m;   cin>>n>>m;

        if(m==0)
        {
            cout<<n<<endl;
            continue;
        }
        if(n==0)
        {
            int ans = 0;
            int i=0;
            while(m>0)
            {
                ans +=(1<<i);

                m-=(1<<i);
                i++;
            }
            cout<<ans<<endl;
            continue;
        }
        int ans = 0;
        if(n>= __bit_ceil(n)-1)
        {
            ans = n|(n+1);
            m-= (__bit_ceil(n));
        }
        else
        {
            ans = __bit_ceil(n)-1;
            m-=(__bit_ceil(n)-n);
        }
        int bit = __lg(ans);
        while (m>0)
        {
            m-=(1<<bit);
            ans+=(1<<(bit+1));
            
        }
        cout<<ans<<endl;
        
        
    }

    return 0;
}

