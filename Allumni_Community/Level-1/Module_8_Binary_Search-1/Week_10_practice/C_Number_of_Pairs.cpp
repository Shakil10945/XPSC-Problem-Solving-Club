#include <bits/stdc++.h>
using namespace std;

int n,ll,rr;
vector<int> vec;

void input()
{
    cin >> n >> ll>>rr;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();
    sort(vec.begin(),vec.end());
    long long ans=0;


    for(int i=0; i<n-1; i++)
    {
        int key = (ll - vec[i]), key2 = (rr-vec[i]);
        //if(key<0 || key2<0)   continue;

        int l = i+1, r=n-1, mid;
        int left_index = -1, right_index= -1;
        while (l<=r)
        {
            mid = (l+r)/2;

            if(vec[mid]>=key)
            {
                left_index = mid;
                r = mid-1;
            }
            else
                l=mid+1;
        }
        l = i+1, r=n-1, mid;
        while (l<=r)
        {
            mid = (l+r)/2;

            if(vec[mid]<=key2)
            {
                right_index = mid;
                l = mid+1;
            }
            else
                r = mid-1;
        }

        //cout<<left_index <<" "<<right_index<<endl;

        if(left_index!=-1 && right_index!=-1)   ans+=(right_index-left_index+1);
        
    }
    cout<<ans<<endl;
    //cout<<ans<<endl;
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