#include <bits/stdc++.h>
using namespace std;

int n;
vector<long long> vec;

void input()
{
    cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin>>x;
        vec[i] =x;
    }
    
}

void solve()
{
    input();

    long long gcd1 = 0, gcd2=0;
    for(int i=0; i<n;i++)
    {
        if(i%2)
            gcd2 = __gcd(gcd2, vec[i]);
        else
            gcd1 = __gcd(gcd1,vec[i]);
    }
    //cout<<gcd1<<" "<<gcd2<<endl;
    bool c = false, d =false;
    for(int i=0;i<n;i++)
    {
        if(i%2)
        {
            if(c)   continue;
            if(vec[i]%gcd1==0)
            {
                gcd1 = 0;
                c=1;
            }    
        }
        else
        {
            if(d)   continue;
            if(vec[i]%gcd2==0)
            {    
                gcd2 = 0;
                d =1;
            }
        }
    }

    if(!gcd1 && !gcd2)
        cout<<0<<endl;
    else
        cout<<max(gcd1,gcd2)<<endl;
    
    
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