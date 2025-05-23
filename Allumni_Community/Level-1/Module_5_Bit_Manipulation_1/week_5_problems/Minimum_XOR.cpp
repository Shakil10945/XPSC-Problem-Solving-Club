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
    
    int xooor = 0;
    for(auto x: vec)
        xooor ^=x;
    
    int xx = xooor;
    //cout<<xooor<<endl;
    for(int x: vec)
        xx = min(xx, xooor^x);
    cout<<xx<<endl;
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