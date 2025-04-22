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
        int n, k;    cin>>n>>k;
        string str;     cin>>str;

        int l=0, r=0;
        int ans = INT_MAX;
        int w =0;
        while (r<n)
        {
            if(str[r] == 'W')   w++;
            
            if(r-l+1 == k)
            {
                ans = min(ans, w);
                if(str[l] == 'W')   w--;

                r++,l++;
            }
            else
                r++;
        }
        cout<<ans<<endl;
        
    }

    return 0;
}

