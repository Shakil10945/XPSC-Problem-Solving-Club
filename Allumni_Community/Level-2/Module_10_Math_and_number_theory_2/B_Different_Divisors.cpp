#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;  cin>>n;
    vector<int>p;
    for(int i=n+1; ;i++)
    {
        int t= 1;
        for(int j=2; j*j<=i; j++)
        {
            if(i%j==0)
            {
                t = 0;
                break;
            }
        }
        if(t)
        {
            p.push_back(i);
            break;
        }
    }
    for(int i= p.back()+n; ; i++)
    {
        int t = 1;
        for(int j=2; j*j<=i; j++)
        {
            if(i%j==0)
            {
                t= 0;
                break;
            }
        }
        if(t)
        {
            p.push_back(i);
            break;
        }
    }

    cout<<1ll*p[0]*p[1]<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

