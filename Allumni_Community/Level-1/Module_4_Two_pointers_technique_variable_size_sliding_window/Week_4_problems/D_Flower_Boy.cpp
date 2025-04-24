#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> vec;
vector<int> vec2;

void input()
{
    cin >> n>>m;
    vec.resize(n);
    vec2.resize(m);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    for (int i = 0; i < m; i++)
        cin >> vec2[i];
    
}

void solve()
{
    input();

    map<int, set<int>>mymap;
    for(int i=0;i<n; i++)
    {
        mymap[vec[i]].insert(i);
    }

    
    
    
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