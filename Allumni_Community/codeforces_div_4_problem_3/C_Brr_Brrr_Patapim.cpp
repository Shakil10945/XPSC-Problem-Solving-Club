#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> vec;

void input()
{
    cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
    {
        vector<int> a(n);
        for(int j=0; j<n;j++)
        {
            cin>>a[j];
        }
        vec[i] = a;
    }
    
}

void solve()
{
    input();

    map<int, int> mymap;
    for(int i=2; i<=2*n; i++)
        mymap[i] = -1;
    
    for(int i=0;i<n; i++)
    {
        for(int j=0;j<n; j++)
        {
            mymap[i+1 +j+1] = vec[i][j];
        }
    }
    set<int> myset;
    for(auto x: mymap)
    {
        myset.insert(x.second);
    }

    for(int i=1; i<=2*n;i++)
    {
        if(!myset.count(i)) cout<<i<<" ";
    }

    for(auto x: mymap)
        cout<<x.second<<" ";
    
    cout<<endl;

    
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