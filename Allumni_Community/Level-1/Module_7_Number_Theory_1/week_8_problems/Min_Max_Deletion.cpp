#include <bits/stdc++.h>
using namespace std;

int n, q;
vector<int> vec;

void input()
{
    cin >> n>>q;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();
    
    vector<int>ss(n+1);
    ss[0]=0;
    for(int i=1; i<n; i++)
    {
        ss[i] = min(vec[i], vec[i-1]);
    }
    ss[n]=min(vec[n-1],vec[n-2]);
    long long sum = accumulate(ss.begin(),ss.end(),0LL);
    for(int i=0; i<q; i++)
    {
        int p, x;
        cin>>p>>x;
        if(p==1 || p==n)
        {
            sum-=ss[p];
        }
        else
        {
            sum-=(ss[p]+ss[p-1]);
        }
        vec[p-1] = x;

        if(p==1)
        {
            ss[1] = min(vec[p-1], vec[p]);

            sum+=ss[p];
        }
        if(p==n)
        {
            ss[n] = min(vec[p-2], vec[p-1]);
            sum+=ss[p];
        }
        else
        {
            ss[p-1] = min(vec[p-1], vec[p-2]);
            ss[p] = min(vec[p-1],vec[p]);

            sum+=(ss[p]+ss[p-1]);

        }
        cout<<sum<<endl;
    }
    
    
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