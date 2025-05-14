#include <bits/stdc++.h>
using namespace std;

int n,x,y;
vector<int> vec;

void input()
{
    cin >>n>>x>>y;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    vector<int>arr;
    int d = (x%vec[0]);
    if(d==y)
    {
        arr.push_back(0);
    }
    cout<<d<<endl;
    for(int i=1; i<n;i++)
    {
        d = (d%vec[i]);
        if(d==y)
        {
            arr.push_back(i);
        }
    }
    cout<<arr.size()<<endl;
    for(auto xx: arr)
        cout<<xx+1<<" ";
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