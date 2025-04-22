#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();
    
    long long ans = 0;
    int x=0;

    //cout<<"HI"<<endl;

    int r=0;
    while(r<n)
    {
        //cout<<"H...."<<endl;
        
        if(vec[r]<0)
        {
            while (r<n && vec[r] < 1)
            {
                ans+= (-vec[r]);
                r++;
            }
            x++;
        }
        else
        {
            ans+=vec[r];
            r++;
        }
        //r++;
    }
    cout<<ans<<" "<<x<<endl;
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