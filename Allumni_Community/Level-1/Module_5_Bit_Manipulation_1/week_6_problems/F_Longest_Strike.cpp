#include <bits/stdc++.h>
using namespace std;

int n,k;
vector<int> vec;

void input()
{
    cin >> n >> k;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    map<int,int>mymap;
    for(auto x: vec)
        mymap[x]++;
    map<int, vector<int>> mp;
    for(auto x: mymap)
    {
        if(x.second>=k)
            mp[k].push_back(x.first);
    }
    

    if(mp[k].size()<2)
    {
        cout<<-1<<endl;
        return;
    }

    cout<<*mp[k].begin()<<" "<<*mp[k].rbegin()<<endl;
    
    
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