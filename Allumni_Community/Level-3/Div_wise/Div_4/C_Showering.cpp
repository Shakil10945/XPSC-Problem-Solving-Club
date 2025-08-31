#include <bits/stdc++.h>
using namespace std;

int n, s, m;
vector<pair<int,int>> vec;

void input()
{
    cin >> n>>s>>m;
    vec.resize(n);

    for (int i = 0; i < n; i++)
       cin >> vec[i].first>>vec[i].second;
    
}

void solve()
{
    input();

    if(vec[0].first>=s || m-vec[n-1].second>=s)
    {
        cout<<"YES"<<endl;
        return;
    }

    for(int i=1; i<n; i++)
    {
        if(vec[i].first - vec[i-1].second >=s)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    
    
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