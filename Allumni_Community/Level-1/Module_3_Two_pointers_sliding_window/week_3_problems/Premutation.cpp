#include <bits/stdc++.h>
using namespace std;

int n;
set<vector<int>> vec;

void input()
{
    cin >> n;
    //vec.resize(n);

    vector<int>vec2;
    for (int i = 0; i < n; i++)
    {
        vec2.resize(n-1);
        for(int j=0; j<n-1; j++)
        {
            cin>>vec2[j];
        }
        vec.insert(vec2);
    }
}

void solve()
{
    input();

    for(auto x: vec)
    {
        vector<int> d = x;
        for(int i=1; i<=n; i++)
        {
            auto it =find(d.begin(),d.end(), i);
            if(it == d.end())
            {
                cout<<i<<" ";
                break;
            }
        }
        //cout<<endl;
    }
    cout<<endl;
    vec.clear();
    
    
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