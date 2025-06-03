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

    int x = vec[0];
    bool ch = true;
    for(int i=1; i<n;i++)
    {
        if(x!=vec[i])
            ch = false;
    }
    if(ch)
    {
        cout<<0<<endl;
        return;
    }

    long long cost = min((1LL*vec[0]*(n-1)), (1LL*vec[n-1]*(n-1)));

    int r=0;
    while(r<n)
    {
        int d = vec[r];
        int pos = r;
        long long lcost =1LL*d*pos;
        while(r<n && vec[r]==d)
        {
            r++;
        }
        long long rcost = 1LL*d*(n-r);

        cost = min(cost, (lcost+rcost));
        
    }



    // for(int i=0; i<n; i++)
    // {
    //     if(i==0)
    //     {
    //         cost = min(cost, (1LL*vec[0]*(n-1)));
    //     }
    //     if(i==n-1)
    //     {
    //         cost = min(cost, );
    //     }
    //     else
    //     {
    //         cost = min(cost, (1LL*vec[i]*(i))+(1LL*vec[i]*(n-(i+1))));
    //     }
    // }
    cout<<cost<<endl;
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