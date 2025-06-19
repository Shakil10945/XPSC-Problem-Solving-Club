#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
vector<int> b;

void input()
{
    cin >> n;
    a.resize(n);
    b.resize(n);
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
}

void solve()
{
    input();
    vector<pair<int,int>>ans;

    while(true)
    {
        if(is_sorted(a.begin(),a.end()))    break;
        for(int i=0; i<n-1; i++)
        {
            if(a[i]>a[i+1])
                ans.push_back({1,i});
        }
    }
    while(true)
    {
        if(is_sorted(b.begin(),b.end()))        break;
        for(int i=0; i<n-1; i++)
        {
            if(b[i]>b[i+1])
                ans.push_back({2,i});
        }
    }
    for(int i=0; i<n; i++)
    {
            if(a[i]>b[i])
                ans.push_back({3,i});
    }
    
    cout<<ans.size()<<endl;
    for(auto xx: ans)
        cout<<xx.first<<" "<<xx.second<<endl;
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