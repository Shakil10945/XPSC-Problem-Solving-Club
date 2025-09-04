#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> vec;

void input()
{
    cin >> n>>m;
    vec.resize(n, {});

    for (int i = 0; i < n; i++)
    {
        vector<int>a;
        for(int j=0;j<m; j++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        vec[i] = a;
    }
    
}

void solve()
{
    input();
    
    map<long long, vector<int>, greater<long long>>mp;
    for(int i=0; i<n; i++)
    {
        long long sum = 0;
        for(int j=0; j<m; j++)
            sum+=vec[i][j];


        if(mp.count(sum))
        {
            for(int k = 0; k<m; k++)
            {
                mp[sum].push_back(vec[i][k]);
            }
            continue;
        }
        mp[sum] = vec[i];
    }

    vector<int> ans;
    for(auto x: mp)
    {
        for(auto y: x.second)
            ans.push_back(y);
    }
    long long anss = 0;
    for(int i=0; i<ans.size(); i++)
        anss += (1LL*ans[i]*(ans.size()-i));

    cout<<anss<<endl;
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