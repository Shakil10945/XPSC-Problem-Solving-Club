#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<tuple<int,int,int>> vec;

void input()
{
    cin >> n>>k;
    vec.resize(n);


    for (int i = 0; i < n; i++)
    {
        int l, real, r;
        cin>>l>>r>>real;

        vec[i] = (make_tuple(real, l , r));
    }
    
}

void solve()
{
    input();

    sort(vec.begin(),vec.end());

    for(int i=0; i<n;i++)
    {
        int real, l, r;
        tie(real, l, r) = vec[i];
        if(k>=real)
        {
            continue;
        }
        else
        {
            if(l<=k && k<=r)
            {
                k= real;
            }

        }
    }
    cout<<k<<endl;
    
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